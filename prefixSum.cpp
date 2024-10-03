// In The Name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &i: v) cin >> i;

	vector<ll> prefixSum(n);

	prefixSum[0] = v[0];

	for(ll i = 1; i < n; i++){ // sum pre calculation
		prefixSum[i] = v[i]+prefixSum[i-1];
	}

	int sum =  0;
	int q; cin >> q; // total queries
	while(q--){
		int l , r; cin >> l >> r; // range
		l--, r--;
		if(l == 0)
			sum = prefixSum[r];
		else
			sum = prefixSum[r] - prefixSum[l-1];
		cout << sum << '\n';
	}	
	
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

