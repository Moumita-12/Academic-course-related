#include<bits/stdc++.h>
using namespace std;
int main(){

   string s, k1, k2;
   cin>>s>>k1>>k2;

   for(int i=0;i<s.size();i++){
    if(s[i]>='A'  &&   s[i]<='Z'){
        cout<<s[i]<<" ------ "<<k1[s[i]-'A']<<endl;
        s[i]=k1[s[i]-'A'];
    }

    else{
        cout<<s[i]<<" ------ "<<k2[s[i]-'a']<<endl;
        s[i]=k2[s[i]-'a'];
    }
   }
}

