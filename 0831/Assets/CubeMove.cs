using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMove : MonoBehaviour {

	void Start () {
		
	}
	
	void Update () {
        if (Input.GetKey(KeyCode.W))
            transform.position = transform.position + transform.forward;
        else if (Input.GetKey(KeyCode.S))
            transform.position = transform.position - transform.forward;
        else if (Input.GetKey(KeyCode.A))
            transform.position = transform.position - transform.right;
        else if (Input.GetKey(KeyCode.D))
            transform.position = transform.position + transform.right;
	}
}
