//
//  main.cpp
//  ANewChessGame
//
//  Created by Dylan Perdigão on 05/03/2021.
//

#include <iostream>
#include <map>

using namespace std;

map<pair<int,int>,int> visited;

int moves(int x, int y, int m){
    int v;
    if(m<0){
        return 0;
    }
    v=0;
    if(visited[{x+200,y+200}]==0){
        visited[{x+200,y+200}]=1;
        v=1;
    }
    return v +
            moves(x-2 ,y-1 ,m-1 ) +
            moves(x-2 ,y+1 ,m-1 ) +
            moves(x+2 ,y-1 ,m-1 ) +
            moves(x+2 ,y+1 ,m-1 ) +
            moves(x-1 ,y-2 ,m-1 ) +
            moves(x-1 ,y+2 ,m-1 ) +
            moves(x+1 ,y-2 ,m-1 ) +
            moves(x+1 ,y+2 ,m-1 );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum=0;
    int n;
    cin >> n;
    while(n--){
        int x,y,m;
        cin >> x >> y >> m;
        sum += moves(x,y,m);
    }
    cout << sum << endl;
    return 0;
}
