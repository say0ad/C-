#include<bits/stdc++.h>
using namespace std;
int main()

{
    int base=1, sum=0, limit;
    cout<< "Enter The Odd Number You want to know the sum:";
    cin>>limit;
    while(base<=limit)
    {
        sum=sum+base; //sum+=base;
        base=base+2;
    }
    cout<< "The Addition of Odd number till "<<limit<< " is:"<<sum<<endl;

    return 0;
}
