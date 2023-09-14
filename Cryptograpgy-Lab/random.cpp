#include<bits/stdc++.h>
using namespace std;
int main(){

int x1, a, c ,m ,n , i ;
cin>>x1>>a>>c>>m;
cin>>n;

int ar[n];

ar[0] = x1;  //seed

cout<<ar[0]<<endl;

for(i=1;i<n;i++)
{
    ar[i]= (ar[i-1]*a +c ) % m;

    cout<<ar[i]<<endl;
}
}

/*

5
3
3
7
10

*/
