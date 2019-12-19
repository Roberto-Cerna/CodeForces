#include<bits/stdc++.h>
using namespace std;

//4 de 1; sale 3
//3 de 1 y 1 de 1; sale 2
//2 de 1 y 2 de 1; sale 2


int main(){
	int array[4];
	int cont1 = 1;
	for (int i = 0; i <4 ;++i)cin>>array[i];	
	for (int i = 1; i <4; i++)
	{
		int j=i-1;
		bool repite = false;
		while(j>=0){
			if(array[i] == array[j])repite = true;
			j--;
		}
		if(repite == false)cont1++;
	}
	cout<<4-cont1;
}