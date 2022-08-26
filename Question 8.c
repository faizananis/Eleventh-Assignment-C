#include <stdio.h>
void pascal(int);
int ncr(int,int);
int main()
{
    int number=0;
    printf("Please Enter that how many Rows of Pascal Triangle you want to Print: ");
    scanf("%d",&number);
    printf("\n");
    pascal(number);
    return 0;
}
void pascal(int n)
{
    int i=0;
    int j=0;
    int num=0;
    for(i=1;i<=n;i++)
    {
        num=0;
        for(j=1;j<=n*2-1;j++)
        {
            if(j<=n-1+i&&j>=n+1-i)
            {
                if(i%2==j%2&&n%2==1)
                {
                    printf("%d",ncr(i-1,num));
                    num++;
                }
                else if(i%2!=j%2&&n%2==0)
                {
                    printf("%d",ncr(i-1,num));
                    num++;
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int ncr(int n, int r)
{
    int f1=1;
    int f2=1;
    int f3=1;
    int t=n-r;
    while(n!=0)
    {
        f1=f1*n;
        n--;
    }
    while(r!=0)
    {
        f2=f2*r;
        r--;
    }
    while(t!=0)
    {
        f3=f3*t;
        t--;
    }
    return f1/f2/f3;
}

