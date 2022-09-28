using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerLaser : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	    
	// Update is called once per frame
	void Update () {
        Vector2 pos = transform.position;
        pos.y = pos.y + Time.deltaTime * 10;
        transform.position = pos;

        if(pos.y > Camera.main.orthographicSize + 1){
            Destroy(gameObject);
        }
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Enemy"){
            
            Destroy(gameObject);
        }
    }


}
