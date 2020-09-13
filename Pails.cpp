//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=615
/*
USACO 2016 February Contest, Bronze
Problem 1. Milk Pails
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  freopen("pails.in","r",stdin);
  freopen("pails.out","w",stdout);
  ll x,y,m; cin >> x >> y >> m;
  ll maxx{0};
  for (ll i=0;i*x<=m;i++)
  {
    for (ll j=0;i*x+j*y<=m;j++)
    {
      maxx = max(maxx,i*x+y*j);
    }
  }
  cout << maxx;
  return 0;
}
