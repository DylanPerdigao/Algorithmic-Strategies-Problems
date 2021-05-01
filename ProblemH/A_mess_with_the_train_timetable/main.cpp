#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

bool GC(int v, map<int,vector<int>> N, vector<int> color){
    queue<int> Q;

    color[v-1]=1;
    Q.push(v-1);
    
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
        
        for(int u : N[t]){
            if(color[u] == -1){
                color[u] = 1-color[t];
                Q.push(u);
            }else if(color[u]==color[t]){
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    int d1,d2;
    
    while(cin >> n && n !=EOF){
        map<int,vector<int>> N;
        vector<int> color;
        N.clear();
        color.resize(0);
        
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> d1 >> d2;
            N[d1].push_back(d2);
            N[d2].push_back(d1);
        }
        
        
        color.resize(n+1,-1);
        
        bool r = true;
        for(int v=1; v<=n;v++){
            if (color[v]==-1){
                r = GC(v,N,color);
                if(r==false){
                    break;
                }
            }
        }
        
        if(r){
            cout << "NOT SURE" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
/*
 Input:
 5 4
 1 2
 1 4
 1 5
 2 3
 5 5
 1 3
 2 4
 2 5
 3 4
 4 5
 
 
 Output:
 NOT SURE
 NO
 
 
 */
