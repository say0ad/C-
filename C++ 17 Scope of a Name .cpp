#include<bits/stdc++.h>
using namespace std;

int My_func();
int My_Func();
int main()


{
    int sum=0,num=1;
    for(num=1; num<=10;num++)
    {
        sum=sum+num;
    }
    cout << "The sum from 1 to 10 is:"<< sum<<endl;
    My_func(); //This is the calling of my home made function.This function must to call in to "the main function".
    My_Func();
    return 0;
}

int My_func()
{
    cout<< "This is outside of main Function.";
    return 0;
}

int My_Func()
{
    int mot=0,want=1;
    for(want=0;want<=11;want++)
    {
        mot=mot+want;
    }

    cout << "The addition from 1 to 11 is:"<< mot<< endl;

    return 0;
}
