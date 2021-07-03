#include<bits/stdc++.h>
using namespace std;

class Hash{
    vector<bool> arr;
    int a, b;
    public:
    Hash(int a, int b):a(a),b(b){
        arr = vector<bool>(b-a+1,false);
    }

    int hash_fn(int ele){
        return ele%(b-a+1);
    }

    void insert(int ele){
        arr[hash_fn(ele)] = true;
    }

    bool is_present(int ele){
        return arr[hash_fn(ele)];
    }
};

int main(){
    // map<int,bool> h;
    Hash h(4000,4100);

    h.insert(4040);
    // h[4040] = true;
    h.insert(4100);
    // h[4100] = true;
    h.insert(4004);
    // h[4004] = true;

    int ele;
    cin>>ele;

    // if(h.find(ele) != h.end()){
    if(h.is_present(ele)){
        cout<<ele<<" is present"<<endl;
    }else{
        cout<<ele<<" is not present"<<endl;
    }

    return 0;
}