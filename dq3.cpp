#include <stdio.h>
#include <conio.h>
#include <string.h>


int tn(int n);


int main()
{

int i, n, ttn;
printf("nhap so nguyen duong:  ");
scanf("%d",&n);
ttn=tn(n);
printf("\n tong cac so tu 1 den %d la %d ", n, ttn);
return 0;
}
int tn(int n)
{
	int tt;
	if (n==1){
		return 1;
	}else {
		tt =n +tn(n-1);
		
	}
	return tt;
}
