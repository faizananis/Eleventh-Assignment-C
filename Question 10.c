#include <stdio.h>
int series();
int main()
{
    printf("\nThe Total Sum of this 1!/1+2!/2+3!/3+4!/4+5!/5 given Series is: %d\n",series());
    return 0;
}
int series()
{
    int i=0;
    int j=0;
    int sum=0;
    int fact=1;
    for(i=1;i<=5;i++)
    {
        fact=1;
        for(j=i;j!=0;j--)
        {
            fact=fact*j;
        }
        sum=sum+fact/i;
    }
    return sum;
}
