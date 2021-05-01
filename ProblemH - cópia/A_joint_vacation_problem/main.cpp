#include <algorithm>
#include <iostream>
#include <limits.h>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Graph{
public:
    unordered_map<int,int> vertex;
    map<int,vector<int>> adjacent;
    map<pair<int,int>,int> edge;
};

/*
bool byValue(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

unordered_map<int, int> sortMap(unordered_map<int, int> m){
    vector<pair<int,int>> v;
    unordered_map<int, int> sortedMap;
    for(auto p : m){
        v.push_back(p);
    }
    sort(v.begin(), v.end(), byValue);
    for(auto p : v){
        sortedMap[p.first]=p.second;
    }
    return sortedMap;
}

pair<int,int> getMin(unordered_map<int, int> m){
    pair<int,int> v = *m.begin();
    for(auto it=m.begin(); it!=m.end(); it++){
        if(v.second > it->second){
            v=*it;
        }
    }
    return v;
}

int dijkstra(Graph g, int start, int end){
    g.vertex[start]=0;
    while(!g.vertex.empty()){
        
        //sortMap(g.vertex);
        //unordered_map<int,int>::iterator it = g.vertex.begin();
        //pair<int,int> u = *it;
         
        pair<int,int> u = getMin(g.vertex);
        auto it = g.vertex.find(u.first);
        g.vertex.erase(it);
        if(u.first==end){
            return u.second;
        }
        for(auto v : g.adjacent[u.first]){
            if(g.vertex[{v}] > u.second + g.edge[{u.first,v}]){
                g.vertex[{v}] = u.second + g.edge[{u.first,v}];
            }
        }
        
    }
    return 0;
}
*/
int dijkstra(Graph g, int start, int end){
    g.vertex[start]=0;
    while(!g.vertex.empty()){
        /*
        sortMap(g.vertex);
        unordered_map<int,int>::iterator it = g.vertex.begin();
        pair<int,int> u = *it;
         */
        pair<int,int> u = getMin(g.vertex);
        auto it = g.vertex.find(u.first);
        g.vertex.erase(it);
        if(u.first==end){
            return u.second;
        }
        for(auto v : g.adjacent[u.first]){
            if(g.vertex[{v}] > u.second + g.edge[{u.first,v}]){
                g.vertex[{v}] = u.second + g.edge[{u.first,v}];
            }
        }
        
    }
    return 0;
}
/*
int BF(Graph g, int start, int end){
    g.vertex[start]=0;
    pair<int,int> u;
    for(auto &it : g.vertex){
        u = it;
        if(u.first==end){
            break;
        }
        for(auto v : g.adjacent[u.first]){
            if(g.vertex[{v}] > u.second + g.edge[{u.first,v}]){
                g.vertex[{v}] = u.second + g.edge[{u.first,v}];
            }
        }
    }
    for(auto v : g.adjacent[u.first]){
        if(g.vertex[{v}] > u.second + g.edge[{u.first,v}]){
            return 0;
        }
    }
    return u.second;
}
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Graph g;
    int n,t,d;
    cin >> n >> t;
    
    for(int i=1; i<=n;i++){
        g.vertex[i]=INT_MAX;
        for(int j=0;j<=n;j++){
            cin >> d;
            if(j>1){
                if(d>=0){
                    g.adjacent[i].push_back(j);
                    g.edge[{i,j}]=d;
                }else{
                    g.edge[{i,j}]=INT_MAX;
                }
            }

        }
    }
    cout << dijkstra(g, 1, t) << endl;
    cout << BF(g, 1,t) << endl;
    return 0;
}
/*
 Input:
 6 6
 1 0 1 2 8 -1 -1
 2 -1 0 -1 -1 3 -1
 3 -1 -1 0 5 3 8
 4 -1 -1 -1 0 -1 12
 5 -1 -1 -1 -1 0 4
 6 -1 -1 -1 -1 -1 0
 
 
 Output:
 8
 
 
 */
