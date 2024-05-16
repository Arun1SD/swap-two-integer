#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);

    printf("\nbefore swap a = %d b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap a = %d b= %d",a,b);

    return 0;
}
