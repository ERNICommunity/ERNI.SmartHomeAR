using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System.Collections;
using System.Collections.Generic;

using System.Runtime.CompilerServices;
using UnityEngine;

public class SmartControllerSpawner : MonoBehaviour
{
    public const string centerObjectTag = "CenterObject";

    [SerializeField]
    private GameObject prefab;

    private bool isSpawned;

    private GameObject spawnedObject;
    private GameObject centerObject;

    private TapToPlace spawnedObjectTapToPlace => spawnedObject.GetComponent<TapToPlace>();
    private Collider spawnedObjectCollider => spawnedObject.GetComponent<Collider>();
    private Collider centerObjectCollider => centerObject.GetComponent<Collider>();

    public void Spawn()
    {
        if (!isSpawned)
        {
            spawnedObject = Instantiate(prefab, Vector3.forward, Quaternion.identity);
            centerObject = FindPrefabChildWithTag(spawnedObject, centerObjectTag);
        }

        isSpawned = true;
        Move();
    }

    public void Move()
    {
        spawnedObjectCollider.enabled = true;
        centerObjectCollider.enabled = false;
        spawnedObjectTapToPlace.enabled = true;
        spawnedObjectTapToPlace.StartPlacement();
    }

    public GameObject FindPrefabChildWithTag(GameObject gameObject, string tag)
    {
        foreach (Transform item in gameObject.transform)
        {
            if (item.tag == tag)
            {
                return item.gameObject;
            }

            var childGameObject = FindPrefabChildWithTag(item.gameObject, tag);
            if (childGameObject != null) {
                return childGameObject;
            }
        }
        return null;
    }
}
