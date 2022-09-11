#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{ 
	int n, i;
    int a;
    printf("Enter the lower element :\n"); 
    scanf("%d",&a); 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("Fibonacci series is : \n");
	for(i=0;i<n;i++) { 
        if(i>=a)
		    printf("%d ",fibonacci(i));
	}
	getch();
    return 0;
}
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 