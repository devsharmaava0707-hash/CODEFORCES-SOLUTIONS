#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>second_elements(n);
    long long int first_element=INT_MAX;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<long long int>input(m);
        for(int i=0;i<m;i++){
            cin>>input[i];
        }
        sort(input.begin(),input.end());
        second_elements[i]=input[1];
        first_element=min(first_element,input[0]);
    }
    sort(second_elements.begin(),second_elements.end());
    long long int sum=0;
    for(int i=1;i<second_elements.size();i++){
        sum=sum+second_elements[i];
    }
    sum=sum+first_element;
    cout<<sum<<endl;
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