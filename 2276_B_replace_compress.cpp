#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        bool candecrease = false; 
        bool canincrease = false; 

        
        for (int i = 1; i < n - 1; i++) {
            char left = s[i - 1];
            char mid  = s[i];
            char right = s[i + 1];

            if (left != mid && mid != right) {
                candecrease = true;  
            }
            if (left == mid && mid == right) {
                canincrease = true;  
            }
        }

        int answer = 1;              
        if (candecrease) answer++;
        if (canincrease) answer++;

        cout << answer << "\n";
    }
    return 0;
}