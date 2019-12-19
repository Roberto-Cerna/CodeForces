#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,A1,A2,A3;
	cin>>A1>>A2>>A3;
	a = sqrt(A1*A2/A3);
	b = sqrt(A2*A3/A1);
	c = sqrt(A1*A3/A2);
	cout<<4*(a+b+c);
	return 0;
}