#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start=2, total=0, maximum;
    cout<< "Enter The Even Number Limit For Sum:";
    cin>> maximum;
    while(start<=maximum)
    {
        total+=start;//total=total+start;
        start=start+2;
    }
    cout<< "The addition to "<<maximum<< " is:"<<total<< endl;


    return 0;
}
