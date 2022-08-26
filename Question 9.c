#include <stdio.h>
float square(float);
int main()
{
    float number=0;
    printf("Please Enter a Number to print its Square: ");
    scanf("%f",&number);
    printf("\nThe Square of the given Number %f is: %f\n",number,square(number));
    return 0;
}
float square(float n)
{
    return n*n;
}
