#include<bits/stdc++.h>
using namespace std;
int main()

{
    stack<char>Q;
    cout<< Q.size()<<endl;
    Q.push(11);
    Q.push(22);
    cout<< Q.size()<<endl;
    Q.push(33);
    cout<< Q.size()<<endl;
    Q.push(44);
    cout<< Q.size()<<endl;
    Q.pop();
    cout<< Q.top()<<endl;

    return 0;
}
