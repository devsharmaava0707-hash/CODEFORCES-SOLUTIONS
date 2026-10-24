#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    long long int a,b;
    cin>>a>>b;
    long long int count=0;
    int counta=0;
    int countb=0;
    while(a%2==0){
        a=a/2;
        counta++;
    }
    while(b%2==0){
        b=b/2;
        countb++;
    }
    if(a!=b){
        cout<<-1<<endl;
        return;
    }
    else{
        counta=abs(counta-countb);
        count=counta/3;
        count+=(counta%3)/2;
        count+=((counta%3)%2)/1;
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