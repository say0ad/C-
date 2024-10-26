#include<bits/stdc++.h>
using namespace std;
int main()

{
    int base=1, total=0, maximum;
    cout<< "Enter The highest value for calculation:";
    cin>> maximum;

    for(base;base<=maximum;base++)
    {
        total=total+base;
    }
    cout<< "The Addition from 1 to "<<maximum<< " is:"<<total<<endl;


    return 0;
}
