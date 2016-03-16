#include<iostream>
#include<stack>
using namespace std;

int main()
{
       int n,i,j,c,d[18];
       string a,b;
       while(cin>>n>>a>>b)
       {
            i=j=c=0;
            stack<int> st;
            int tag = 1;
           while(j<n)
           {
                if(a[i]==b[j])
               {
                     i++;
                     j++;
                    d[c++]=1;
                   d[c++]=0;
            }
            else if(!st.empty()&&st.top()==b[j])
            {
                   d[c++]=0;
                   st.pop();
                    j++;
              }
              else if(i<n)
             {
                  d[c++]=1;
                  st.push(a[i]);
                  i++;
               }
              else
              {
                  tag = 0;
                  break;
                }
      }
      if(tag)
     {
           cout<<"Yes."<<endl;
           for(i=0;i<c;i++)
               if(d[i])
                   cout<<"in"<<endl;
               else
                    cout<<"out"<<endl;
      }
     else
            cout<<"No."<<endl;
     cout<<"FINISH"<<endl;
 }
 return 0;
}
