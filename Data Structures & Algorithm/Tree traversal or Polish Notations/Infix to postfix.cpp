#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
    else
        return 0;
}

bool is_operator(char op)
{
    if(op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '(' || op == ')')
        return true;
    else
        return false;
}

infix_to_postfix(string &infix)
{
    stack<char> st;

    int len = infix.length();

    for(int i = 0; i < len; i++)
    {
        if(!(is_operator(infix.at(i))))
            cout<<infix.at(i);

        else if(infix.at(i) == '(')
            st.push('(');

        else if(infix.at(i) == ')')
        {
            while(st.top() != '(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && precedence(infix.at(i)) <= precedence(st.top()))
            {
                cout<<st.top();
                st.pop();
            }
            st.push(infix.at(i));
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}

int main()
{
    cout<<"Enter the infix expression\n\n";
    string infix;
    cin >> infix;

    cout<<"\nThe postfix expression is\n\n";
    infix_to_postfix(infix);
    cout<<endl;

    return 0;
}
//a+(b*c-(d/e^f)*g)*h
//h*(g*(f^e/d)-c*b)+a
