#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void check(string s){
	for(int i=0; i<s.size();i++){
		s[i]= tolower(s[i]);
	}
	int Kitukhac=0;
	int dem=0;
	for (int i=0;i<s.size();i++){
		if (s[i]>='a' && s[i]<='z'){
  			dem++;
  		}
  		else
			Kitukhac++;
	}	
			
	cout << "Co " << Kitukhac <<" Ki tu khac"<<endl;
	cout << "Co "<< dem << " Chu cai";
}

int main(){
	string s;
	getline(cin,s);
	check(s);
	return 0;
}

