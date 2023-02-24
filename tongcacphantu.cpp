#include<bits/stdc++.h>
using namespace std;

	int sum(int a[],int n);
	
	int main()
	{
		int a[] ={12,5,61,6,18,54};
		int n = sizeof(a)/sizeof(a[0]);
		int s = sum(a,n);
		cout << "Tong cac phan tu la: "<< s << endl;
	}
	
	
	 int sum(int a[],int n)
	 {
	 	int s=0;
	 	for (int i =0 ; i<n;i++ ){
	 		s=s+a[i];
	 		
	 	}
	 	return s;
	 }

