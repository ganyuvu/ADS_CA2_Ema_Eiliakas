#pragma once
#include "BSTNode.h"
#include "BinaryTree.h"
#include <iostream>
#include <stdexcept>

template <class K, class V>
class TreeMap
{
private:
    BinaryTree<MapPair<K, V>> tree;

public:
    TreeMap();

    void clear();
    bool contains(K key);
    V& get(K key);
    BinaryTree<K> keySet();
    void put(K key, V value);
    int size();
    bool removeKey(K key);
    V operator[](K key);

    ~TreeMap();

};