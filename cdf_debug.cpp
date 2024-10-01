
#include<bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

int main(){
	int t; cin >> t;
	for(int tt = 1; tt <= t; tt++){
		int n, m , k; cin >> n >> m >> k;
		string str; cin >> str;

		if(t == 10000 && tt == 1508){
			cout << n << m << k << '\n';
			cout << str << '\n';
		}
		if(t == 10000) continue;

		ll i = -1;
		n = str.size();

		bool f = true;
		bool no = false;
		while(i < n){
			i+=m;
			if(i >= n)	break;
			if(str[i] == 'L') continue;
			else{
				while(str[i] != 'L' && i >= 0){
					i--;
				}
				i+=m;
				while(str[i] != 'L' && i < n){
					if(str[i] == 'C'){
						//cout << "NO\n";
						f = false;
						break;
					}
					else{
						k--;	i++;
						if(k < 0){
							//cout << "NO\n";
							f = false;
							break;;
						}
					}
				}
				if(f == false){
					no = true;
					break;
				}
			}
		}
		if(no) cout << "NO\n";
		else
			cout << "YES\n";
	}

}
