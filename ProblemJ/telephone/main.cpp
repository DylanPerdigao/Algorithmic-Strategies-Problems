
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

class Graph{
public:
    int number_of_places;
    map<int,vector<int>> edge;
    set<int> AP;
};

Graph graph;
vector<int> low,dfs,parent;
int t;


int telephone(int v){
    
    low[v]= dfs[v] = t;
    t++;
    
    for(auto w : graph.edge[v]){
        if (dfs[w]==-1){
            parent[w] = v;
            
            telephone(w);
            low[v] = min(low[v], low[w]);
            if (dfs[v] == 1 and dfs[w] != 2){
                graph.AP.insert(v);
            }
            if (dfs[v] != 1 and low[w] >= dfs[v]){
                graph.AP.insert(v);
            }
        }else if(parent[v] != w){
            low[v] = min(low[v], dfs[w]);
        }
        
        
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int number_of_places;
    while(cin >> number_of_places and number_of_places!=0){
        
        string line;
        int v,w;
        
        graph.number_of_places=number_of_places;
        
        graph.AP.clear();
        graph.edge.clear();
        low.clear();
        dfs.clear();
        parent.clear();
        
        dfs.resize(number_of_places+1,-1);
        parent.resize(number_of_places+1,-1);
        low.resize(number_of_places+1,-1);
        
        while(getline(cin, line) and line!="0"){
            istringstream iss(line);
            iss >> v;
            while(iss>>w){
                graph.edge[v].push_back(w);
                graph.edge[w].push_back(v);
            }

        }
        
        telephone((*graph.edge.begin()).first);

        cout << graph.AP.size()-1 << endl;
        
    }
    
    return 0;
}
/*
Example input:
==================
5
5 1 2 3 4
0
6
2 1 3
5 4 6 2
0
0


Example output:
==================
1
2

*/
