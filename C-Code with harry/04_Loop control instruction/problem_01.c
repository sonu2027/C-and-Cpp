//1.Write a program to print the multiplication table of a given
// number n.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number n\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}