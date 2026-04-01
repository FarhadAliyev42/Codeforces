#include <iostream> 

using namespace std;  

int main(){ 
    int t; cin >> t;  
    while(t--){
        int x, y, z; cin >> x >> y; int n = x + y; 
        long long cnt = 1; 
            for(int i = 2; i < n; i++){
                if(n%i == 0){
                    cnt++; 
                    z = i; 
                }
            } 
            cout << cnt % 676767677 << endl; 
    }

    return 0; 
} 