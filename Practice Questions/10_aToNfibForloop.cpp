#include<stdio.h>
#include<conio.h>
int main()
{
int n,a;
printf("Enter lower bound : ");
scanf("%d",&a);
printf("Enter upper bound : ");
scanf("%d",&n);
int n1=0;
int n2=1;
int n3=0;
      for (int i=1; i<=n; i++)
      {
        if (i>=a)
            printf("%d ", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
      }


getch();
return 0;    
}