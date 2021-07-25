#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}

void counting_sort(vector<char> &arr){
    map<char,int> bkts;

    for(char c: arr){
        bkts[c]++;
    }

    int i = 0 ;
    while( i < arr.size() ){
        for(auto pair : bkts){
            int tmp_in = 0;
            while(tmp_in < pair.second){
                arr[i+tmp_in] = pair.first;
                tmp_in++;
            }
            i += tmp_in;
        }
    }
}

void display(vector<char> &arr){
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<char> arr = {'E', 'A', 'E', 'B', 'A', 'A', 'B', 'E', 'E', 'A', 'F', 'E', 'C', 'B', 'E', 'F', 'B', 'A', 'C', 'D'};
    display(arr);
    counting_sort(arr);
    display(arr);

    return 0;
}