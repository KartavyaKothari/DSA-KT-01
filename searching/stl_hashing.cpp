#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,bool> h;
    map<string,string> phonebook;
    // unordered_map<string,string> phonebook;

    phonebook["kartavya"] = "9958667496";
    phonebook["savvy"] = "9458667496";

    string name;
    cin>>name;

    if(phonebook.find(name) == phonebook.end()){
        cout<<"Number not found"<<endl;
    }else{
        cout<<"Number of "<<name<<" is "<<phonebook[name]<<endl;
    }

    return 0;
}