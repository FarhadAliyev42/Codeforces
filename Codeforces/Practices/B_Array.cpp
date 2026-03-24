#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <utility> 
#include <map> 

using namespace std;

int main(){
    int t, n; 
    std::map<long long, long long> paired_arr;
    cin >> t;
    while(t--){ 
        cin >> n; 
        vector<long long> arr(50000); 
        vector<long long> arr2(50000); 
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            arr2[i] = arr[i];
        } 
        sort(arr.begin(), arr.end()); 
        for (int i = 1; i <= n; i++){ 
            paired_arr[arr[i]] = i; 
            if(((n/2)+1) > paired_arr[arr2[i]]){
                cout << n-i << " "; 
            } 
            else if(((n/2)+1) < paired_arr[arr2[i]]){
                cout << i << " "; 
            } 
            else{  
                cout << i-1 << " "; 
            }
        } 
    }
    return 0; 
}