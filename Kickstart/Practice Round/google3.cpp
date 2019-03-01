#include <iostream>
using namespace std;

const long long int MOD = 1000000007;
long long int power;
int a[1000001], nr_ap[101];

int main()
{
	int t, n, k, x1, y1, x2, y2, c, d, e1, e2, f;
	cin >> t;
	for ( int i = 0; i < t; i++ )
	{
		cin >> n;
		cin >> k >> x1 >> y1 >> c >> d >> e1 >> e2 >> f;
		a[1] = (x1+y1)%f;
		nr_ap[1] = 2;
		for ( int j = 2; j <= n; j++ )
		{
			x2 = ( c*x1 + d*y1 + e1)%f;
			y2 = ( d*x1 + c*y1 + e2)%f;
			a[j] = (x2+y2)%f;
			x1 = x2;
			y1 = y2;
			nr_ap[j] = 2;
		}
		for ( int j = 1; j <= k; j++ )
		{
			
		}

	}
}