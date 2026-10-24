#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int x,y,k;
    cin>>x>>y>>k;
    long long int sum=k+k*y-1;
    long long int quoti=sum/(x-1);
    long long int remi=sum%(x-1);
    long long int finalreturn;
    finalreturn=quoti;
    if(remi!=0) finalreturn++;
    
    cout<<finalreturn+k<<endl;

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