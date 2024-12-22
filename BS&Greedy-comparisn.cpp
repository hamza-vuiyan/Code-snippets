// Approach 01: Greedy

// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;
#define ll      			long long

void solve(){
	ll n, tank; cin >> n >> tank;
	vector<ll> v(n);
	for(auto &i: v) cin >> i;
	sort(v.begin(), v.end());

	ll height = v[0];
	ll maxheight = v[n-1];
	for(ll i = 0; i < n; i++){
		if(i == n-1){
			ll d = (tank/(i+1));
			height+=d;
			break;			
		}
		else{
			if(v[i] == v[i+1]){
				continue;
			}
			else{
				ll need = (v[i+1] - v[i])*(i+1);
				if(need <= tank){
					tank-=need;
					height+=(v[i+1] - v[i]);
				}
				else{
					ll inc = tank/(i+1);
					height+=inc;
					break;
				}
			}
		}
		
	}
	cout << height << '\n';
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll t;
	cin >> t;
	while (t--){
		solve();
	}
}

// Approach 02: Binary search on answer

// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;
#define ll      			long long

bool checmid(ll mid, vector<ll>& v, ll water){
    ll sum = 0;
    ll res ;
    for(int i = 0; i < v.size(); i++){
        res = mid - v[i];
        if(res > 0){
            sum+=res;
        }
    }
    cerr << sum << '\n';
    if(sum > water) return false;
    else return true;
}

void solve(){
    ll n, water; cin >> n >> water;
    vector<ll> v(n); for(auto &i: v) cin >> i;
    sort(v.begin(), v.end());

    ll l = 1, r = 1e10+1;
    ll ans = 1;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(checmid(mid, v, water)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
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

