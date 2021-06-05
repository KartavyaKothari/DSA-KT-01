#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    cout<<arr.size()<<" "<<arr.capacity()<<endl;

    cout<<"Starting loop"<<endl;

    for(int i = 0 ; i < 30 ; i++){
        arr.push_back(i);
        cout<<arr.size()<<" "<<arr.capacity()<<endl;
    }

    return 0;
}