#include<bits/stdc++.h>
using namespace std;


/*

cstedepartmenteng
duck

*/

vector<int>v;
int main()
{
    string msg, key;
    cin>>msg>>key;

    int col = key.size();
    int k = msg.size();
    int rem = k%col;
    int add = col - rem;

    for(int i=1; i<=add; i++) {
        msg += '*';
    }

    int row = msg.size() / col;
    char str[row+1][col+1];
    int pos = 0;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++) {
            str[i][j] = msg[pos];
            pos++;
            cout << str[i][j];
        }
        cout << "\n";
    }

   /*
   for(i=1;i<=col;i++){
   for(j=1;j<=col;j++){
          int val = key[j-1] - '0';
          if(val==i){
                  //cout<<val<<endl;
                  v.push_back(j);
          }
   }
   }
    */

     map<char,int>mp;
    for(int i=0;i<col;i++)
    {
        mp[key[i]]=i+1;
    }
    sort(key.begin(),key.end());
    for(int i=0;i<key.size();i++)
    {
        v.push_back(mp[key[i]]);
    }



    string result = "";

    for(int i=1; i<=v.size(); i++) {
        int col = v[i-1];
        for(int j=1; j<=row; j++) {
            result = result + str[j][col];
        }
    }

    cout << result << "\n";

}
