// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
	
	
vector<ll> dp(100, -1);
ll fibo(ll n){
	if(n <= 1) return n;
	if(dp[n] != -1){
		return dp[n];
	}
	dp[n] = fibo(n-1) + fibo(n-2);
		return dp[n];
}


void solve(){
	ll n; cin >> n;
	ll nth = fibo(n);
	cout << nth << '\n';
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
