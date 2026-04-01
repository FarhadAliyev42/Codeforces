#include <iostream> 
#include <string> 

using namespace std; 

int main(){ 
    int t; cin >> t; 

    while(t--){
        int n, cnt = 1;; cin >> n; 
        string s; cin >> s; 
        for(int i = 0; i < n; i++){
            if(s[i] != 'L'){
                cnt++; //RRL  
            } 
            if(s[i] == 'L'){ 
                break; 
            }
        } 
        cout << cnt << endl; 

    }

    return 0;
}