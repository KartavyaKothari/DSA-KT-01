#include<bits/stdc++.h>
using namespace std;

bool binary_search_rec(vector<int> &arr, int a, int b, int ele){
    if(a>b) return false;

    int m = (a+b)/2;

    if(arr[m] == ele) return true;

    if(ele < arr[m]) return binary_search_rec(arr,a,m-1,ele);

    return binary_search_rec(arr,m+1,b,ele);
}

bool binary_search_itr(vector<int> &arr, int ele){
    int a = 0, b = arr.size()-1, m;

    while(a<=b){
        m = (a+b)/2;
        if(arr[m]==ele) return true;
        if(ele < arr[m]) b = m-1;
        else a = m+1;
    }

    return false;
}

int lower_bound(vector<int> &arr, int ele);
int upper_bound(vector<int> &arr, int ele);

int main(){
    vector<int> arr = {56,33,24,56,98,11,45,69,6,23,45,77,43};
    sort(arr.begin(), arr.end());

    int ele = 23;

    if(binary_search_rec(arr,0,arr.size()-1,ele)){
        cout<<ele<<" is present"<<endl;
    }else{
        cout<<ele<<" is not present"<<endl;
    }

    return 0;
}