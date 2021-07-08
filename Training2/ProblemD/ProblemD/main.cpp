//
//  main.cpp
//  ProblemD
//
//  Created by Dylan Perdigão on 20/02/2021.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int count(map<pair<int,int>,int> c, map<pair<int,int>,int> wolves, int w, int h){
    for(int i=0;i<=h;i++){
        if(wolves[{i,0}]!=1){
            c[{i,0}]=1;
        }
    }
    for(int j=0;j<=w;j++){
        if(wolves[{0,j}]!=1){
            c[{0,j}]=1;
        }
    }
    for(int i=0;i<=h;i++){
        for(int j=0;j<=w;j++){
            if(i-1>=0 && j-1>=0){
                c[{i,j}]+=c[{i,j-1}]+c[{i-1,j}];
            }
        }
    }
    return c[{w,h}];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int w,h;
    int n;
    int x,y;
    while(cin>>w>>h){
        map<pair<int,int>,int> wolves,c;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x >> y;
            wolves[{x,y}]=1;
        }
        int cnt = count(c,wolves,w,h);
        switch(cnt){
            case 0:
                cout << "There is no path." << endl;
                break;
            case 1:
                cout << "There is one path from Little Red Riding Hood's house to her grandmother's house." << endl;
                break;
            default:
                cout << "There are " << cnt << " paths from Little Red Riding Hood's house to her grandmother's house." << endl;
        }
        
    }
    
    return 0;
}

/*
1 1
0
1 1
2
0 1
1 0
4 4
3
0 1
1 1
3 1
10 10
0
10 10
3
0 1
1 1
1 0
3 3
5
1 0
1 1
1 2
2 2
3 2
0 0

 
There are 2 paths from Little Red Riding Hood's house to her grandmother's house.
There is no path.
There are 7 paths from Little Red Riding Hood's house to her grandmother's house.
There are 184756 paths from Little Red Riding Hood's house to her grandmother's house.
There is no path.
There is one path from Little Red Riding Hood's house to her grandmother's house.
 */
