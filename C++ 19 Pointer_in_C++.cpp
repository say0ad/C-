#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ival=50;
    int *p= &ival;  //*P shows the value of variable.

    cout<< "The initial value= " << ival<<endl << "position="<< p <<endl<< "value (*p) ="<< *p<< endl;
    cout<< "----------------------------------------------"<< endl;

    *p=59;
    cout<< "The initial value= " << ival<<endl << "position="<< p<<endl << "value (*p) ="<< *p<< endl;
    cout<< "----------------------------------------------"<< endl;

    *p=69;
    cout<< "The initial value= " << ival<<endl << "position="<< p<<endl << "value (*p) ="<< *p << endl;
    cout<< "----------------------------------------------"<< endl;


    return 0;
}
