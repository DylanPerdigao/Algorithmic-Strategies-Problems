#include <climits>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<pair<int,int>,int> graph;
vector<int> active;
vector<int> deg;
int best;

void ze(int n, int k, int v,int c){
    if(c >= best){
        return;
    }
    if(v==n){
        best = c;
        return;
    }
    for (int i=0; i<n; i++){
        if(active[i] == 1 && deg[i]<k){
            for(int j=0; j<n; j++){
                if(active[j]==0){
                    if(graph.count({i,j})>0){
                        deg[i]+=1;
                        deg[j]+=1;
                        active[j]=1;
                        ze(n,k,v+1, c+graph[{i,j}]);
                        active[j]=0;
                        deg[j]-=1;
                        deg[i]-=1;
                    }
                }
            }
        }
    }
    
}

void getGraph(int m){
    int n1,n2,c;
    for(int i=0;i<m;i++){
        cin>>n1>>n2>>c;
        graph[{n1-1,n2-1}]=c;
        graph[{n2-1,n1-1}]=c;
    }
}

void reset(int n){
    active.resize(0);
    active.resize(n,0);
    active[0]=1;
    deg.resize(0);
    deg.resize(n,0);
    graph.erase(graph.begin(),graph.end());
}

int main(){
    int n,m,k;
    while(cin>>n){
        cin>>m;
        cin>>k;
        //reset
        reset(n);
        best=INT_MAX;
        //best e grafo
        getGraph(m);
        //execute
        ze(n,k,1,0);
        cout << (best < INT_MAX && best >= 0 ? to_string(best) : "NO WAY!") << endl;
    }
    return 0;
}

/*
INPUT

1 1 1
1 1 0
6 9 3
1 2 1
1 4 62
1 6 99
2 3 1
2 6 34
3 4 1
3 5 13
4 5 1
5 6 99
5 10 3
1 2 70
1 3 75
1 4 62
1 5 40
2 3 25
2 4 47
2 5 14
3 4 93
3 5 5
4 5 20
6 6 3
1 2 70
1 3 23
2 3 13
4 5 43
4 6 16
5 6 45

 
OUTPUT

 38
 90
 NO WAY!
 */
