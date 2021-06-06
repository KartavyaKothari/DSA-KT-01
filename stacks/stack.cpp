#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[50];
    int top_idx;
    public:
    Stack(){
        top_idx = -1;
    }
    int size(){
        return top_idx+1;
    }
    void push(int ele){
        // Push the ele into stack
        if(top_idx == 49){
            // cout<<"Stack overflow"<<endl;
            // return;
            throw "Stack overflow";
        }
        arr[++top_idx] = ele;
    }
    void pop(){
        if(top_idx==-1){
            // cout<<"Stack underflow"<<endl;
            // return;
            throw "Stack underflow";
        }

        top_idx--;
    }
    int top(){
        // Return the top element
        if(top_idx==-1){
            // cout<<"Stack empty"<<endl;
            // return -1;
            throw "Stack empty";
        }
        return arr[top_idx];
    }
};

int main(){
    Stack s;
    // stack<int> s;

    cout<<"Size: "<<s.size()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Size: "<<s.size()<<endl;

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top();


    return 0;
}