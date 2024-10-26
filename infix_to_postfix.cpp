#include <bits/stdc++.h>
using namespace std;

bool is_operand(char x)
{
    if(x != '/' && x != '*' && x != '+' && x != '-')
        return true;
    else
        return false;
}

string infix_to_postfix(string infix)
{

    map <char, int> precedence;
    precedence['/'] = 4;
    precedence['*'] = 3;
    precedence['+'] = 2;
    precedence['-'] = 1;

    string postfix = "";
    stack <char> st;

    for(int i = 0; i< infix.size(); i++)
    {
        char now = infix[i];

        if(is_operand(now))
        {
            postfix += now;
        }
        else
        {
            while(!st.empty() && (precedence[now] < precedence[st.top()]))
            {
                postfix += st.top();
                st.pop();

            }
            st.push(now);

        }

    }

    while(!st.empty())
    {
        postfix += st.top();
        st.pop();
    }


    return postfix;

}


int main()
{
    cout << infix_to_postfix("A+B/C*D-E");


    return 0;

}
