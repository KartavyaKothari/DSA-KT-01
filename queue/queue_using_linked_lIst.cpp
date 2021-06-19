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

class Queue{
    LinkedList lst;
    public:
    int get_size(){
        return lst.size;
    }

    void push(int ele){
        lst.push_end(ele);
    }

    void pop(){
        lst.pop_front();
    }

    int peek(){
        return lst.view_front();
    }
};

int main(){
    Queue q;
    
    for(int i = 1 ; i <= 10 ; i++)
        q.push(i*10);

    q.push(110);

    cout<<"Size is "<<q.get_size()<<endl;

    for(int i = 1 ; i <= 10 ; i++){
        cout<<q.peek()<<" ";
        q.pop();
    }

    cout<<endl;

    cout<<"Size is "<<q.get_size()<<endl;

    q.push(10);

    cout<<"Size is "<<q.get_size()<<endl;
    cout<<q.peek()<<" ";

    return 0;
}