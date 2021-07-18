#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

void merge(int a, int m, int b, vector<int> &arr){
    int i,j,k;
    i = j = 0;
    k = a;

    vector<int> arr1(arr.begin()+a,arr.begin()+m+1);
    vector<int> arr2(arr.begin()+m+1,arr.begin()+b+1);

    while(i < arr1.size() && j < arr2.size()){
        if(!cmp(arr1[i] , arr2[j])){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    while(i < arr1.size()){
        arr[k++] = arr1[i++];
    }

    while(j < arr2.size()){
        arr[k++] = arr2[j++];
    }
}

void merge_sort(int a, int b, vector<int> &arr){
    if(a>=b) return;

    int m = a+(b-a)/2;

    merge_sort(a,m,arr);
    merge_sort(m+1,b,arr);

    merge(a,m,b,arr);
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
    merge_sort(0,arr.size()-1,arr);
    display(arr);

    return 0;
}