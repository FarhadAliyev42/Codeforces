#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <utility> 
#include <map> 

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){ 
        int n, cnt1 = 0, cnt2 = 0; 
        cin >> n; 
        vector<long long> arr(n); 
        for(int i = 0; i < n; i++){
            cin >> arr[i]; 
        } 
        for (int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){ 
                    cnt1++; 
                } 
                else if(arr[i] < arr[j]){ 
                    cnt2++; 
                } 
                else{
                    continue; 
                }
            }
            if(cnt1 > cnt2){ 
                cout << cnt1 << " "; 
            } 
            else{ 
                cout << cnt2 << " "; 
            } 
            cnt1 = 0; cnt2 = 0;  
        } 
        
    }
    return 0; 
}