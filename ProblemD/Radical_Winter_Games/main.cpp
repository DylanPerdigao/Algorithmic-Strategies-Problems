//
//  main.cpp
//  RadicalWinterGames
//
//  Created by Dylan Perdigão on 19/03/2021.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<pair<int,int>,int> getTriangle(int n){
    map<pair<int,int>,int> P;
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>k;
            P[{i,j}]=k;
        }
    }
    return P;
}

int path(int n){
    map<pair<int,int>,int> P = getTriangle(n);
    vector<int> v1,v2;
    v1.resize(n);
    v2.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0){
                v1[j] = P[{i,j}];
            }else if(j==0){
                v1[j] = P[{i,j}] + v2[j];
            }else{
                v1[j] = P[{i,j}] + max(v2[j],v2[j-1]);
            }
        }
        v2.swap(v1);
    }
    int best=0;
    for(int j=0;j<n;j++){
        best = max(best,v2[j]);
    }
    return best;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n;
    cin>>k;
    while(k--){
        cin>>n;
        cout<<path(n)<<endl;
    }
    return 0;
}
/*
INPUT
1
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5

OUTPUT
30
 */
