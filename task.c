#include<stdio.h>
int claculator(int no,int a,int b)
{
 
    switch(no)
    {
        case 1:
         printf("enter the a and b:");
    scanf("%d%d",&a,&b);
            printf("%d",a+b);
            break;
        case 2:
         printf("enter the a and b:");
    scanf("%d%d",&a,&b);
            printf("%d",a-b);
            break;
        case 3:
         printf("enter the a and b:");
    scanf("%d%d",&a,&b);
            printf("%d",a*b);
            break;
        case 4:
         printf("enter the a and b:");
    scanf("%d%d",&a,&b);
            printf("%d",a/b);
            break;
        case 5:
              printf("enter the a and b:");
              scanf("%d%d",&a,&b);
              printf("%d",a%b);
            break;
        case 6:
               printf("enter the a and b:");
               scanf("%d%d",&a,&b);
               printf("%d",a%b);
            break;
        default:
            printf("wrong choice");
    }
 }
int main()
{
    int no,a,b;
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for dividation\n");
    printf("press 5 for modulation\n");
    printf("press 0 for exit\n");
    printf("enter the no:");
    scanf("%d",&no);
    
    
    claculator(no,a,b);

}