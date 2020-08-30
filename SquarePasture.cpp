//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=663
/*
USACO 2016 December Contest, Bronze
Problem 1. Square Pasture
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	freopen("square.in","r",stdin);
  freopen("square.out","w",stdout);
	int ax1,ax2,bx1,bx2,ay1,ay2,by1,by2;
	cin >> ax1 >> ay1 >> ax2 >> ay2;
	cin >> bx1 >>by1 >> bx2 >> by2;
	int maxx = max(ay2,by2);
	int minn = min(ay1,by1);
	int maxxx = max(ax2,bx2);
	int minnn = min(ax1,bx1);
	int diff = maxx-minn;
	int difff = maxxx-minnn;
	int dist = max((diff*diff),(difff*difff));
	cout << dist << "\n";
	return 0;
}
