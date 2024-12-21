// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(x)             cerr << x << '\n';

bool check(ll k, vector<ll>& v, ll health){
    ll sum = k;
    for(int i = 1; i < v.size(); i++){
        ll gap  = v[i]-v[i-1];
        if(gap >= k) sum+=k;
        else sum+=gap;
    }
    if(sum >= health) return true;
    else return false;
}

void solve(){
    ll n, health; cin >> n >> health;
    vector<ll> v(n); for(auto &i: v) cin >> i;
    ll l = 0, r = 1e18+1;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(check(mid, v, health)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

