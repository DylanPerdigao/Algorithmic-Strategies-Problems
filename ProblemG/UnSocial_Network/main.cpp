#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int n,m;
int best;
vector<int> neigthbor;
map<pair<int,int>,int> connections;

void network(int i,  int size){
    if(size > best){
        best=size;
    }
    if(i==n){
        return;
    }
    
    int ub=0;
    for(int j=i+1; j<n; j++){
        if(neigthbor[j]==0){
            ub+=1;
        }
    }
    if(size+ub<=best){
        return;
    }
    
    for(int j=i+1; j<n; j++){
        if(connections[{i,j}]==1){
            neigthbor[j]++;
        }
    }
    for(int j=i+1; j<n; j++){
        if(neigthbor[j]==0){
            network(j, size+1);
        }
    }
    for(int j=i+1; j<n; j++){
        if(connections[{i,j}]==1){
            neigthbor[j]--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    neigthbor.resize(n);
    for(int i=0;i<m;i++){
        int member1, member2;
        cin >> member1 >> member2;
        connections[{member1,member2}]=1;
        connections[{member2,member1}]=1;
    }
    for(int i=0;i<n;i++){
        network(i,1);
    }
    cout << best << endl;
    return 0;
}
/*
Example input 1:
6 6
0 1
0 2
0 3
0 4
0 5
1 5
 
 
Example input 2:
30 21
15 10
6 25
12 20
17 20
20 11
18 4
1 19
5 22
14 4
24 13
7 8
21 24
24 8
11 18
20 19
0 16
28 13
16 10
27 24
22 16
16 21
 
 
Example output 1:
4
 
 
Example output 2:
19
 
 */
