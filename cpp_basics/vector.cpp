#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int a;
    int b;
};

void display(vector<int> arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;
}

int main(){
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    display(arr);

    cout<<arr.size()<<endl;
    arr.pop_back();
    cout<<arr.size()<<endl;

    display(arr);
    return 0;
}