/*第3小的数*/
#include<iostream>
using namespace std;
const int MAX=999;
void func(int data[],int num)
{
    int thi_min=MAX;
    int sec_min=MAX;
    int min=data[0];
    for(int i=0;i<num;i++)
    {
        if(data[i]<min)
        {
            thi_min=sec_min;
            sec_min=min;
            min=data[i];
        }
        else
        {
            if(data[i]<sec_min)
            {
                thi_min=sec_min;
                sec_min=data[i];
            }
            else
            {
                if(data[i]<thi_min)
                {
                    thi_min=data[i];
                }
            }
        }
    }
    cout<<thi_min<<endl;
}

int main()
{
    int data[]={-1,2,6,4,-1,4,9,34,27,75,25,643,-55};
    int num=13;
    func(data,num);
    return 0;
}
