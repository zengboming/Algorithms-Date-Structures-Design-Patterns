#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int a,b,c,days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 char d;
 while(scanf("%d%c%d%c%d",&a,&d,&b,&d,&c)!=EOF)
 {days[1]=28;
  if(a%4==0&&a%100!=0||a%400==0)
     days[1]=29;
 switch(b)
 {
case 1:cout<<c<<endl;break;
case 2:cout<<days[0]+c<<endl;break;
case 3:cout<<days[0]+days[1]+c<<endl;break;
case 4:cout<<days[0]+days[1]+days[2]+c<<endl;break;
case 5:cout<<days[0]+days[1]+days[2]+days[3]+c<<endl;break;
case 6:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+c<<endl;break;
case 7:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+c<<endl;break;
case 8:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+c<<endl;break;
case 9:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+days[7]+c<<endl;break;
case 10:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+days[7]+days[8]+c<<endl;break;
case 11:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+days[7]+days[8]+days[9]+c<<endl;break;
case 12:cout<<days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+days[7]+days[8]+days[9]+days[10]+c<<endl;
 break;
 }
}return 0;
}

