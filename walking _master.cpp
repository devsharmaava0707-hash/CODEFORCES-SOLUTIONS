#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
        return ;
    }
    if(a>c){
        int x=a-c;
        int y=d-b;
        cout<<2*y+x<<endl;
        return;
    }
    if(a<c){
        int x=c-a;
        int y=d-b;
        if(x>y){
            cout<<-1<<endl;
            return;
        }
        if(x==y){
            cout<<x<<endl;
            return;
        }
        if(y>x){
            cout<<2*y-x<<endl;
            return;
        }
    }
    if(a==c){
        cout<<2*(d-b)<<endl;
        return;
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