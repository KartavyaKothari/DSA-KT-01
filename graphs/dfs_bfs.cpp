#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int,bool> &visited, unordered_map<int,vector<int>> &adj){
    cout<<node<<" ";
    visited[node] = true;

    for(int child : adj[node]){
        if(!visited[child]){
            dfs(child,visited,adj);
        }
    }
}

// v - no of nodes
// e - no of edges

void bfs(unordered_map<int,vector<int>> &adj){
    queue<int> nodes;
    unordered_map<int,bool> visited;
    nodes.push(1);
    visited[1] = true;

    while(!nodes.empty()){
        int curr = nodes.front();
        nodes.pop();
        cout<<curr<<" ";

        for(int child : adj[curr]){
            if(!visited[child]){
                nodes.push(child);
                visited[child] = true;
            }
        }
    }
}

int main(){
    vector<vector<int>> edges = {{1,2},{1,5},{2,3},{2,6},{3,4},{3,5},{5,6}};
    unordered_map<int,bool> visited;
    unordered_map<int,vector<int>> adj;

    for(vector<int> edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    dfs(1,visited,adj);
    cout<<endl;
    bfs(adj);

    return 0;
}