#include <stdio.h>

void p(int a, int b)
{
    int sum, diff, product;
    sum=a+b;
    diff=a-b;
    product=a*b;

    //output
    printf("\nSum is %d\nDifferent is %d\nProduct is %d\n",sum,diff,product);
}
int main()
{
    int no1, no2;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&no1,&no2);

    //call function
    p(no1,no2);
}
