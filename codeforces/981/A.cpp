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
#define sort(a) sort(a.begin(), a.end())
#define endl "\n"
#define printl(a) cout << a << "\n";
#define YE cout <<"YES"<<endl;
#define NO cout <<"NO"<<endl;
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>

int is_palindrome(string S, int left, int right)
{
    while (left <= right)
    {
        if (S[left++] != S[right--])
            return false;
    }

    return true;
}

void solve()
{
    string S;
    cin >> S;
    int length = S.size();

    if (!is_palindrome(S, 0, length - 1))
        cout << length;
    else if (!is_palindrome(S, 0, length - 2) || !is_palindrome(S, 1, length - 1))
        cout << length - 1;
    else
        cout << "0";

    cout << endl;
}

int main()
{
   // int T;
    //cin >> T;
    //while (T--)
   // {
        solve();
    //}
    return 0;
}
