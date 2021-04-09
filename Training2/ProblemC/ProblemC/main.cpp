//
//  main.cpp
//  ProblemC
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int count(int k, pair<int,int> point, pair<int,int> center){
    if(k<1){
        return 0;
    }
    int c=0;
    if(center.first-k<=point.first && point.first<=center.first+k){
        if(center.second-k<=point.second && point.second<=center.second+k){
            c++;
        }
    }
    return c +
        count(k/2,point,{center.first-k,center.second-k}) +
        count(k/2,point,{center.first+k,center.second-k}) +
        count(k/2,point,{center.first-k,center.second+k}) +
        count(k/2,point,{center.first+k,center.second+k});
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k,x,y;
    while(cin >> k && k!=0){
        cin >> x >> y;
        pair<int,int> p = {x,y};
        pair<int,int> c = {1024,1024};
        int res = count(k,p,c);
        if(res<10){
            cout <<"  "<< res << endl;
        }else if(res<100){
            cout <<" "<< res << endl;
        }else{
            cout << res << endl;
        }
    }
    return 0;
}

/*
500 113 941
0 0 0


 5
 */
