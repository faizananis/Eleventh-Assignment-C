#include <stdio.h>
int lcm(int,int);
int main()
{
    int num1=0;
    int num2=0;
    int result=0;
    printf("Please Enter a First Number: ");
    scanf("%d",&num1);
    printf("Please Enter a Second Number: ");
    scanf("%d",&num2);
    result=lcm(num1,num2);
    printf("\nThe LCM of given two Numbers which are %d and %d is: %d\n",num1,num2,result);
    return 0;
}
int lcm(int num1, int num2)
{
    int i=2;
    int a=num1;
    int b=num2;
    int multi=1;
    do
    {
        if(num1%i==0&&num2%i==0)
        {
            num1=num1/i;
            num2=num2/i;
            multi=multi*i;
        }
        else if(num1%i==0)
        {
            num1=num1/i;
            multi=multi*i;
        }
        else if(num2%i==0)
        {
            num2=num2/i;
            multi=multi*i;
        }
        else
        {
            i++;
        }
    }
    while(i<=a||i<=b);
    return multi;
}
