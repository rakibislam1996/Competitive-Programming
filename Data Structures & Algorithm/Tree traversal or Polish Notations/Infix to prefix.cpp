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

infix_to_prefix(string infix)
{
    stack<char> st;
    stack<char> st2;

    int len = infix.length();

    for(int i = len - 1; i >= 0; i--)
    {
        if(!(is_operator(infix.at(i))))
            st2.push(infix.at(i));

        else if(infix.at(i) == ')')
            st.push(')');

        else if(infix.at(i) == '(')
        {
            while(st.top() != ')')
            {
                st2.push(st.top());
                st.pop();
            }
            st.pop();
        }

        else
        {
            while(!st.empty() && precedence(infix.at(i)) <= precedence(st.top()))
            {
                st2.push(st.top());
                st.pop();
            }
            st.push(infix.at(i));
        }

    }
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty())
    {
        cout<<st2.top();
        st2.pop();
    }
}

int main()
{
    cout<<"Enter the infix expression\n\n";
    string infix;
    cin >> infix;

    cout<<"\nThe prefix expression is\n\n";
    infix_to_prefix(infix);

    cout<<endl;

    return 0;
}

//a+(b*c-(d/e^f)*g)*h
