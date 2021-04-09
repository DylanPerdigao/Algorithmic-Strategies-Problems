#include <iostream>
#include <map>
#include <math.h>
#include <numeric>
#include <vector>

using namespace std;

float pizza(vector<int> v){
    long n = v.size();
    float s = accumulate(v.begin(), v.end(),0.0);
    int k = floor(s/2);
    map<pair<int,int>,int> T;
    for(int i=1;i<k;i++){
        T[{0,i}]=0;
    }
    for(int i=0;i<n;i++){
        T[{i,0}]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<k;j++){
            if(v[i]>j){
                T[{i,j}]= T[{i-1,j}];
            }else{
                T[{i,j}]= T[{i-1,j}] || T[{i-1,j-v[i]}] ;
            }
        }
    }
    float s1 = 0;
    for(int i=0;i<k;i++){
        if(T[{n-1,i}]==1){
            s1=i;
        }
    }
    float s2 = s-s1;
    return abs(s1-s2)/100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    while(cin>>n){
        vector<int> cookingTimes;
        cookingTimes.push_back(0);
        while(n--){
            float ct;
            cin>>ct;
            cookingTimes.push_back(ct*100);
        }
        cout<<pizza(cookingTimes)<<endl;
    }
    return 0;
}
/*
 
Input:
 
4
1.41
1.73
2.00
2.23
6
1.20
1.36
1.59
2.49
2.51
3.23
 
Output:
 
0.09
0.02
 
 */
