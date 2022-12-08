#include <stdio.h>

int main() {
    int num,i,count=0;
    printf("enter number to check prime number or not\n");
    scanf("%d",&num);
     for(i=2;i<=num/2;i++)
    {
       if(num%i==0)
            {
              count=1;
            break;
            }
    }
       if(count==0)
              printf("%d is a prime number",num);
        else
        {
            printf("%d is not a prime number",num);
        }
