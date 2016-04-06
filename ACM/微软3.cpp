#include<iostream>
using namespace std;
int N,M;
int min;

int func(int s_x,int s_y,int e_x,int e_y,char a[][M+1],int tag)
{
     int i,j;
     for(i=s_x,j=s_y;i==e_x&&j==e_y;)
     {
          if(tag==0)
          {
              while(a[i][j]!='b')
              {
                  j++;
              }
              j--;
              if(a[i+1][j]!='b')
              {
                  tag=1;
              }
              else
              {
                  if(i+1<M)
                  {
                      a[i+1][j]='.';
                      func(i,j,N,M,a,0);

                  }

              }
          }
          if(tag==1)
          {
              while(a[i][j]!='b')
              {
                  i++;
              }
              i--;
              if(a[i][j+1]!='b')
              {
                  tag=0;
              }
              else
              {

              }
          }
     }


}



int main()
{
    char c;
    while(cin>>N>>M)
    {
        char a[N+1][M+1];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                cin>>c;
                a[i][j]=c;
            }
            a[i][M]='b';
        }
        for(int j=0;j<M;j++)
            a[N][j]='b';

        int num=0;
        num=func(0,0,N,M,a,0);
        cout<<num<<endl;

    }

    return 0;
}
