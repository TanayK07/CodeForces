#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;

int sign(int n) {
    
    int isNeg = n>>31;
    int isPos = abs(-n>>31);
    cout<< isNeg+isPos<<'\n';

}

int conditionall(int x, int y, int z){

    // int k = (x or (x==1));
    // int ans = (k & y) | (~k & z);
    // return ans;

    return ((x or (x==1)) & y) | (~(x or (x==1)) & z);
}


void solve(){  

    int n;
    cin>>n;

    vi a(n);
    map<int,set<int>> mp;
    
    forn(i,0,n){
        cin>>a[i];
        mp[a[i]].insert(i);
    }

    vi b = a;
    sort(all(b));

    vi diff;
    forn(i,0,n-1){
        diff.pb(b[i+1]-b[i]);
    }

    vi ans;

    int rightSm = 0;
    int k = 1;
    for(int i=n-2; i>=0; i--){
        rightSm += diff[i]*k;
        k++;
    }

    int lftSm = 0;

    ans.pb(rightSm + n);
    k = 1;

    forn(i,0,n-1){

        lftSm += diff[i]*(k++);

        rightSm -= diff[i]*(n-1-i);

        ans.pb(lftSm + rightSm + n);
    }

    vi res(n);
    for(int i=0; i<n; i++){

        int f = *mp[b[i]].begin();
        res[f] = ans[i];
        mp[b[i]].erase(*mp[b[i]].begin());

    }

    for(auto i: res) cout<<i<<' ';
    cout<<'\n';

}  

signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}