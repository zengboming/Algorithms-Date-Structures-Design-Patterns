using namespace std;
int canArrangeWords(int num,char** arr){
    // WRITE YOUR CODE HERE
    char fword[num];
    char eword[num];
    for(int i=0;i<num;i++)
    {
        int len=strlen(arr[i]);
        fword[i]=arr[i][0];
        eword[i]=arr[i][len-1];
    }
    for(int i=0;i<num;i++)
    {

        int j=0;
        for(j;j<num;j++)
        {

        }
    }

}
