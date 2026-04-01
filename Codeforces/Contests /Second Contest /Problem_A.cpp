#include <iostream> 

using namespace std; 

void function(int n){ 

}

int main(){
    int t; cin >> t; //4 6 5 2 3 1 
    while(t--){
        int n; cin >> n; 
        if(n==2) cout << "2 1 " << endl; 
        else{ 
            cout << n-2 << " " << n << " " << n-1 << " "; 
            for (int i = n-3; i > 0; i--)
            {
                cout << i << " "; 
            }
            
        }
    }

    return 0; 
}