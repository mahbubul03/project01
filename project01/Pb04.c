#include <stdio.h>

int main()
{
    printf("Name:Mahbubul Islam\n\n");
    int l,m;

    printf("Enter a Number:");
    scanf("%d",&m);

    printf("First natural numbers in reverse order:",m);

    for(l = m; l > 0; l--) {
        printf("%d", l);
    }
    printf("\n\n");
    printf("ID:20234103099\n");

    return 0;
}
