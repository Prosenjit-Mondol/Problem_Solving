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
    int n,k;
    cin>>n>>k;
    if (n==k)
    {
        for (int i = 0; i <n; i++)
        {
            cout<<1<<" ";
        }
        cout<<'\n';
    }
    else if (k==1)
    {
        for (int i = 1; i <=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
    }
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}