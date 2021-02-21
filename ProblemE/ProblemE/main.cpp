//
//  main.cpp
//  ProblemE
//
//  Created by Dylan Perdigão on 20/02/2021.
//

#include <algorithm>
#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> vect;
    string aux;
    while(cin>>aux && aux!="EOF"){
        if(isdigit(aux.front()) || isdigit(aux.back())){
            vect.push_back(stoi(aux));
        }else{
            int n1,n2;
            n1=vect.back();
            vect.pop_back();
            n2=vect.back();
            vect.pop_back();
            switch (aux.front()) {
                case '+':
                    vect.push_back(n2 + n1);
                    break;
                case '-':
                    vect.push_back(n2 - n1);
                    break;
                case '*':
                    vect.push_back(n2 * n1);
                    break;
                case '/':
                    vect.push_back(n2 / n1);
                    break;
                case '%':
                    vect.push_back(n2 % n1);
                    break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << vect[i] << "\n";
    }
    //cout << "EOF\n";
    return 0;
}


