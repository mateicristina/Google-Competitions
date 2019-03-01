#include <iostream>
using namespace std;
int main()
{
	int t, n, window, maxi = 0;
	short int sum[500000], a;
	char c;
	cin >> t;
	for ( int i = 0; i < t; i++ )
	{
		cin >> n;
		maxi = 0;
		if ( n % 2 == 0 )
			window = n/2;
		else window = n/2 + 1;
		cin >> c;
		a = c-'0';
		sum[1] = a;
		for ( int j = 1; j < n; j++ )
		{
			cin >> c;
			a = c-'0';
			sum[j+1] = sum[j]+a;
		}
		for ( int j = window; j <= n; j++ )
		{
			if ( sum[j] - sum[j-window] > maxi )
				maxi = sum[j] - sum[j-window];
		}
		cout<<"Case #"<<i+1<<": "<<maxi<<'\n';
	}
}