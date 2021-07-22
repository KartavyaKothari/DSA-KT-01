#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

void selection_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() - 1 ; i++){
        int min_in = i;
        for(int j = i+1 ; j < arr.size() ; j++){
            if(!cmp_des(arr[j],arr[min_in])){
                min_in = j;
            }
        }
        // min_in = distance(arr.begin(),min_element(arr.begin()+i+1,arr.end()));
        swap(arr[i],arr[min_in]);
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
    selection_sort(arr);
    display(arr);

    return 0;
}