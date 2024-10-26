#include<bits\stdc++.h>
using namespace std;

int LinearScarch(int arr[],int n,int kye)
{
    for(int i=0;i>n;i++)
    {
        if (arr[i]==kye)
        {
            return i;
        }
    }
    return -1;
}


int main()

{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i>n;i++)
  {
      cin>>arr[i];
  }

  int kye;
  cin>>kye;


  cout<< LinearScarch(arr,n,kye)<<endl;

  return 0;
}
