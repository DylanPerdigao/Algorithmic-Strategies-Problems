//
//  main.cpp
//  ProblemC
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vect;
    int aux;
    while(cin >> aux){
        vect.push_back(aux);
    }
    sort(vect.begin(),vect.end());
    for(int i : vect){
        cout << i << "\n";
    }
    //cout << "EOF\n";
    return 0;
}

