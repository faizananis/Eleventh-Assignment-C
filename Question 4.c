#include <stdio.h>
int nextPrime(int);
int main()
{
    int number=0;
    int next=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    next=nextPrime(number);
    printf("\nThe Next Prime Number of a Given Number %d is: %d\n",number,next);
    return 0;
}
int nextPrime(int num)
{
    int i=0;
    int j=0;
    for(i=num+1; ;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            return i;
        }
    }
}
