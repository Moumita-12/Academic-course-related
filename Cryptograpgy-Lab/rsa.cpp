#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long n;

long long bigmod(long long a, long long p)
{
    if(p==0)  return 1;
    ll x= bigmod(a,p/2);
    x=(x*x)%n;
    if(p&1)   x=(x*a)%n;
    return x;
}

int main(){
    long long  p,q,i,e,d;
    cout << "Enter prime  p and q: ";
    cin>>p>>q;  // 7 11
    n = p*q;
    cout<<"n  =   "<<n<<endl;

    long long phi = (p-1)*(q-1);
    for(i=2;i<=phi;i++){
       int g = __gcd(i,phi);

       if(g==1){
        e=i;
        break;
       }
    }
    cout<<"e  =   "<<e<<endl;

    d=1;
    while((d*e)%phi!=1){
        d++;
    }

     cout<<"d  =   "<<d<<endl;


     cout << "public key, (e, n) : " << e << ", " << n<< endl;
	cout << "private key, (d, n) : " << d << ", " << n << endl;

     long long pt ;//= 9;
     cout << endl << "Enter message: "; cin >> pt;
     long long c = bigmod(pt,e);
     cout<<"ciphertext  =   "<< c <<endl;
     cout<<"back to plaintext  =   "<< bigmod(c,d) <<endl;
}

