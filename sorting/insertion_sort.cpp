#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

void insertion_sort(vector<int> &arr){
    int j;
    for(int i = 1 ; i < arr.size() ; i++){
        int curr = arr[i];

        for(j = i-1 ; j >= 0 ; j--){
            if(cmp_des(arr[j],curr)){
                arr[j+1] = arr[j];
            }else{
                break;   
            }
        }

        arr[j+1] = curr;
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
    insertion_sort(arr);
    display(arr);

    return 0;
}