//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll ans=0,n,q;
    cin>>n>>q;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        ans+=o;
    }
    for (int i = 0; i <q; i++)
    {
        int a;
        cin>>a;
        if (a==2)
        {
            ll x;
            cin>>x;
            cout<<n*x<<'\n';
            for (int i = 0; i < n; i++)
            {
                v[i]=x;
            }
            ans=n*x;
        }
        else
        {
            ll p,x;
            cin>>p>>x;
            ans-=v[p-1];
            v[p-1]=x;
            ans+=x;
            cout<<ans<<'\n';
        }
        
    }
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}