// In The Name of Almighty Allah(Subh.)
#include <bits/stdc++.h>
using namespace std;

#define ll      			      long long
#define errv				        for(auto it: v){cerr << it << ' ';}
#define star    			      cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(x)             cerr << x << '\n';
#define sort(x)             sort(x.begin(), x.end())

bool check(ll mid, vector<ll>& v, ll total){
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum+=((v[i]+mid)*(v[i]+mid));
        if(sum > total) break;
    }
    if(sum > total) return false;
    else return true;
}

void solve(){
    ll n, total; cin >> n >> total;
    vector<ll> v(n); for(auto &i: v) cin >> i;
    ll l = 0, r = sqrt(total)+1;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(check(mid, v, total)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans/2 << '\n';
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
