#include<bits/stdc++.h>
using namespace std;

int prims(int src, unordered_map<int,vector< vector<int> >> &adj){
    int min_w = 0;
    priority_queue<vector<int>, vector<vector<int>> , greater<vector<int>>> pq;
    unordered_map<int,bool> mst;

    pq.push({0,src});

    while(!pq.empty()){
        auto node = pq.top();
        pq.pop();

        if(mst[node[1]]) continue;
        mst[node[1]] = true;
        min_w+=node[0];

        for(auto child : adj[node[1]]){
            pq.push({child[1],child[0]});
        }
    }

    return min_w;
}

int main(){
    vector<vector<int>> edges = {{0,1,4},{0,7,8},{1,2,8},{1,7,11},{2,3,7},{2,5,4},{2,8,2},{3,4,9},{3,5,14},{4,5,10},{5,6,2},{6,7,1},{6,8,6},{7,8,7}};

    unordered_map<int,vector< vector<int> >> adj;
    for(auto edge : edges){
        adj[edge[0]].push_back({edge[1],edge[2]});
        adj[edge[1]].push_back({edge[0],edge[2]});
    }

    cout<<prims(0,adj);

    return 0;
}