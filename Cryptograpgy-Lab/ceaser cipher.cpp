#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,char>mp1,mp2;

    int i , j;

    char up = 'A';
    char low = 'a';

    for(i=0;i<26;i++){
            mp1[i] = up;
            up++;

           // cout<<mp1[i]<<endl;
    }

    //cout<<"............................"<<endl;

    for(i=0;i<26;i++){
            mp2[i] = low;
            low++;
    }

    string s = "CsTEdepT";

    int k =5;

    string ct;

    for(i=0;i<s.size();i++){
        char ch = s[i];

        if(ch>='A' && ch<='Z'){
            int id = ch - 'A';
            //cout<<id<<endl;
            id= id+k;
            id= id%26;

            char ch1= mp1[id];
            cout<<ch<<" ------- "<<ch1;
            ct+=ch1;
        }

        if(ch>='a' && ch<='z'){
            int id = ch - 'a';
            id= id+k;
            id= id%26;

            char ch2= mp2[id];
            cout<<ch<<" ------- "<<ch2;
            ct+=ch2;
        }

        cout<<endl;
    }

    cout<<ct<<endl;


}
