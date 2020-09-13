//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=639
/*
USACO 2016 US Open Contest, Bronze
Problem 1. Diamond Collector
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  freopen("diamond.in","r",stdin);
  freopen("diamond.out","w",stdout);
  ll n,k; cin >> n >> k;
  ll arr[n];
  for (ll i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  ll maxx{0};
  for (ll i=0;i<n;i++)
  {
    ll sum{0};
    for (ll j=0;j<n;j++)
    {
      if (arr[j]>=arr[i] && arr[j]<=k+arr[i])
      {
        sum++;
      }
    }
    maxx = max(maxx, sum);
  }
  cout << maxx;
  return 0;
}
