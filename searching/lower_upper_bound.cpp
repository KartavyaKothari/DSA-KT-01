#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {18, 58, 89, 94, 96, 97, 98, 98, 100, 120};

    cout<<*lower_bound(arr.begin(),arr.end(),80)<<endl;
    // The first ele which does not have a value less than val


    // 1 2 3 4 5 5 6 7 8 
    // LB of 3 is the first ele which is not less than 3 is 3
    // LB of 3.5 is the first ele which is not less than 3.5 is 4
    // UB of 3 is the first ele which is greater than 3 is 4
    // UB of 3.5 is the first ele which is greater than 3.5 is 4

    cout<<*upper_bound(arr.begin(),arr.end(),80);
    // The first ele which has a value greater than val
    return 0;
}