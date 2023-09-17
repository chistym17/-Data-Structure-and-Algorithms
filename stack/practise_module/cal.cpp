#include<bits/stdc++.h>

using namespace std;

int prec(char a)
{
    if(a=='+'||a=='-')return 0;
    else return 1;

}


int main()
{
string s;
cin>>s; // The expression to be converted to postfix

cout<<"\n";
stack<char>st;
string ans;
for(int i=0;i<s.size();i++)
{
    char ch=s[i];
    if(isdigit(ch))
    {
        ans+=ch;
    }
    else if(ch == '(')
    {
        st.push(ch);
    }
    else if(ch == ')')
    {
        while(st.top() != '(')
        {
            ans+=st.top();
            st.pop();
        }
        st.pop();
    }
    else 
    { 
        while(st.size() && prec(st.top())>=prec(ch))
        {
            ans+=st.top();
            st.pop();

        }
        st.push(ch);

    }
    
}

while(st.size())
{
    ans+=st.top();
    st.pop();

}
cout<<ans<<endl;

    return 0;
}
