#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = nullptr;
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

    // Edit starts here
    // 1 marks
    void push_end(int ele){
        Node *n = new Node(ele);
        if(tail==nullptr){
            head = tail = n;
            size = 1;
            return;
        }

        tail->next = n;
        tail = n;

        size++;
    }

    // 1.5 marks
    void push_front(int ele){
        Node *n = new Node(ele);
        if(head==nullptr){
            tail = head = n;
            size = 1;
            return;
        }

        n->next = head;
        head = n;

        size++;
    }

    // 1 marks
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

        Node *p = head;

        while(p->next!=tail){
            p=p->next;
        }

        p->next = nullptr;
        tail = p;

        size--;
    }

    // 1.5 marks
    void pop_front(){
        if(head==nullptr){
            cout<<"List underflow"<<endl;
            return;
        }

        head = head->next;
        size--;

        if(head == nullptr){
            tail = nullptr;
        }
    }

    // 1 marks
    int view_last(){
        if(tail==nullptr){
            cout<<"List empty"<<endl;
            return -1;
        }

        return tail->data;
    }

    // 1 marks
    int view_front(){
        if(head == nullptr){
            cout<<"List empty"<<endl;
            return -1;
        }

        return head->data;
    }

    // 3 marks
    void display_lst(){
        Node *p = head;
        while(p!=nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }

        cout<<endl;
    }

    // Edit ends here
    // int search_ele(){}
    // void add_at_idx(int ele, int idx){}
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