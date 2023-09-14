#include<bits/stdc++.h>
using namespace std;
int main(){

int  a ,n , i ;
cin>>n;

int ar[n];

for(i=0;i<n;i++)
{
    cin>>ar[i];
}

int gcd=0;

for(i=0;i<n;i++)
{

    int a=gcd;
    int b = ar[i];

    while(b!=0){
        a=a%b;
        swap(a,b);
    }
    gcd=a;
}

    cout<<gcd<<endl;
}


/*

6
18
30
42
66
78
102

*/

