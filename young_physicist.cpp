#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	long long suma1=0,suma2=0,suma3=0;
	cin>>n;
	for (int i = 0; i < 3*n; ++i)
	{
		if(i%3==0){
			cin>>a;
		
			suma1 +=a;
		}
		else if (i%3==1)
		{
			cin>>a;
			suma2 +=a;
		}
		else if(i%3==2){
			cin>>a;
			suma3 +=a;
		}
	}
	if(suma1==0 && suma2==0 && suma3==0)cout<<"YES";
	else cout<<"NO";
}