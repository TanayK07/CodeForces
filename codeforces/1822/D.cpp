#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

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
    cin>>n;
    if (n==1){
        cout <<1<<endl;

    }
    else if (n%2!=0){
        cout <<-1<<endl;
    }
    else {
int t = 0;
int l = n;
int i = 0, j = n-1;
int c = 0;
while(i <= j) {
    if(c%2) {
        int cu = 0;
        if(j < t) {
            cu = (n+j) - t;
        } else {
            cu = j - t;
        }
        cout << cu << " ";
        t = j;
        j--;
    } else {
        int cu = 0;
        if(i <= t) {
            cu = (n+i) - t;
        } else {
            cu = i - t;
        }
        cout << cu << " ";
        t = i;
        i++;
    }
    c++;
}
cout << endl;}

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
