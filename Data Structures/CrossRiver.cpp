#include<iostream>
#include<queue>
using namespace std;

queue<char> q;
queue<int> qc;
queue<int> qt;

void CrossRiver()
{
    int num=0,numc=0;
    while(num<10)
    {
        if(!qc.empty()&&numc<4)
        {
            qc.pop();
            q.push('c');
            numc++;
            num++;
        }
        else if(numc==4&&!qt.empty())
        {
            qt.pop();
            q.push('t');
            num++;
            numc=0;
        }
        else
        {
            while(num<10&&numc<4&&!qt.empty())
            {
                qt.pop();
                q.push('t');
                num++;
                numc++;
            }
            numc=0;
        }
        if(qc.empty()&&qt.empty())
        {
            num=11;
        }
    }

}

int main()
{
    qc.push('c');
    qc.push('c');
    qc.push('c');

    qt.push('t');
    qt.push('t');
    qt.push('t');
    qt.push('t');
    qt.push('t');

    CrossRiver();

    return 0;
}
