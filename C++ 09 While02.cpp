#include<bits/stdc++.h>
using namespace std;
int main()

{
    int base=1,sum=0,hot;
    cout << "Enter the number that you Wanna know the sum:";
    cin>>hot;

    while(base<=hot)
    {
        sum+=base;//sum=sum+base || 0=0+1;
        base++;
    }
    cout<< "The sum till the number "<<hot<< " that you have entered is:"<<sum<< endl;


    return 0;
}
