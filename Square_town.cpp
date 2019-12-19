#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,n,a,cont=0;
	cin>>m>>n>>a;
	if(m%a == 0 && n%a ==0){
		cont = m/a;
		cont *=n/a;
		cout<<cont;
	}
	else if(m%a == 0 && n%a !=0){
		cont +=m/a;
		cont *=(n/a+1);
		cout<<cont;
	}
	else if(m%a != 0 && n%a ==0){
		cont += n/a;
		cont *=(m/a +1);
		cout<<cont;
	}
	else if(m%a != 0 && n%a !=0)
	{
		cont += n/a+1;
		cont *=(m/a+1);
		cout<<cont;
	}
}