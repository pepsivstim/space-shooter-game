using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPowerup : MonoBehaviour {



    public int rarity1 = 100;
    public int rarity2 = 100;
    public int rarity3 = 100;
    public int enemy_rate = 1;

    public GameObject powerup1;
    public GameObject powerup2;
    public GameObject powerup3;

    public GameObject enemy1;
    public GameObject enemy2;
    public GameObject enemy3;
    public GameObject enemy4;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        float screen_ratio = (float)(Screen.width) / (float)(Screen.height);
        float width_ortho = (float)(screen_ratio * Camera.main.orthographicSize);

        if (Random.Range(0, 100000) <= 1)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(powerup1, randomPos, transform.rotation);
        }

        if (Random.Range(0, 100000) <= 1)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(powerup2, randomPos, transform.rotation);
        }

        if (Random.Range(0, 100000) <= 1)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(powerup3, randomPos, transform.rotation);
        }


        if (Random.Range(0, 100000) <= enemy_rate)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(enemy1, randomPos, transform.rotation);
        }

        if (Random.Range(0, 100000) <= enemy_rate)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(enemy2, randomPos, transform.rotation);
        }

        if (Random.Range(0, 100000) <= enemy_rate)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(enemy3, randomPos, transform.rotation);
        }

        if (Random.Range(0, 100000) <= enemy_rate)
        {
            Vector2 randomPos = new Vector2(Random.Range(-width_ortho, width_ortho), 8);
            Instantiate(enemy4, randomPos, transform.rotation);
        }


	}
}
