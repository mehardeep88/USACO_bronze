//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=735
/*
USACO 2017 US Open Contest, Bronze
Problem 1. The Lost Cow
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  freopen("lostcow.in","r",stdin);
	freopen("lostcow.out","w",stdout);
  ll int dir{1},sum{0},move{1};
  ll int x,y; cin >> x >> y;
  while (1)
  {
    if ((dir==1 && x<=y && y<=x+move) || (dir==-1 && y<=x && y>=x-move)) //Bessie found!
    {
      sum+=abs(y-x);
      cout << sum << "\n";
      break;
    }
    //int move{1};
    else
    {
      sum+=move*2;
      move*=2;
      dir*=-1;
    }
  }
  return 0;
}
