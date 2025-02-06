//Write a program to generate all prime numbers between 1 and N

#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("enter the value of N to generate prime number b/w 1 to N :");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag++;
                break;
            }
        }
        if(flag==1){.
            printf("%d\t",i);
        }
    }
    return 0;
}
