#include<bits/stdc++.h>
using namespace std;

void PrintStack(stack<int>AS)
{
    while(!AS.empty())
        {

        cout<<AS.top()<<" ";

        AS.pop();

        }

        cout<<endl;
}

int main()

{
    stack <int> AS;

    AS.push(11);
    AS.push(22);
    AS.push(33);
    AS.push(44);
    AS.push(55);
    AS.push(66);
    cout<<AS.size()<<endl;

    PrintStack(AS);
    AS.pop();
    cout<<AS.size()<<endl;

    PrintStack(AS);
    AS.pop();
    AS.pop();
    cout<<AS.size()<<endl;
    PrintStack(AS);


    return 0;
}
