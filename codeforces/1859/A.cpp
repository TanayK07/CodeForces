#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define fora(a) for(auto u:a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(auto i=0; i<n; i++)
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define Y cout << "YES"<<endl;
#define N cout << "NO"<<endl;
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i--)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

//--------------------CODE------------------------------//

void solve() {
    int n;
    cin >> n;
    
    vector<int> inp;
    inp.assign(n, 0);
    
    for (auto& x : inp) {
        cin >> x;
    }

    sort(inp.begin(), inp.end());

    if (inp.back() == inp[0]) {
        cout << "-1\n";
        return;
    } else {
        int it = 0;
        while (inp[it] == inp[0]) {
            it++;
        }

        cout << it << " " << n - it << "\n";

        for (int j = 0; j < it; ++j) {
            cout << inp[j] << " ";
        }
        
        for (int j = it; j < n; ++j) {
            cout << inp[j] << " ";
        }
    }
}


int main() {
	int t;
	cin>>t;
	while (t--){
		solve();
	}
   
}
