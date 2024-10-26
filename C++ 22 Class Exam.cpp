#include<bits/stdc++.h>
using namespace std;

void PrintSize(stack<int>Q)
{
    while (!Q.empty())

{
    cout<<Q.top()<<" ";
    Q.pop();
}
    cout<<endl;

}

int main()

{
    stack<int>Q;
    Q.push(21);
    cout<<Q.size()<<endl;
    Q.push(12);
    cout<<Q.top()<<endl;
    Q.pop();
    cout<<Q.empty()<<endl;
    Q.push(13);

    PrintSize(Q);

    return 0;
}
