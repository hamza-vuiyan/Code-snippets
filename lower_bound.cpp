#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &i: v) cin >> i;
	sort(v.begin(), v.end());
	
	int q; cin >> q;
	int l = 0, r = n-1;
	int ans = n; //Declaring ans = n, Because the value greter then or equal to 'q' may not be found, in that case the hypothetical answer is an index outside of the array
	while(l <= r){
		int mid = l + (r-l)/2;
		if(v[mid] >= q){
			ans = v[mid]; // Replacing ans with v[mid]>= to 'q' and looking other possible answers in shorter indexes
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout << ans << '\n';
}
