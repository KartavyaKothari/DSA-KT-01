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
    void push_end(int ele){}

    // 1.5 marks
    void push_front(int ele){}

    // 1 marks
    void pop_end(){}

    // 1.5 marks
    void pop_front(){}

    // 1 marks
    int view_last(){}

    // 1 marks
    int view_front(){}

    // 3 marks
    void display_lst(){}

    // Edit ends here
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