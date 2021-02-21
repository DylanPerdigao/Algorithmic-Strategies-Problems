//
//  main.cpp
//  ProblemD
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
    vect.emplace(vect.begin(), 0);
    int current=0;
    string aux,val;
    
    while(cin >> aux && aux != "EOF"){
        if (aux == "INSERT"){
            cin >> aux >> val;
            if (aux == "LEFT"){
                vect.emplace(vect.begin()+current, stoi(val));
                current++;
            }else if (aux == "RIGHT"){
                vect.emplace(vect.begin()+current+1, stoi(val));
            }
            
        }else if (aux == "MOVE"){
            cin >> aux;
            if (aux == "LEFT"){
                current--;
            }else if (aux == "RIGHT"){
                current++;
            }
        }
    }
    
    for(int i : vect){
        cout << i << "\n";
    }
    //cout << "EOF\n";
    return 0;
}

