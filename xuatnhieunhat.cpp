#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int asciiarray[256];
//Tra giá tri ascii cua phan tu co so lan xuat hieen nhieu nhat.
int findindex(string s){
	for (int i=0;i<256;i++){
		asciiarray[i]=0;
	}
	int i=0;
	//(s[i] la kitu) bat dau dem ki tu, kitu nao xuat hien thi thay vao ascii r tang len 1.
	while(s[i] !='\0')//cho chay den cuoi(tiep tuc chay mien khac \0(null)).
	{
		int ascii = (int)s[i];
		asciiarray[ascii] +=1;
		i++;
	}
	int max_index = 0;
	for (int i=0; i<256; i++){
		if (i != 32)//32=space(ko lay khoang cach).
		{
			if (asciiarray[i]>asciiarray[max_index]){
				max_index=i;
			}
		}
	}
	return max_index;
}

void printResult(string s){
	int index = findindex(s);
	vector<int> v;
	for (int i=0; i<256; i++){
		if (asciiarray[i] == asciiarray[index])
		v.push_back(i);
	}
	if(v.size() == 1){
		cout <<"Ky tu xuat hien nhieu nhat: "<< (char)v[0]<<endl;
		cout << "So lan xuat: "<< asciiarray[index]<<endl;
	}
	else {
		cout << "Cac ky tu xuat hien nhieu nhat: ";
		for(int i=0;i<v.size();i++){
			cout << (char)v[i]<<" "<< endl;
			cout<<"so lan xuat hien: "<< asciiarray[index]<<endl;
		}
	}
}

int main(){
	string (s);
	cout <<"Nhap vao: ";
	getline(cin,s);
	printResult(s);
	return 0;
}
