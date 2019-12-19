#include<bits/stdc++.h>
using namespace std;


int fibo(int n){
	if(n ==0 ) return 0;
	if (n==1 || n==2) return 1;
	return fibo(n-1) + fibo(n-2);
}


int main()
{
	int x,n=0;
	int a=1,b=1,c;
	cin>>x;
	int array[100];
	while(true){
		if(n==0)c= 0;
		else if(n==1 || n==2)c =1;
		else if(n>2){
		c = a+b;
		a = b;
		b = c;
		}
		array[n] = c;
		if(c == x)break;

		n++;
	}

	
	if(n == 0) {
		cout<<fibo(0)<<" "<<fibo(0)<<" "<<fibo(0);
		return 0;
	}
	if(n == 1 || n == 2){
		cout<<fibo(1)<<" "<<fibo(0)<<" "<<fibo(0);
		return 0;
	}
	if(n == 3){
		cout<<fibo(2)<<" "<<fibo(1)<<" "<<fibo(0);
		return 0;
	}


	int x1 = array[n-1];
	int x2 = array[n-3];
	int x3 = array[n-4];

	cout<<x1<<" "<<x2<<" "<<x3;


	return 0;
}