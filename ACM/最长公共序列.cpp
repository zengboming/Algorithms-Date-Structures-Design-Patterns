#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    while(n--)
    {
        int i,j,nLength1,nLength2;
        int sz1[505],sz2[505];
        int aMaxLen[505][505];

        cin>>nLength1;

        for(i=1;i<=nLength1;i++)
            cin>>sz1[i];

        cin>>nLength2;
        for(i=1;i<=nLength2;i++)
            cin>>sz2[i];

        for(i=0;i<=nLength1;i++)
            aMaxLen[i][0]=0;
        for(j=0;j<=nLength2;j++)
            aMaxLen[0][j]=0;

        for(i=1;i<=nLength1;i++)
        {
            for(j=1;j<=nLength2;j++)
            {
                if(sz1[i]==sz2[j])
                    aMaxLen[i][j]=aMaxLen[i-1][j-1]+1;
                else
                {
                    int nLen1=aMaxLen[i-1][j];
                    int nLen2=aMaxLen[i][j-1];

                    if(nLen1>nLen2) aMaxLen[i][j]=nLen1;
                    else aMaxLen[i][j]=nLen2;
                }
            }
        }
        cout<<aMaxLen[nLength1][nLength2]<<endl;
    }
    return 0;
}
