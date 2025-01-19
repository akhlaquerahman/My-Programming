#include<stdio.h>

int main()
{
    char choice;
    int a,b;
    printf("enter your choice ");
    scanf("%c",&choice);
    printf("enter two integer");
    scanf("%d%d",&a,&b);

    switch (choice)
    {
        case '+':
        printf("sum:=%d",a+b);
        break;

        case '-':
        printf("sub:=%d",a-b);
        break;

        case '*':
        printf("mul:=%d",a*b);
        break;

        case '/':
        printf("div:=%d",a/b);
        break;

        default:
        printf("invalid choice");
        break;
    }
    return 0;
}
