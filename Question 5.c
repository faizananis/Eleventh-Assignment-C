#include <stdio.h>
void nprime(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Prime Numbers you want to print: ");
    scanf("%d",&number);
    printf("\n");
    nprime(number);
    printf("\n");
    return 0;
}
void nprime(int n)
{
    int i=0;
    int j=0;
    int k=0;
    for(i=2;k!=n;i++)
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
            k++;
            printf("%d ",i);
        }
    }
}
