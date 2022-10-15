using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerHandling : MonoBehaviour {

    public float timer = 0.00f;

    public Text time_number;



	// Use this for initialization
	void Start () {
        time_number = GameObject.Find("time_number").GetComponent<Text>();
	}
	
	// Update is called once per frame
	void Update () {
        timer = (float)System.Math.Round(timer + Time.deltaTime, 2);
        time_number.text = timer.ToString();
       



	}
}
