#include<bits/stdc++.h>
using namespace std;

int giaiptb2(int a, int b, int c,float &x1 ,float &x2){
	 float delta=(b*b)-4*a*c;
	 if(delta < 0)
	 	return -1;
	 else if (delta==0){
	 	x1= x2= -b/(2*a);
		return 0;
	 }
	 else {
	 	x1=(-b + delta) / (2*a);
	 	x2=(-b - delta) / (2*a);
	 	return 1;
	 }
}


int main(){
	int a,b,c;
	float x1,x2;
	cout <<"Nhap a b c:\n";
	cin >> a >> b >> c;
	if (giaiptb2(a,b,c,x1,x2)==-1)
	cout << "Phuong trinh vo nghiem";
	else if (giaiptb2(a,b,c,x1,x2)==0)
	cout << "Phuong trinh co nghiem kep x1= x2 ="<<x1;
	else {
		cout <<"Phuong trinh co 2 nghiem phan biet:" << endl << x1 << endl << x2;
	}
	return 0;
}
