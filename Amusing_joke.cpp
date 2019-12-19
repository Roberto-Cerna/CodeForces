#include<bits/stdc++.h>
using namespace std;

string ord(string s){

	for (int i = 0; i < s.length(); i++)
		for (int j = 0; j <s.length()-1 ; j++)
		{
			if(s[j] < s[j+1]){
				char aux = s[j];
				s[j] = s[j+1];
				s[j+1] = aux;
			}
		}
	return s;
}

int main(){

	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	if(s1.length() + s2.length() != s3.length()){
		cout<<"NO"<<endl;
		return 0;
	}
	s1 += s2;
	s1 = ord(s1);
	s3 = ord(s3);
	if(s1 == s3)cout<<"YES";
	else cout<<"NO";
	

}