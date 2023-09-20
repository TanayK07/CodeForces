
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        int m = (n*(n-1))/2;
 
        vector<int> a(m);
        for(auto &e: a)
            cin>>e;
 
        sort(a.begin(), a.end());
 
        if(a[0] == a[m-1])
        {
            for(int i=0; i<n; i++)
                cout<<a[0]<<" ";
            cout<<"\n";
            continue;
        }
 
        map<int, int> cnt;
        for(auto e: a)
            cnt[e]++;
 
        vector<int> ans;
 
        for(auto [x, c]: cnt)
        {
            while(c >= n-(ans.size()+1))
            {
                c -= n-(ans.size()+1);
                ans.pb(x);
            }
        }
 
        for(auto e: ans)
            cout<<e<<" ";
        cout<<"\n";
    }
}