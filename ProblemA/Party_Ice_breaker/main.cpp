//
//  main.cpp
//  PartyIcebreaker
//
//  Created by Dylan Perdigão on 26/02/2021.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool threeSum(vector<int> v){
    sort(v.begin(),v.end());
    for(auto i=v.begin(); i<v.end()-3; i++){
        auto start = i+1;
        auto end = v.end()-1;
        while(start != end){
            if(*i + *start + *end == 0){
                return true;
            }else if(*i + *start + *end < 0){
                start+=1;
            }else{
                end-=1;
            }
        }
    }
    return false;
}

vector<int> getPeople(int size){
    vector<int> v;
    int person;
    for(int i=0;i<size;i++){
        cin>>person;
        v.push_back(person);
    }
    return v;
}

int main() {
    int n;
    while(cin>>n){
        vector<int> v = getPeople(n);
        if(threeSum(v)){
            cout<<"Fair"<<endl;
        }else{
            cout<<"Rigged"<<endl;
        }
        cin>>n;
    }
    return 0;
}

/*
EXAMPLE INPUT
 
8
-1
3
5
-2
6
2
-5
7
0
4
-1
-2
1
2
0
 
 
EXAMPLE OUTPUT
 
 Fair
 Rigged
 
*/
