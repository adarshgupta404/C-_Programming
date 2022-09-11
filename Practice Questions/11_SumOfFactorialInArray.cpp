#include<stdio.h>

int factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}

int sumFactorial(int *arr, int n)
{

	int s = 0,i;
	for (i = 0; i < n; i++)
	{

		s = s + factorial(arr[i]);
	}
	return s;
}
int main()
{
    int arr[100];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
	int a = sumFactorial(arr, n);
    printf("Sum of Factorial is %d", a);
	return 0;
}
