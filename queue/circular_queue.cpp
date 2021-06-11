#include<bits/stdc++.h>
using namespace std;

class Queue{
    int arr[10];
    int front;
    int rear;
    int size;

    public:
    Queue(){
        front = rear = size = 0;
    }

    int get_size(){
        return size;
    }

    void push(int ele){
        if(size==10){
            cout<<"Queue overflow"<<endl;
            return;
        }

        arr[rear] = ele;
        rear = (rear+1)%10;

        size++;
    }

    void pop(){
        if(size == 0){
            cout<<"Queue underflow"<<endl;
            return;
        }

        front = (front+1)%10;
        size--;
    }

    int peek(){
        if(size == 0){
            cout<<"Queue empty"<<endl;
            return -1;
        }

        return arr[front];
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