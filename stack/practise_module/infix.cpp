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
cin>>s;
cout<<"\n";
stack<char>st;
string ans;
for(int i=0;i<s.size();i++)
{
    char ch=s[i];
    if(ch>='a' && ch<='z')
    {
        ans+=ch;
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
    cout<<ans<<"\n";
    
}

while(st.size())
{
    ans+=st.top();
    st.pop();

}
cout<<ans;



    return 0;
}
