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

    for(int i=0;i<=100;i++){
        int j=n-i;
        int temp=(i*(i-1))/2+(j*(j-1))/2;
        if(temp==k){
            cout<<"YES"<<endl;
            for(int z=1;z<=i;z++){
                cout<<"1 ";
            }
            for(int z=1;z<=n-i;z++){
                cout<<"-1 ";
            }
            cout<<endl;
            return;

        }
    }
    cout<<"NO"<<endl;
    return;






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
