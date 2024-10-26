#include<bits/stdc++.h>
using namespace std;

int nasa=69; // This is global scope & this is using everywhere.
int main() // This is main function.

{
    int spacex=0; // This is new variable in local scopes.
    cout<< nasa << " "<< spacex<< endl;

    int nasa=0; // This is new local scope. Which will be using for the the main function only.
    cout<< nasa<< " "<< spacex<< endl;

    cout <<::nasa <<" " << spacex<< endl;// In this line I used "::" for calling the global scope again.


    return 0;
}
