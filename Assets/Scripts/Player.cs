using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Player : MonoBehaviour {

    public float player_speed = 10;
    public float drag = .03f;
    public float reload_time = .5f;
    public float boost_add = 1;
    public float boost_expend = 1;
    public float asteroid_damage = 1;


    private int horizontal = 0;
    private int fire = 0;
    private int vertical = 0;

    private int sound_play;
  

    float timer = 0.0f;
    public int kill_count = 0;

    public int reload_left;

    private Slider hp_bar;
    private Slider boost_bar;
    private Text hp_number;
    private SpriteRenderer boost;
    private SpriteRenderer player;
    private Slider reload_bar;
    private Text status_text;
    private Text game_over;
    private AudioSource laser_sound;
    private AudioSource scrape_sound;
    private AudioSource rocket_sound;

    public GameObject laser_1;



    void Start()
    {
        hp_bar = GameObject.Find("hp_bar").GetComponent<Slider>();
        hp_number = GameObject.Find("hp_number").GetComponent<Text>();
        boost = GameObject.Find("boost").GetComponent<SpriteRenderer>();
        boost_bar = GameObject.Find("boost_bar").GetComponent<Slider>();
        player = GameObject.Find("player_ship").GetComponent<SpriteRenderer>();
        reload_bar = GameObject.Find("reload_bar").GetComponent<Slider>();
        status_text = GameObject.Find("status_text").GetComponent<Text>();
        game_over = GameObject.Find("game_over").GetComponent<Text>();
        laser_sound = GameObject.Find("player_ship").GetComponent<AudioSource>();
        scrape_sound = GameObject.Find("asteroid_3").GetComponent<AudioSource>();
        rocket_sound = GameObject.Find("asteroid_4").GetComponent<AudioSource>();


    }
	
	void Update () {
        float screen_ratio = (float)(Screen.width) / (float)(Screen.height);
        float width_ortho = (float)(screen_ratio * Camera.main.orthographicSize);


        Vector2 pos = transform.position;
        //move player

        foreach (Touch touch in Input.touches)
        {
            if(touch.phase == TouchPhase.Began && touch.position.x > 325 && touch.position.y > 300)
            {
                horizontal = 1;
            }
            if(touch.phase == TouchPhase.Began && touch.position.x < 325 && touch.position.y > 300)
            {
                horizontal = -1;
            }
            if(touch.phase == TouchPhase.Began && touch.position.x < 325 && touch.position.y < 300)
            {
                fire = 1;

            }

            if (touch.phase == TouchPhase.Began && touch.position.x > 325 && touch.position.y < 300)
            {
                vertical = 1;
            }

            if (touch.phase == TouchPhase.Ended)
            {
                horizontal = 0;
                fire = 0;
                vertical = 0;
                sound_play = 0;
            }
        }


        pos.x = pos.x + (horizontal * Time.deltaTime * player_speed) + (Input.GetAxis("Horizontal") * Time.deltaTime * player_speed);
        //check if there is boost to use
        if ((vertical > 0 || Input.GetAxis("Vertical") > .5) && boost_bar.value > 0 && hp_bar.value > 0)
        {

            if (sound_play == 0) {
                rocket_sound.Play();
            }
            sound_play = 1;
            pos.y = pos.y + (Input.GetAxis("Vertical") * Time.deltaTime * player_speed / 2) + (vertical * Time.deltaTime * player_speed / 2);
            boost.enabled = true;
            boost_bar.value = boost_bar.value - boost_expend * 200 * Time.deltaTime;
        }
        else if(boost_bar.value <= 0){
            boost_bar.value = 0;
            boost.enabled = false;
        }       
        else{
            boost.enabled = false;
            boost_bar.value = boost_bar.value + boost_add;
        }
        //drag pulling player
        pos.y = (float)(pos.y - drag * 30 * Time.deltaTime);

        timer = timer + Time.deltaTime;
        //fire a laser
        if(Input.GetAxis("Fire1") > 0 && timer > reload_time && hp_bar.value > 0){
            reload_bar.value = 0;
            Instantiate(laser_1, player.transform.position, player.transform.rotation);
            timer = 0.0f;
            laser_sound.Play();
        }

        reload_bar.value = reload_bar.value + (reload_bar.maxValue / 30 /  reload_time);
        //define screen limits

        //keep player within screen
        if (pos.x > width_ortho)
        {
            pos.x = width_ortho;
        }
        if (pos.x < -width_ortho)
        {
            pos.x = -width_ortho;
        }
        if (pos.y > Camera.main.orthographicSize)
        {
            pos.y = Camera.main.orthographicSize;
        }
        if (pos.y < -Camera.main.orthographicSize)
        {
            hp_bar.value = hp_bar.value - 1;
            hp_number.text = "HP: " + hp_bar.value.ToString();
        }
        //move player
        transform.position = pos;


        if(hp_bar.value == 0)
        {
            game_over.text = "GAME OVER";
        }
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Asteroid")
        {
            hp_bar.value = hp_bar.value - asteroid_damage;
            hp_number.text = "HP: " + hp_bar.value.ToString();

            reload_left = reload_left - 1;

            scrape_sound.Play();

            if(reload_left == 0){
                status_text.text = "RELOAD BOOST INACTIVE";
                reload_time = .5f;
            }


        }
    }
}
