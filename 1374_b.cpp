#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int count3=0;
    int count2=0;
    while(n%3==0){
        n=n/3;
        count3++;
    }
    while(n%2==0){
        n=n/2;
        count2++;
    }
    if(n==1){
        if(count2<=count3){
            cout<<(2*count3-count2)<<endl;
        }
        if(count3<count2){
            cout<<-1<<endl;
        }
    }
    if(n!=1){
        cout<<-1<<endl;
    }

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