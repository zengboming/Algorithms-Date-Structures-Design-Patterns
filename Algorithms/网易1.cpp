/*写一个程序，打印出以下的序列。
(a),(b),(c),(d),(e)........(z)
(a,b),(a,c),(a,d),(a,e)......(a,z),(b,c),(b,d).....(b,z),(c,d).....(y,z)
(a,b,c),(a,b,d)....(a,b,z),(a,c,d)....(x,y,z)
....
(a,b,c,d,.....x,y,z)*/
/*
#include<iostream>

using namespace std;

void func(void)
{
    char *table = new char['z' - 'a' + 1];
    int num;

    for (num = 1; num <= 'z' - 'a' + 1; ++num)
    {
        int cur = 0;
        table[0] = 'a' - 1;

        while (cur >= 0)
        {
            table[cur] += 1;

            if (table[cur] <= 'z')
            {
                if (num - 1 == cur)
                {
                    int i;
                    for (i = 0; i < num; ++i)
                    {
                        cout<<table[i];
                    }
                    cout<<", ";
                }
                else
                {
                    ++cur;
                    table[cur] = table[cur - 1];
                }
            }
            else
            {
                cur -= 1;
            }
        }
        cout<<endl;
    }

    delete[]table;
}

int main()
{
    func();

    return 0;
}
*/

#include<iostream>
#include<cstdio>
using namespace std;

char g_str[26];
 void  SelNum(int start,int end,int index,int cnt)
 {
	 if(index ==(cnt-1))
	 {
		 g_str[index] = start;
		 printf("(%c",g_str[0]);
		 for(int i=1;i<cnt;i++)
			 printf(",%c",g_str[i]);
		 printf("),");
	 }
	 else
	 {
		 for(int i = start;i<=(end-(cnt-index-1));i++)
		 {
			  g_str[index] = i;
			 SelNum(i+1,end,index+1,cnt);
		 }
	 }
 }

int main()
{
	for(int i = 1;i<=26;i++)
	{
		for(char c='a';c<='z';c++)
		{
			SelNum(c,'z',0,i);
		}
		printf("\b \n");
	}
	return 0;
}

