#include <stdio.h>
int hcf(int,int);
int main()
{
    int num1=0;
    int num2=0;
    int result=0;
    printf("please Enter a First Number: ");
    scanf("%d",&num1);
    printf("Please Enter a Second Number: ");
    scanf("%d",&num2);
    result=hcf(num1,num2);
    printf("\nThe HCF of given two Numbers which are %d and %d is: %d\n",num1,num2,result);
    return 0;
}
int hcf(int num1, int num2)
{
    int a=num1;
    int b=num2;
    int factor=0;
    int i=0;
    for(i=1;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            factor=i;
        }
    }
    return factor;
}
