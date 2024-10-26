#include<bits/stdc++.h>
using namespace std;
int main()

{
    int VSS=1,SKS=0;
    while(VSS<=10) // (1<=10)
    {
        SKS+=VSS; //SKS=SKS+VSS || 0=0+1;
        VSS=VSS+1; // 1=1+1;

    }

    cout<< "The Sum from 1 to 10 is:" <<SKS <<endl;


    return 0;
}
