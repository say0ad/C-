#include<bits/stdc++.h>
using namespace std;
int main()

{
    int sayed=0,sabbir=0,maisha=1;
    if(cin>>sayed)
    {
        while(cin>>sabbir)
            if(sabbir==sayed)
            ++maisha;
        else
        {
            cout<<sayed<< " occurs "<<maisha<< " times."<<endl;
            sayed=sabbir;
            maisha=1;
        }
        cout<<sayed<< " occurs "<<maisha<< " times."<<endl;
    }


    return 0;
}
