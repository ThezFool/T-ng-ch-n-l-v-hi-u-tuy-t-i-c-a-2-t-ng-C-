#include <bits/stdc++.h>
using namespace std;
 int ktra(int a, int b, int c){
 	if (a>=b+c||b>=a+c||c>=a+b){
 		return 0;
 	}
 	else
		 return 1; 
	 
 }
int dientich (double a, double b, double c,double &S){
 	if(ktra(a,b,c)==1){
	 
	 double p;
	 	p=(a+b+c)/2;
	 	S=(sqrt(p*(p-a)*(p-b)*(p-c)));
	 	return 1;
	 }
	 else return 0;
}
 
 int main(){
 	int a,b,c;
 	double S;
 	cout << "Nhap 3 canh: "<< endl;
 	cin >> a >> b >> c;
 	if (dientich(a,b,c,S)==1){
 		cout << "dien tich tam giac la: " << S;
	 }
	 else 
	 cout << "khong phai tam giac";
	 
 	return 0;
 	
 	
 }
