#include<bits/stdc++.h>
using namespace std;
int main(){

int i, j, row =3 ;
int n=3;
string s= "cstedepartment";
int x = 2*(n-1);
int rem = s.size() % x;
int add = x - rem;


for(i=0; i<add;i++){
    s+='*';
   }


   int col = s.size();
   char ch[n][col];
   for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    ch[i][j]='.';
   // cout<<ch[i][j]<<endl;
   }
   }

int temprow =0;
bool flag=true;
 for(i=0;i<col;i++){
  ch[temprow][i] = s[i];

  if(temprow==0) flag=true;
  if(temprow==n-1) flag=false;

  if(flag)  temprow++;
  else temprow--;
 }




  string result;


  for(i=0;i<row;i++){
   for(j=0;j<col;j++){

       if( ch[i][j]!='.')  //cout<<ch[i][j]<<endl;
       result+=ch[i][j];
       //cout<<result<<endl;


       }
   }


cout<<result<<endl;


}


