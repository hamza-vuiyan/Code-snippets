// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(x)             cerr << x << '\n';

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    cin >> v[0];
    for(ll i = 1; i  < n; i++){
        cin >> v[i];
        v[i]+=v[i-1];
    }
    vector<pair<ll, ll>> vp;
    ll mx = v[0];
    vp.push_back(make_pair(v[0], mx));
    for(ll i = 1; i < n; i++){
        mx = max(mx, v[i]- v[i-1]);
        vp.push_back(make_pair(v[i], mx));
    }
    ll q;
    ll ans = 0, mid;
    vector<ll> ansV;
    while(k--){            
        cin >> q;
        ans = 0;
        ll l = 0, r = n-1;
        while(l <= r){
            mid = l + (r-l)/2;
            if(vp[mid].second == q){
                ans = vp[mid].first;
                l = mid+1;
            }
            else if(vp[mid].second > q){
                r = mid-1;
            }
            else{
                ans = vp[mid].first;
                l = mid+1;
            }
        }
        ansV.push_back(ans);
    }
    for(auto it: ansV) cout << it << ' ';
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
        solve();
}
