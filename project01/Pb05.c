#include<stdio.h>
int main()
{
    printf("Name:Mahbubul Islam\n\n");
       int n, i, count = 0;

    printf("Enter a number:");
    scanf("%d",&n);
    i=2;
    while( i<=n/2)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
    if (count==0)
        printf("prime",n);
    else
        printf("Non",n);

        printf("\n\n");
        printf("ID:20234103099\n\n");
        return 0;
}
