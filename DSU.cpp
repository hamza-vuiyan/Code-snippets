// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n+1);
    vector<bool> visited(n+1);

    for(int i = 1; i <=n; i++)  cin >> v[i];
    
    for(int i = 1; i <=n; i++){
        if(visited[i] == true) continue;
        else{
            while(visited[i] == false){
                cout << v[i] << ' ';
                visited[i] = true;
                i = v[i];
            }
            cout << '\n';
        }
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}