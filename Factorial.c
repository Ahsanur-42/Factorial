#include<stdio.h>
long fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The Factorial of %d is %ld",n,fact(n));
    return 0;
}