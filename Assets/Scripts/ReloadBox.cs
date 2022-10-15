using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ReloadBox : MonoBehaviour
{
    
    private Player player;
    private Text status_text;

    public float speed = 0.1f;
    public float reload_speed = 0.25f;



    // Use this for initialization
    void Start()
    {
        player = GameObject.Find("player_ship").GetComponent<Player>();
        status_text = GameObject.Find("status_text").GetComponent<Text>();


    }

    // Update is called once per frame
    void Update()
    {

        Vector2 pos = transform.position;
        pos.y = (float)(pos.y - speed * 8 * Time.deltaTime);
        transform.position = pos;

        if (pos.y < -Camera.main.orthographicSize - 1)
        {
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Destroy(gameObject);

            player.reload_time = reload_speed;
            status_text.text = "RELOAD BOOST ACTIVE";
            player.reload_left = 5;



        }

    }
}

