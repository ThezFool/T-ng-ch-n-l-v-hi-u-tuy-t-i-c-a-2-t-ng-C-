#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	int tongc=0, tongl=0;
	cout <<"Nhap so nguyen ";
	cin >> n;
	for (i=1;i<=n;i++){
		if (i % 2 == 0)
		tongc=tongc+i;
		else tongl=tongl+i;
	}
	int hieu;
	if(tongc > tongl)
	    hieu = tongc - tongl;
	    else hieu = tongl - tongc;
	    
    cout <<"Tong cac so chan " << tongc<<endl;
	cout <<"Tong cac so le " << tongl<<endl;
	cout <<"Hieu tuyet doi cua 2 tong " << hieu;
	return 0;	
	
}
