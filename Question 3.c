#include <stdio.h>
int prime(int);
int main()
{
    int number=0;
    int bit=0;
    printf("please Enter a Number: ");
    scanf("%d",&number);
    bit=prime(number);
    if(bit==1)
    {
        printf("\nThe Given Number which is %d is a Prime Number.\n",number);
    }
    else
    {
        printf("\nThe Given Number which is %d is not a Prime Number.\n",number);
    }
    return 0;
}
int prime(int num)
{
    int i=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            break;
    }
    if(i==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
