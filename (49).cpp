#include<stdio.h>
#include<conio.h>
int fibo(int);
int main(){
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    printf("\n Fibonaccci numbers up to %d terms:\n",n);
    for ( i=0; i<=n; i++)
    printf("%d\t",fibo(i));
    getch();

    
}
int fibo(int n)
{
    if(n==0)
    return 0;
    if (n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
