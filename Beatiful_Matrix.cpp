#include<bits/stdc++.h>
using namespace std;

void switch_row(int matrix[5][5],int row){
	int aux;
	for (int i = 0; i < 5; ++i)
	{
		aux = matrix[row][i];
		matrix[row][i] = matrix[row+1][i];
		matrix[row+1][i] = aux;
	}
}
void switch_column(int matrix[5][5],int column){
	int aux;
	for (int i = 0; i < 5 ; ++i)
	{
		aux = matrix[i][column];
		matrix[i][column] = matrix[i][column+1];
		matrix[i][column+1] = aux;
	}
}

int main(){
	int matrix[5][5],key1 ,key2 ,n=0;
	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 5; ++j)	{
			cin>>matrix[i][j];
			if(matrix[i][j] == 1){
				key1 = i ; key2 = j;
		}
	}
	if (key1 <2){
		while(key1 != 2){
			switch_row(matrix,key1);
			key1++;
			n++;
		}
	}
	else if(key1 > 2){
		while(key1 != 2){
			switch_row(matrix,key1-1);
			key1--;
			n++;
		}
	}
	if (key2 <2){
		while(key2 != 2){
			switch_column(matrix,key2);
			key2++;
			n++;
		}
	}
	else if(key2 > 2){
		while(key2 != 2){
			switch_column(matrix,key2-1);
			key2--;
			n++;
		}
	}
	cout<<n;


	
}