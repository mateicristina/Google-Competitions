#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int t, n, mij;
	bool verif = false;
	string s;
	long long int a, b;
	cin >> t;
	for ( int i = 0; i < t; i++ )
	{
		cin >> a >> b;
		cin >> n;
		for ( int j = 1; j <= n; j++ ){
			mij = (a+1+b)/2;
			cout<<mij<<'\n';
			cin >> s;
			if( s == "WRONG_ANSWER" )
				return 0;
			if ( s == "CORRECT" )
			{
				verif = true;
				break;
			}
			if( s == "TOO_BIG")
			{
				b = mij-1;
			}
			if ( s == "TOO_SMALL" )
				a = mij + 1;
		}
		if ( verif == false )
			return 0;
	}
}