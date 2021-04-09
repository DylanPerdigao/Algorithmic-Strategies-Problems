#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int guards(vector<int> P, int n, int m){
    vector<int> G;
    G.resize(n+1);
    G[0]=0;
    
    sort(P.begin(),P.end());
    G[1] = P[1]+m;
    
    int i=1;
    for(int j=2;j<=n;j++){
        if(!(P[j]<=G[i]+m)){
            G[i+1]=P[j]+m;
            i++;
        }
    }
    
    return i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int N,M;
        cin >> N >> M;
        
        vector<int> P;
        P.resize(N+1);
        
        for(int i=1; i<=N; i++){
            int p;
            cin >> p;
            
            P[i]=p;
        }
        cout << guards(P,N,M) << endl;
    }
    return 0;
}
/*
 
Input:
 
2
5 3
5
2
6
10
0
3 5
0
4
0
 
Output:
 
2
1
 
 */
