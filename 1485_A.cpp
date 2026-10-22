#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int a,b;
    cin>>a>>b;
    int count=0;
    if(b==1){
        b++;
        count++;
    }
    while(a>0){
        long long int c=a;
        int semicount=0;
        while(c!=0){
            c=c/b;
            semicount++;
        }
        while(true){
            long long int temp=a;
            long long int tempb=b+1;
            int semicount2=0;
            while(temp!=0){
                temp=temp/tempb;
                semicount2++;
            }
            if(semicount2>=semicount) break;
            else {
                semicount=semicount2;
                count++;
                b++;
            }
        }
        a=a/b;
        count++;
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