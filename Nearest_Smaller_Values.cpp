// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    
// Concept: -----------Monotonic Stack----------
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    stack<pair<int,int>> pairStack;
    for(int i = 0; i < n; i++){
        if(pairStack.empty()){
            cout << 0 << ' ';
            pairStack.push(make_pair(v[i], i+1));
        }
        else if(v[i] > pairStack.top().first){
            cout << i << ' ';
            pairStack.push(make_pair(v[i], i+1));
        }
        else if(v[i] <= pairStack.top().first){
            while( !pairStack.empty() && v[i] <= pairStack.top().first){
                pairStack.pop();
            }
            if(pairStack.empty()){
                cout << 0 << ' ';
                pairStack.push(make_pair(v[i], i+1));
            }
            else {
                cout << pairStack.top().second << ' ';
                pairStack.push(make_pair(v[i], i+1));
            }
        }
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}