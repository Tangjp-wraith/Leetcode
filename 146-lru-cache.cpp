#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/*
 * 哈希表+双向链表
 */

struct DLinkedNode {
    int key, value;
    DLinkedNode *prev;
    DLinkedNode *next;

    DLinkedNode() : key(0), value(0), prev(nullptr), next(nullptr) {}

    DLinkedNode(int _key, int _value) : key(_key), value(_value), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    std::unordered_map<int, DLinkedNode *> cache;
    DLinkedNode *head;
    DLinkedNode *tail;
    int size;
    int capacity;
public:

    LRUCache(int _capacity) : capacity(_capacity), size(0) {
        head = new DLinkedNode();
        tail = new DLinkedNode();
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (!cache.count(key)) {
            return -1;
        }
        DLinkedNode *node = cache[key];
        moveToHead(node);
        return node->value;
    }

    void put(int key, int value) {
        if (!cache.count(key)) {
            auto *node = new DLinkedNode(key, value);
            cache[key] = node;
            addToHead(node);
            ++size;
            if(size>capacity){
                DLinkedNode* removed=removeTail();
                cache.erase(removed->key);
                delete removed;
                --size;
            }
        }else{
            DLinkedNode* node=cache[key];
            node->value=value;
            moveToHead(node);
        }
    }

    void moveToHead(DLinkedNode *node) {
        removeNode(node);
        addToHead(node);
    }

    void addToHead(DLinkedNode *node) {
        node->prev=head;
        node->next=head->next;
        head->next->prev=node;
        head->next=node;
    }

    void removeNode(DLinkedNode* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }

    DLinkedNode* removeTail(){
        DLinkedNode* node=tail->prev;
        removeNode(node);
        return node;
    }
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)