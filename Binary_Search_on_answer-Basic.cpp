// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(x)             cerr << x << '\n';

void solve(){
    int n; cin >> n;
    int l = 1, h = n;
    int mid;
    while(l <= h){
        mid = l + (h-l)/2;
        if((mid*mid) == n){
            cout << mid << '\n';
            return;
        }
        else if((mid*mid) > n){
            h  = mid-1;
        }
        else l = mid+1;
    }
    cout << h << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
