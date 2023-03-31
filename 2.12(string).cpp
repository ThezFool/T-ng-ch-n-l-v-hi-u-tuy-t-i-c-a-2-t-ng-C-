#include <bits/stdc++.h>
using namespace std;

void inhoakitudau(string &s)
{
	if(isalpha(s[0])){
		s[0]=toupper(s[0]);
	}
	for (int i=0;i<s.size();i++)
	{
		if (isspace(s[i]))
		{
			int j=(i+1);
			s[j]=toupper(s[j]);
		}
	}
}

int main()
{
	string s;
	getline(cin,s,'_');
	inhoakitudau(s);
	cout <<s;
}
