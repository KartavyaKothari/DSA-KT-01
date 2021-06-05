#include<bits/stdc++.h>
using namespace std;


class Person{
    public:
    string name;
    Person(){
        this->name = "Kartavya";
    }
};

Person* func(){
    Person p;
    return new Person();
}

int main(){
    Person *p = new Person();
    Person *p = func();
    cout<<p->name;

    func();
    return 0;
}