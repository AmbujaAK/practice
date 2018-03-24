#include<stdio.h>
 
int addNum(int x, int y){
	int sum =0;
	sum = x + y;

	return sum;
}

int main() {
	int a,b,sum;
	int *aPtr,*bPtr;

	printf("\nEnter two numbers :");
	scanf("%d %d",&a,&b);

	sum = addNum(a,b);
	printf("Your sum is : %d",sum);
}
