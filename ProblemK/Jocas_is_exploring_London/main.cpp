#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <limits.h>

using namespace std;


int BFS(map<int,map<int,int>> G, vector<int> &parent ,int s, int t){
    parent.clear();
    parent.resize(t+1,-1);
    parent[s]=-2;
    
    queue<pair<int,int>> Q;
    Q.push({s,INT_MAX});
    
    while(!Q.empty()){
        auto p1 = Q.front();
        int v = p1.first;
        int fv = p1.second;
        Q.pop();
        
        for(auto g : G[v]){
            int u = g.first;
            if(parent[u]==-1 and G[v][u]>0){
                parent[u]=v;
                int fu = min(fv,G[v][u]);
                if(u==t){
                    return fu;
                }
                Q.push({u,fu});
            }
        }
    }
    return 0;
}

int EK(map<int,map<int,int>> G, int s, int t){
    int fp, mflow=0;
    vector<int> parent(t+1);
    
    while((fp=BFS(G,parent,s,t))>0){
        mflow += fp;
        int u=t;
        while(u!=0){
            int v = parent[u];
            G[v][u] -= fp;
            G[u][v] += fp;
            u = v;
        }
    }
    
    return mflow;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m,n,u,v;

    while(cin >> m && m!='\n'){
        map<int,map<int,int>> graph;
        cin >> n;
        for(int i=0; i<m; i++){
            cin >> u >> v;
            graph[v][u]=1;
            graph[u][v]=1;
        }
        cout << EK(graph,1,n) << endl;
    }

    
    return 0;
}
/*
Example output
===============
4
 
Example input
===============

23 10
1 2
1 7
1 9
1 10
2 4
2 5
2 6
2 9
2 10
3 7
3 8
3 9
4 6
4 7
4 8
4 10
5 7
5 8
5 9
5 10
6 8
6 9
7 9


*/
