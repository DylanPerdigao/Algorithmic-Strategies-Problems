//
//  main.cpp
//  ProblemA
//
//  Created by Dylan Perdigão on 19/02/2021.
//

#include <iostream>
#include <stack>

#define MAX_LENGTH 128
using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        stack<char> s;
        string str;
        cin >> str;
        for(auto c : str){
            if(!s.empty()){
                if(s.top()=='(' && c==')'){
                    s.pop();
                }else if(s.top()=='[' && c==']'){
                    s.pop();
                }else{
                    s.push(c);
                }
            }else{
                s.push(c);
            }
        }
        if(s.size()==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}

/*
11
([()] )
()[]
[)
[(])
((()())

(((((
([])
(([()])))
([()[]()])()
([( )[ ]( )])()

 */
