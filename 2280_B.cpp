#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    cout<<"?"<<" "<<1<<" "<<n<<endl;
    int s1;
    cin>>s1;
    if(s1==0){
        cout<<"! NO"<<endl;
        return;
    }
    cout<<"?"<<" "<<1<<" "<<s1<<endl;
    int s2;
    cin>>s2;
    if(s1-s2>0){
        cout<<"! YES"<<endl;
        return;
    }
    else cout<<"! NO"<<endl;

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