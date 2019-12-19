#include<bits/stdc++.h>
using namespace std;
int lights[][3]{
		{1,1,1},
		{1,1,1},
		{1,1,1}
};

void cambio(int i1, int j1){
	if( i1>2 || j1 >2 || i1<0 || j1<0)return;
	if(lights[i1][j1] == 0)lights[i1][j1] = 1;
	else lights[i1][j1] = 0;
}
void play(int a, int i, int j){
	for (int k = 0; k < a; k++)
	{		
			cambio(i,j);
			cambio(i+1,j);
			cambio(i,j+1);
			cambio(i-1,j);
			cambio(i,j-1);
	}
}

int main(){


	int matrix[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin>>matrix[i][j];


	for (int i = 0; i < 3; i++)
		for (int j = 0; j <3 ; j++)
			play(matrix[i][j],i,j);
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0;j  < 3; j++)
			cout<<lights[i][j];
		cout<<endl;
	} 
}