#include<bits/stdc++.h>
using namespace std;

#define INF 999999

void floydwarshall(vector<vector<int>> &adjmat){
    int n = adjmat.size();

    for(int k = 0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(adjmat[i][k]+adjmat[k][j] < adjmat[i][j]){
                    adjmat[i][j] = adjmat[i][k]+adjmat[k][j];
                }
            }
        }
    }
}

int main(){
    vector<vector<int>> edges = {{0,1,4},{0,7,8},{1,2,8},{1,7,11},{2,3,7},{2,5,4},
    {2,8,2},{3,4,9},{3,5,14},{4,5,10},{5,6,2},{6,7,1},{6,8,6},{7,8,7}};

    vector<int> dist(9,INF);
    
    bellmanford(0,edges,dist);

    return 0;
}