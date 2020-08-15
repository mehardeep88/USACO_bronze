//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=891
/*
USACO 2019 January Contest, Bronze
Problem 1. Shell Game
*/
#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100],g[100];
int corr(int m)
{
  //int n,a[100],b[100],g[100];
  int curr=m,tot{0};
  for (int i=0;i<n;i++)
  {
    if (a[i]==curr)
    {
      curr=b[i];
    }
    else if (b[i]==curr)
    {
      curr=a[i];
    }
    if (g[i]==curr)
    {
      tot++;
    }
  }
  return tot;
}
main()
{
  //int n;
  freopen("shell.in","r",stdin);
  cin >> n;
  //int a[100],b[100],g[100];
  for (int i=0;i<n;i++)
  {
    cin >> a[i] >> b[i] >> g[i];
  }
  int score{0};
  for (int i=1;i<=3;i++)
  {
    score = max(score,corr(i));
  }
  freopen("shell.out","w",stdout);
  cout << score << "\n";
  return 0;
}
