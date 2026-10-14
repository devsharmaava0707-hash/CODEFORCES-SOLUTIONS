#include <iostream>
#include<set>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int a,b,x1,y1,x2,y2;
    cin>>a>>b>>x1>>y1>>x2>>y2;
    set<vector<int>>ans;
    int count=0;
    int six=0;
    int type=1;
    while(six!=2){
        int nayax=x1+type*a;
        int siy=0;
        int typey=1;
        while(siy!=2){
            int nayay=y1+typey*b;
            ans.insert({nayax,nayay});
            typey=typey*-1;
            siy++;
        }
        six++;
        type=type*-1;
    }
    six=0,type=1;
    while(six!=2){
        int nayax=x1+type*b;
        int siy=0;
        int typey=1;
        while(siy!=2){
            int nayay=y1+typey*a;
            ans.insert({nayax,nayay});
            typey=typey*-1;
            siy++;
        }
        six++;
        type=type*-1;
    }
    six=0,type=1;
    while(six!=2){
        int nayax=x2+type*a;
        int siy=0;
        int typey=1;
        while(siy!=2){
            int nayay=y2+typey*b;
            if(ans.find({nayax,nayay})!=ans.end()){ count++;ans.erase({nayax,nayay});}
            typey=typey*-1;
            siy++;
        }
        six++;
        type=type*-1;
    } 
    six=0,type=1;
    while(six!=2){
        int nayax=x2+type*b;
        int siy=0;
        int typey=1;
        while(siy!=2){
            int nayay=y2+typey*a;
            if(ans.find({nayax,nayay})!=ans.end()){ count++;ans.erase({nayax,nayay});}
            typey=typey*-1;
            siy++;
        }
        six++;
        type=type*-1;
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