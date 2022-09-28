using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Enemy : MonoBehaviour {

    public float speed = 0.005f;
    public int health = 5;
    public int laser_rate = 10;

    private Text kill_text;
    private Player player;
    public  GameObject laser;

    private AudioSource death_sound;
    private AudioSource laser_sound;


    // Use this for initialization
    void Start () {

        player = GameObject.Find("player_ship").GetComponent<Player>();
        kill_text = GameObject.Find("kill_text").GetComponent<Text>();
        death_sound = GameObject.Find("background").GetComponent<AudioSource>();
        laser_sound = GameObject.Find("asteroid_1").GetComponent<AudioSource>();
        
    }
	
	// Update is called once per frame
	void Update () {
        Vector2 pos = transform.position;
        pos.y = (float)(pos.y - speed);
        transform.position = pos;

        if (pos.y < -Camera.main.orthographicSize - 1)
        {
            Destroy(gameObject);
        }

        if (Random.Range(0, 1000) <= laser_rate)
        {

            Instantiate(laser, transform.position, transform.rotation);
            laser_sound.Play();
        }
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Laser"){
            health = health - 1;
 
            if(health <= 0){
                Destroy(gameObject);
                death_sound.Play();
                player.kill_count = player.kill_count + 1;
                Debug.Log(player.kill_count.ToString());
                kill_text.text = "Kills: " + player.kill_count.ToString();

            }
        }
    }
}
