//
//  main.cpp
//  ProblemF
//
//  Created by Dylan Perdigão on 20/02/2021.
//

#include <iostream>

using namespace std;

int main() {
    // We probably do not need this but it is faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int time=1;
    
    for(int i=0; i<n; i++){
        int arrival, processing;
        cin >> arrival >> processing;
        if(arrival<time){
            time+=processing;
        }else{
            time=arrival+processing;
        }
    }
    cout << time << "\n";
    return 0;
}
