    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    void solve() {
        int n;
        // int  x;
        cin >> n ;
        string s;
        cin>>s;
        int count=0;
        bool left=false;
        int conti=0;
        bool done=false;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                if(left==true && (conti>1)) count++;
                left=false;
                conti=0;
                continue;
            }
            if(s[i]=='.') conti++;
            if(conti==3) done=true;
            if(!left){
                left=true;
                count++;
            }
        }
        if(left==true && conti>1) count++;
        if(done){
            count=min(count,2);
        }
        cout<<count<<endl;

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