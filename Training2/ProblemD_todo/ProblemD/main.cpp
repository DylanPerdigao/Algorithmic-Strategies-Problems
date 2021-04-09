//
//  main.cpp
//  ProblemD
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

vector<int> getInput(int n){
    vector<int> v;
    int stick_length;
    while(n--){
        cin>>stick_length;
        v.push_back(stick_length);
    }
    return v;
}

bool square(int sticks){
    vector<int> v = getInput(sticks);
    vector<int> aux;
    float target = accumulate(v.begin(), v.end(), 0)/4.0;
    if(target!=(int)target){
        return false;
    }
    aux.resize(4,target);
    
    for(auto it=v.begin(); it<v.end(); it++){
        for(int j=0;j<4;j++){
            if(aux[j]-(*it)>=0){
                aux[j]-=*it;
                break;
            }else if(aux.back()-(*it)<0){
                return false;
            }
        }
    }
    for(int val : aux){
        if(val!=0){
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        int sticks;
        cin>>sticks;
        if(square(sticks)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}

/*
3
4 1 1 1 1
5 10 20 30 40 50
8 1 7 2 6 4 4 3 5
 
yes
no
yes
 */
