//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=855
/*
USACO 2018 December Contest, Bronze
Problem 1. Mixing Milk
*/
#include <bits/stdc++.h>
using namespace std;
main()
{
  freopen("mixmilk.in","r",stdin);
	freopen("mixmilk.out","w",stdout);
  int a[5],b[5];
  for (int i=1;i<=3;i++)
  {
    cin >> a[i] >> b[i];
  }
  int curr{1};
  for (int i=1;i<=4;i++)
  {
    if (curr==4)
    {
      curr = 1;
    }
    if (curr==1 || curr==2)
    {
      int tot=b[curr]+b[curr+1];
      if (tot>=a[curr+1])
      {
        b[curr] = tot-a[curr+1];
        b[curr+1]=a[curr+1];
      }
      else
      {
        b[curr+1]=tot;
        b[curr]=0;
      }
    }
    if (curr==3)
    {
      int tot=b[curr]+b[1];
      if (tot>=a[1])
      {
        b[curr]=tot-a[1];
        b[1]=a[1];
      }
      else
      {
        b[1]=tot;
        b[curr]=0;
      }
    }
    curr++;
  }
  for (int i=1;i<=3;i++)
  {
    cout << b[i] << "\n";
  }
  return 0;
}
