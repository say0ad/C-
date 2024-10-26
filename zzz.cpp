#include<bits/stdc++.h>
using namespace std;
int main()
// This is totally cool. too much hard for me to remember.
{
  int x=0,y=0,z=1;
  if(cin>>x)
  {
  while(cin>>y)
  {
  if(y==x)
  ++z;
  else
  {
  cout<<x<< " occurs "<<z << " times."<<endl;
  x=y;
  z=1;
  }

  }

  }

  cout<<x<< " occurs "<<z<< " times."<<endl;

 return 0;
 }
