#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key, value;
    Node *next;
    Node *prev;
    Node(int k, int v) : key(k), value(v), prev(NULL), next(NULL) {}
};

class LRUcache
{
private:
    int capacity;
    unordered_map<int, Node *> mp;
    Node *head;
    Node *tail;

    void addNode(Node* node)
    {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }
    void deleteNode(Node* node)
    {
        Node* nextNode = node->next;
        Node* prevNode = node->prev;
        nextNode->prev = prevNode;
        prevNode->next = nextNode;
    }
public:
   LRUcache(int capacity){
    this->capacity = capacity;
    head = new Node(-1,-1);
    tail = new Node(-1,-1);
    head->next = tail;
    tail->prev = head;
   }

   int get (int key){
    if(mp.find(key) == mp.end()) return -1;

    Node* node = mp[key];
    int result = node->value;
    deleteNode(node);
    addNode(node);
    mp[key] = head->next; // mp[key] = node;
    return result;

   }
   
   void put(int key, int value){
    if(mp.find(key) != mp.end()){
        Node* node = mp[key];
        deleteNode(node);
        mp.erase(key);
    }
    if(mp.size() == capacity){
        Node* lru = tail->prev;
        mp.erase(lru->key);
        deleteNode(lru);
    }

    Node* newNode = new Node(key,value);
    addNode(newNode);
    mp[key] = head->next;  // mp[key] = node;
   }
};
//tc = 0(1)
//sc = )(n)