#include<iostream>
using namespace std;

int main()
{
    double a[100],b[100],c[100],x[100],y[100],z[100],f[100],X[100],Y[100];
    cout<<"��������С"<<endl;
    int n;
    cin>>n;
    cout<<"�������A��f"<<endl;
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(i==1)
            cin>>b[i]>>c[i];
        else if(i==n)
            cin>>a[i]>>b[i];
        else
            cin>>a[i]>>b[i]>>c[i];
        cin>>f[i];
    }

    //crout�ֽ�
    for(i=1;i<=n;i++)
    {
        if(i>1)
            y[i]=a[i];
        if(i==1)
            x[i]=b[i];
        else
            x[i]=b[i]-y[i]*z[i-1];
        if(i<n)
            z[i]=c[i]/x[i];
    }
    //��LY=f
    for(i=1;i<=n;i++)
    {
        if(i==1)
            Y[i]=f[i]/x[i];
        else
            Y[i]=(f[i]-y[i]*Y[i-1])/x[i];
    }
    //��UX=Y
    X[n]=Y[n];
    for(i=n-1;i>=1;i--)
    {
        X[i]=Y[i]-y[i]*X[i+1];
    }
    //�����
    cout<<"�������Ϊ(";
    for(i=1;i<=n;i++)
    {
        cout<<X[i]<<",";
    }
    cout<<")T"<<endl;

    return 0;
}
