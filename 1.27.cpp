#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for (int i=0; i<n; i++)
	cin >> a[i];
}

int max(int a[], int n)
{
	int max=a[0];
	for (int i=1; i<n; i++)
	if (max < a[i])
		max = a[i];
		return max;
}

int min(int a[], int n)
{
	int min=a[0];
	for (int i=1; i<n ;i++)
	if (min > a[i])
		min = a[i];
		return min;
}

int sum(int a[], int n)
{
	int sum = 0;
	for (int i=0;i<n; i++){
	
	if (a[i]<0)
		sum+=a[i];
	}
	return sum;	
}




bool timx(int a[], int n, int x)
{
	for (int i=0; i<n;i++)
	if (x==a[i])
	return true;
	return false;
 } 
 
bool kiemtrasxtang(int a[], int n)
{
	int dem=0;
	 for (int i = 0; i < n-1; i++)
	 {
	 	if (a[i+1]>=a[i]) 
	 	dem++;
	 }
}

void sapxep(int a[],int n)
{
	int tg;
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++)
        {
        	 if(a[i] > a[j])
        	 {
        	 	tg=a[i];
        	 	a[i] = a[j];
                a[j] = tg;  
			 }
			 
		}
	}
}


int main()
{
	int n;
	cout <<"Nhap so phan tu: ";
	cin >> n;
	int a[n];
	nhap(a,n);
	cout <<"lon nhat:"<< max(a,n)<< endl;
	cout <<"Be nhat:" << min(a,n) << endl;
	int x;
	cout <<"x= ";
	cin >> x;
	bool d=timx(a,n,x);
	if(d==1)
		cout <<"So nguyen" << x <<" Co trong mang"<< endl;
	else
		cout <<"So nguyen" << x <<" Khong co trong mang"<< endl;
		sapxep(a,n);
	cout << "Mang da sap xep la:" << endl;
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
	return 0;
	
}
