// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    // let consider window size = 3
    
    int csum = 0;
    for(int i = 0; i < 3; i++)      csum+=v[i];
    int ans = csum;

    for(int i = 1; i < n-2; i++){
        csum = (csum-v[i-1]+v[i+2]);
        ans = max(ans, csum);
    }

    cout << ans << '\n';
}

signed main(){
    solve();
}