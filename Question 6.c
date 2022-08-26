#include <stdio.h>
void rangeOfprime(int,int);
int main()
{
    int start=0;
    int end=0;
    printf("Please Enter a First Number: ");
    scanf("%d",&start);
    printf("Please Enter a Last Number: ");
    scanf("%d",&end);
    printf("\n");
    rangeOfprime(start,end);
    printf("\n");
    return 0;
}
void rangeOfprime(int f,int l)
{
    int i=0;
    int j=0;
    for(i=f+1;i<l-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",i);
        }
    }
}
