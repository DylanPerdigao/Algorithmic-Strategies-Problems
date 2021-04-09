//
//  main.cpp
//  ProblemH
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
    
    map<int,int> inventory;
    map<int,int>::iterator it;
    string inst;
    int n,item;
    while(cin>>inst && inst!="EOF"){
        cin>>n;
        if(inst=="ADD"){
            cin>>item;
            it = inventory.find(item);
            if (it == inventory.end()){
                inventory.insert(pair<int,int>(item,n));
            }else{
                inventory.erase(it);
                inventory.insert(pair<int,int>(item,it->second+n));
            }
        }else if(inst=="REM"){
            cin>>item;
            it=inventory.find(item);
            if(!(it != inventory.end()) || it->second-n<0){
                cout << "removal refused" << "\n";
            }else{
                inventory.erase(it);
                inventory.insert(pair<int,int>(item,it->second-n));
            }
        }else if(inst=="QUERY"){
            it=inventory.find(n);
            if(!(it != inventory.end())){
                cout << "0" << "\n";
            }else{
                cout << it->second << "\n";
            }
        }
    }
    
    return 0;
}

