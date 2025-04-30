#include <iostream>  
using namespace std;
// Brute Force 
class MyLinkedList {
public:
    class Node {
    public:
        int data;
        Node* next;
        Node(int data) : data(data), next(nullptr) {}
    };

    Node* head;
    int size;

    MyLinkedList() : head(nullptr), size(0) {}

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->data;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void addAtTail(int val) {
        Node* temp = new Node(val);
        if (!head) {
            head = temp;
        } else {
            Node* p = head;
            while (p->next) {
                p = p->next;
            }
            p->next = temp;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* t = new Node(val);
        Node* p = head;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            
        } else {
            Node* n = head;
            for (int i = 0; i < index - 1; i++) {
                n = n->next;
            }
            Node* temp = n->next;
            n->next = n->next->next;
            
        }
        size--;
    }
};
