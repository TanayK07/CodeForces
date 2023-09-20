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

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

//--------------------CODE------------------------------//






void solve ()
    
 {
        string s;
        cin>>s;
 
        s = "0" + s;
        int n = s.size();
        int zeros = n;
 
        for (int i=n-1; i>=0; i--)
        {
            if (s[i] >= '5')
            {
                s[i] = '0';
                zeros = i;
                int j = i - 1;
 
                while(s[j] == '9')
                {
                    s[j] = '0';
                    j--;
                }
 
                s[j]++;
            }
        }
 
        for(int i=zeros; i<n; i++)
            s[i] = '0';
 
        if(s.front() == '0')
            s = s.substr(1);
 
        cout<<s<<'\n';
    }

    


int main(){

	int t;
	cin>>t;
	while (t--){
		solve();
	}
	return 0;
}