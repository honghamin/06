#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r);
int main(void){
	
	int n,r;
	
	printf("enter the n: ");
	scanf("%d", &n);
	
	printf("enter the r: ");
	scanf("%d", &r);
	
	printf("the result is %d", combination(n,r));
	
}

int factorial(int n){
	int i;
	int res=1;
	for(i=1;i<n;i++)
	    res=res*i;
	return res;
}


int combination(int n, int r)
{
	return (factorial(n)/(factorial(n-r)*factorial(r)));
	
}

