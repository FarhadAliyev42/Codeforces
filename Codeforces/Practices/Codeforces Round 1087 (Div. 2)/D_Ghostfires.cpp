#include <iostream> 
#include <string> 
/*  WRONG SOLUTION  */
using namespace std; 

int main(){ 

    int t; cin >> t; 

    while(t--){
        int r, g, b; 
        cin >> r >> g >> b; 
        int size = r + g + b; 
        string s = "000"; 
        for (int i = 0; i < size; i++) {
            char choice = ' '; 
            
            if (r > g && r > b && s.back() != 'R' && s[s.size()-3] != 'R' && r > 0) choice = 'R';
            else if (g > r && g > b && s.back() != 'G' && s[s.size()-3] != 'G' && g > 0) choice = 'G';
            else if (b > r && b > g && s.back() != 'B' && s[s.size()-3] != 'B' && b > 0) choice = 'B';

            else if (r > 0 && s.back() != 'R' && s[s.size()-3] != 'R') choice = 'R';
            else if (g > 0 && s.back() != 'G' && s[s.size()-3] != 'G') choice = 'G';
            else if (b > 0 && s.back() != 'B' && s[s.size()-3] != 'B') choice = 'B';

            if (choice != ' ') {
                s += choice;
                if (choice == 'R') r--;
                else if (choice == 'G') g--;
                else b--; 
            } 
        } 
        cout << s.substr(3) << endl;
    }
    return 0; 
}