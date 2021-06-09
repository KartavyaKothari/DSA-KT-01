#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data):data(data){
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList{
    Node *head;
    Node *tail;

    public:
    int size;
    LinkedList(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void push_end(int ele){
        Node *n = new Node(ele);
        
        if(tail==nullptr){
            head = tail = n;
            size = 1;
            return;
        }

        tail->next = n;
        n->prev = tail;
        tail = n;

        size++;
    }

    void push_front(int ele){
        Node *n = new Node(ele);

        if(head == nullptr){
            tail = head = n;
            size = 1;
            return;
        }

        head->prev = n;
        n->next = head;
        head = n;

        size++;
    }

    void pop_end(){
        if(tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }

        tail = tail->prev;
        tail->next = nullptr;

        size--;
    }

    void pop_front(){
        if(head == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }

        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }

        head = head->next;
        head->prev = nullptr;

        size--;
    }

    int view_last(){
        if(tail == nullptr){
            cout<<"List empty"<<endl;
            return -1;
        }

        return tail->data;
    }

    int view_front(){
        if(head == nullptr){
            cout<<"List empty"<<endl;
            return -1;
        }

        return head->data;
    }

    void display_lst(){
        Node *p = head;

        while(p!=nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }

        cout<<endl;
    }
};

int main(){
    LinkedList lst;
    lst.push_end(10);
    lst.push_end(20);
    lst.push_end(30);
    lst.push_end(40);

    cout<<"Size of my list is "<<lst.size<<endl;

    lst.push_front(50);
    lst.push_front(60);

    cout<<"First element in list is "<<lst.view_front()<<endl;
    cout<<"Last element in list is "<<lst.view_last()<<endl;

    lst.display_lst();

    lst.pop_end();
    lst.pop_front();

    lst.display_lst();

    return 0;
}