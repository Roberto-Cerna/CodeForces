#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,suma;
	cin>>a>>b>>c>>d;
	suma = (a+b+c+d)/3;
	if(suma - a >0)cout<<suma-a<<" ";
	if(suma - b >0)cout<<suma-b<<" ";
	if(suma - c >0)cout<<suma-c<<" ";
	if(suma - d >0)cout<<suma-d<<" ";
}