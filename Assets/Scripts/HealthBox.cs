using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBox : MonoBehaviour {

    private Slider hp_bar;
    private Text hp_number;


    public float speed = 0.1f;
    public int hp_add = 20;



	// Use this for initialization
	void Start () {
        hp_bar = GameObject.Find("hp_bar").GetComponent<Slider>();
        hp_number = GameObject.Find("hp_number").GetComponent<Text>();

	}
	
	// Update is called once per frame
    void Update () {
        
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
        if(collision.gameObject.tag == "Player"){

            Destroy(gameObject);
            hp_bar.value = hp_bar.value + hp_add;
            hp_number.text = "HP: " + hp_bar.value.ToString();
        }
              
    }
}
