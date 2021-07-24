#include<bits/stdc++.h>
using namespace std;

int lcs(string A, string B){
    vector<vector<int>> dp(A.size()+1, vector<int>(B.size()+1,0));

    for(int i = 1 ; i <= A.size() ; i++){
        for(int j = 1 ; j <= B.size() ; j++){
            if(A[i-1]==B[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    // return dp.back().back();

    for(auto row: dp){
        for(int i: row){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return dp[A.size()][B.size()];
}

int main(){
    string A = "AGGTAB";
    string B = "GXTXAYB";

    cout<<lcs(A,B);

    return 0;
}