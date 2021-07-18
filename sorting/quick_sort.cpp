#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

int partition(int a, int b, vector<int> &arr){
    int pivot = arr[b];
    int i = a-1;

    for(int j = a ; j < b ; j++){
        if(!cmp(arr[j] , pivot)){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[b]);

    return i+1;
}

void quick_sort(int a, int b, vector<int> &arr){
    if(a>=b) return;

    int p = partition(a,b,arr);

    quick_sort(a,p-1,arr);
    quick_sort(p+1,b,arr);
}

void display(vector<int> &arr){
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {4,7,12,44,17,73,68,35,23,5,5,245,767,453};
    display(arr);
    quick_sort(0,arr.size()-1,arr);
    display(arr);

    return 0;
}