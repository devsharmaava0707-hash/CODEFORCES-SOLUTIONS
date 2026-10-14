    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    void solve() {
        int a,b,c;
        cin >>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        if(b>a) cout<<"Second"<<endl;
        if(a==b){
            if(c%2==1) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
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