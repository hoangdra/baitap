#include <stdio.h>
#include <conio.h>
#include <string.h>



long tgt(int n)
{
	if (n>0){
		return n*tgt(n-1);
	}else {
		return 1;
	}
}

int main()
{
	int n;
	printf("\n nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("giai thua cua %d la %d \n ",n , tgt(n));
	
}
