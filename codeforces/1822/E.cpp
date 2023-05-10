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
bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}
void solve()
{
   string s;
        int n;
        cin>>n>>s;
        if(n%2) cout<<-1<<"\n";
        else
        {
            map<char,int>frq;
            for(auto &it:s) frq[it]++;
            bool chk=true;
            for(auto &it:frq)
            {
                if(it.second>n/2)
                {
                    cout<<-1<<"\n";
                    chk=false;
                    break;
                }
            }
            if(chk)
            {
                int moves=0;
                for(int i=0;i<n/2;i++)
                {
                    if(s[i]==s[n-1-i]) moves++;
                }
                map<char,int>grp;
                for(int i=0;i<n/2;i++) if(s[i]==s[n-1-i]) grp[s[i]]++;
                int same=0;
                for(auto &it:grp) same=max(same,it.second);
                cout<<max((moves/2)+(moves%2),same)<<"\n";
            }
        }    }
   



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
