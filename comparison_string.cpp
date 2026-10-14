#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    int maxcount1=0;
    int maxcount2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='<'){
            count1++;
        }
        if(s[i]=='>'){
            maxcount1=max(maxcount1,count1);
            count1=0;
        }
    }
    maxcount1=max(maxcount1,count1);
    for(int i=0;i<s.size();i++){
        if(s[i]=='>'){
            count2++;
        }
        if(s[i]=='<'){
            maxcount2=max(maxcount2,count2);
            count2=0;
        }
    }
    maxcount2=max(maxcount2,count2);
    cout<<max(maxcount1,maxcount2)+1<<endl;
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