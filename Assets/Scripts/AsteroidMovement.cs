using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidMovement : MonoBehaviour
{
    public float speed = 0.01f;
    public float spawnOffset = 10f;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Vector2 pos = transform.position;

        pos.y = (float)(pos.y - speed * 8 * Time.deltaTime);

        float screen_ratio = (float)(Screen.width) / (float)(Screen.height);
        float width_ortho = (float)(screen_ratio * Camera.main.orthographicSize);

        if (pos.y < -Camera.main.orthographicSize - 1)
        {
            pos.y = Random.Range(Camera.main.orthographicSize + 1, Camera.main.orthographicSize + spawnOffset);
            pos.x = Random.Range(-width_ortho, width_ortho);
        }

        transform.position = pos;
    }




}
