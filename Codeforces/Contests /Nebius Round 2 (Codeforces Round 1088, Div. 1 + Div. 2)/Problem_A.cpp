#include <iostream> 

using namespace std; 

int main(){ 
    int t; cin >> t; 
    while(t--){
        int n, arr[100]; 
        cin >> n; 
        for (int i = 0; i < n; i++){
            cin >> arr[i]; 
        } 
        if(n == 1) cout << "1" << endl; 
        else if(n > 1){
            for (int i = 0; i < n; i++)
            {
                cout << "2 "; 
            }
            
         } //such a stupid question! 
        cout << "\n"; 
    }

    return 0; 
}