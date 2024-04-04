#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
  return a<b;
}

int main() 
{
     string s="hammir";

     sort(s.begin(),s.end(),cmp);

     for(auto i:s)
     {
      cout<<i<<" ";
     }
  return 0;
}