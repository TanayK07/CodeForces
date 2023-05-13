#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define endl "\n"


#define FOR(a, b, c) for (int a = (b); (a) < (c); ++(a))
#define MSET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()

void solve()
{
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    LL cnt=0;
   
 LL p[n];
 
 for(LL i=0;i<n;i++)
 { cin>>p[i];
   p[i]--;
 }
 
 
 for(LL i=0;i<n;i++){
     if(p[i]%k!=i%k)++cnt;
 }
 
 if(cnt==2)
 cnt=1;
 else if(cnt>2)
 cnt=-1;
 
 cout<<cnt<<endl;




}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
