using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BoostBox : MonoBehaviour {

 
    private Slider boost_bar;




    public float speed = 0.1f;
    public int boost_add = 500;

	// Use this for initialization
	void Start () {
        boost_bar = GameObject.Find("boost_bar").GetComponent<Slider>();
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
        if (collision.gameObject.tag == "Player")
        {
            Destroy(gameObject);
            boost_bar.value = boost_bar.value + boost_add;
        }

    }
}
