//
//  main.cpp
//  ProblemG
//
//  Created by Dylan Perdigão on 20/02/2021.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    map<int,int> shoes;
    map<int,int>::iterator it;
    string inst;
    int size;
    while(cin>>inst && inst!="EOF"){
        cin>>size;
        if(inst=="ADD"){
            it = shoes.find(size);
            if (it == shoes.end()){
                shoes.insert(pair<int,int>(size,1));
            }else{
                shoes.erase(it);
                shoes.insert(pair<int,int>(size,(*it).second+1));
            }
        }else if(inst=="REQUEST"){
            while((it=shoes.find(size)) == shoes.end()){
                if(size < (*shoes.rbegin()).first){
                    size++;
                }else{
                    cout << "impossible" << "\n";
                    break;
                }
            }
            if(size <= (*shoes.rbegin()).first){
                shoes.erase(it);
                if((*it).second>1){
                    shoes.insert(pair<int,int>(size,(*it).second-1));
                }
                cout << (*it).first << "\n";
            }
        }
    }
    
    return 0;
}
