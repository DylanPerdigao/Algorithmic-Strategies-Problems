//
//  main.cpp
//  ProblemB
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <iostream>
#include <vector>

using namespace std;

vector<string> getInput(int n){
    vector<string> v;
    while(n--){
        string str;
        cin >> str;
        v.push_back(str);
    }
    return v;
}

int diff(string str1, string str2, int len){
    int count=0;
    for(int i=0; i<len; i++){
        if(str1[i]!=str2[i]){
            count++;
        }
    }
    return count;
}

vector<string> soup(vector<string> v, int m){
    vector<string> aux;
    aux.push_back(v.front());
    v.erase(v.begin());
    while(!v.empty()){
        for(auto it=v.begin(); it<v.end(); it++){
            if(diff(aux.back(),*it,m)==1){
                aux.push_back(*it);
                v.erase(it);
                break;
            }
        }
    }
    return aux;
}

int main() {
    int n,m;
    while(cin >> n && n!=EOF){
        cin >> m;
        for(string str: soup(getInput(n),m)){
            cout << str << endl;
        }
    }
    return 0;
}

/*
6 5
remar
pitos
remas
remos
retos
ritos
5 4
pato
lisa
pata
pita
pisa

 
remar
remas
remos
retos
ritos
pitos
pato
pata
pita
pisa
lisa
 */

