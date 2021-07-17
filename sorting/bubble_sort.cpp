#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

void bubble_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = 0 ; j < arr.size() - 1 ; j++){
            if(cmp_des(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
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
    bubble_sort(arr);
    display(arr);

    return 0;
}