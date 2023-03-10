#include <bits/stdc++.h>
using namespace std;

char *xoa_trong(char *st)
{
	char *p=st;
	char *q=st;
	while(*q){
		while(isspace(*q)){
			q++;	
		}				
		if (*q){
		*p++ = *q++;
		}
		if(*q&&isspace(*q)&&!isspace(*(q-1))){
		*p++=' ';
	}
}

*p='\0';

if(isspace(*st)){
	p=st;
	q=st+1;
	while(isspace(*q)){
		q++;
	}
	memmove(p,q,strlen(q)+1);
}

p=st + strlen(st)-1;
if (isspace(*p)){
	while(isspace(*p)){
		p--;
	}
	*(p+1)='\0';
}

return st;
}

int main ()
{
	char st[100];
	cout << "Nhap chuoi:";
	fgets(st,100,stdin);
	
	xoa_trong(st);
	
	cout <<"Chuoi sau khi xoa trang thua: " << st ;
	return 0;
}
