#include<bits/stdc++.h>
using namespace std;
int main()

{
    int firstin=0,nextall=0,alln=1;
    if(cin>>firstin)
    {
        while(cin>>nextall)
        {
            if(nextall==firstin)
                ++alln;
            else
            {
                cout<<firstin<< " occurs "<< alln<< " times."<<endl;
                firstin=nextall;
                alln=1;
            }
        }
        cout<<firstin<< " occurs "<< alln<< " times."<<endl;
    }



    return 0;
}
