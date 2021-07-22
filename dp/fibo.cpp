#include<bits/stdc++.h>
using namespace std;

// 1 1 2 3 5 8 13 21 34 

int fibo(int n, unordered_map<int,int> &dp){
    if(n==1 || n==2) return 1;
    if(dp.find(n) == dp.end()){
        dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
    }
    return dp[n];
}

// fibo(n) = fibo(n-1)+fibo(n-2);

int main(){
    int n;
    cin>>n;

    unordered_map<int,int> dp;

    cout<<fibo(n,dp);

    return 0;
}