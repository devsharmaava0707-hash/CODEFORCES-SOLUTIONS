    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    void solve() {
        int n;
        cin >> n ;
        string s;
        cin>>s;
        int count=0;
        int st=0,end=n-1;
        while(st<end){
            if(s[st]=='0' && s[end]=='1'){
                count++;
            }
            else if(s[st]=='1' && s[end]=='0'){
                count++;
            }
            else break;
            st++,end--;
        }
        count=count*2;
        n=n-count;
        // cout<<count<<endl;
        cout<<n<<endl;
        // cout<<s<<endl;
        
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