// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
  stack<string> st;
  st.push("(");
  cout << st.size() << '\n';
  while (st.size() != 0)
  {
    string x;
    cin >> x;
    if (x == "(")
    {
      st.push("(");
    }
    if (x == ")")
    {

      st.pop();
    }
  }
}

//------------------------------------------------------------------------------
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}