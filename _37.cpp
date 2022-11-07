//position of each alphabet in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="iamsogoodatart";
   map<char,vector<int>> m;
   //vector<int> in;
   for(int i=0;i<s.size();i++)
   {
      m[s[i]].push_back(i);
   }
   
   for(auto i:m)
   {
      cout<<i.first<<" ";
      for(auto j:i.second)
      cout<<j<<" ";
      cout<<endl;
   }
}
