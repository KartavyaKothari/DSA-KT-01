#include<bits/stdc++.h>
using namespace std;

#define INF 999999

void djkstras(int src, unordered_map<int,vector< vector<int> >> &adj, unordered_map<int,int> &dist){
    priority_queue<vector<int>, vector<vector<int>> , greater<vector<int>>> pq;

    pq.push({0,src});
    dist[src] = 0;

    while (!pq.empty()){
        auto node = pq.top();
        pq.pop();

        for(auto edge: adj[node[1]]){
            if(dist[node[1]] + edge[1] < dist[edge[0]]){
                dist[edge[0]] = dist[node[1]] + edge[1];
                pq.push( {dist[edge[0]] ,edge[0]} );
            }
        }
    }
}

int main(){
    vector<vector<int>> edges = {{0,1,4},{0,7,8},{1,2,8},{1,7,11},{2,3,7},{2,5,4},{2,8,2},{3,4,9},{3,5,14},{4,5,10},{5,6,2},{6,7,1},{6,8,6},{7,8,7}};

    unordered_map<int,int> dist;
    unordered_map<int,vector< vector<int> >> adj;
    for(auto edge : edges){
        dist[edge[0]] = INF;
        dist[edge[1]] = INF;
        adj[edge[0]].push_back({edge[1],edge[2]});
        adj[edge[1]].push_back({edge[0],edge[2]});
    }

    djkstras(0,adj,dist);

    for(auto edge: dist){
        cout<<edge.first<<" "<<edge.second<<endl;
    }

    return 0;
}