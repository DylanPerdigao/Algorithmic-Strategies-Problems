//
//  main.cpp
//  ProblemB
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <iostream>
#include <string.h>
#include <vector>


using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vect;
    int aux;
    for(int i=0; i<n; i++){
        cin >> aux;
        vect.push_back(aux);
    }
    
    for(int i=0; i<n; i++){
        if(i<n-1){
            cout << vect.back() << " ";
        }else{
            cout << vect.back() << "\n";
        }
        vect.pop_back();
    }
    //cout << "\nEOF\n";
    return 0;
}

