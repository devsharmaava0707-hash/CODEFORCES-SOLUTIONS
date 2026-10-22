#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int w,h;
    cin>>w>>h;
    int k;
    cin>>k;
    vector<int>x_0(k,0);
    for(int i=0;i<k;i++){
        cin>>x_0[i];
    }
    cin>>k;
    vector<int>x_h(k,0);
    for(int i=0;i<k;i++){
        cin>>x_h[i];
    }
    cin>>k;
    vector<int>y_0(k,0);
    for(int i=0;i<k;i++){
        cin>>y_0[i];
    }
    cin>>k;
    vector<int>y_w(k,0);
    for(int i=0;i<k;i++){
        cin>>y_w[i];
    }
    long long int left_min=y_0[0];
    long long int left_max=y_0[y_0.size()-1];
    long long int right_min=y_w[0];
    long long int right_max=y_w[y_w.size()-1];
    long long int bot_min=x_0[0];
    long long int bot_max=x_0[x_0.size()-1];
    long long int top_min=x_h[0];
    long long int top_max=x_h[x_h.size()-1];
    long long int left_area=(left_max-left_min)*w;
    long long int right_area=(right_max-right_min)*w;
    long long int bot_area=(bot_max-bot_min)*h;
    long long int top_area=(top_max-top_min)*h;
    long long int maxi=max(left_area,right_area);
    maxi=max(maxi,top_area);
    maxi=max(maxi,bot_area);
    cout<<maxi<<endl;

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