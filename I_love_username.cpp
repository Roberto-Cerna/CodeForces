#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int amz=0,max,min, aux;
	for (int i = 0; i < n; ++i)
	{
		if(i == 0)cin>>min;
		else if(i == 1)
		{
			cin>>aux;
			if (aux>min){
				max = aux;
				amz++;
			}	
			else if(aux< min){
				max = min;
				min = aux;
				amz++;
			}
			else if(aux = min) max = aux;
		}
		else if(i != 0 && i != 1){
		cin>>aux;
		if(aux>max){
			max = aux;
			amz++;	
		}
		else if(aux < min){
			min = aux;
			amz++;
		}
		}
	}
	cout<<amz;
	return 0;
}