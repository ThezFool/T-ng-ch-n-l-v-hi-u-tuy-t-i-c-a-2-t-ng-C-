#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long mod = 1e9 + 7;
const long long N = 1e6 + 5;
void check (string s){
 for (int i = 0 ;i<s.size();i++){
  s[i] = tolower(s[i]);
 }
 for (int i = 0 ;i<s.size()-1;i++){
  for (int j = 0 ; j<s.size();j++){
   if (s[i]<s[j]) swap(s[i],s[j]);
  }
 }
 int kitukhac =0;
 int dem =0;
 for (int i = 0 ;i<s.size();i++){
  if (s[i]<'a' || s[i]>'z'){
   kitukhac++;
  }
 }
 for (int i = 0 ;i<s.size();i++){
  if (s[i]>='a' && s[i]<='z'){
   dem++;
   if (s[i]!=s[i+1]){
    cout << s[i]<< " "<< dem<<endl;
    dem=0;
   }
  }
 }
 cout <<"Co "<< kitukhac<< " Ki tu khac";
}
int main (){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    check(s);

}
