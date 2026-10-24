#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    bool istrue=true;
    while(istrue){
        long long int t=n;
        bool foristrue=true;
        while(t!=0){
            long long int t_last=t%10;
            if(t_last!=0 && n%t_last!=0){
                foristrue=false;
                break;
            }
            t=t/10;
        }
        if(foristrue) break;
        n++;
    }
    cout<<n<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}