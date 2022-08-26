#include <stdio.h>
void fibonacci(int);
int main()
{
    int number=0;;
    printf("Please Enter that how many Fibonacci Numbers you want to print on the Screen: ");
    scanf("%d",&number);
    printf("\n");
    fibonacci(number);
    printf("\n");
    return 0;
}
void fibonacci(int n)
{
    int a=-1;
    int b=1;
    int c=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
