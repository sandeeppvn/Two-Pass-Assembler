#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,i,x,sum=0;
    printf("Enter number of elements");
    scanf("%d",&n);

     printf("\nEnter value of x");
     scanf("%d",&x);

    int a[n];

    printf("\nEnter the variables of a");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=a[i]*pow(x,i);
    }

    printf("\n %d",sum);
}

