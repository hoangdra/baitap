#include <stdio.h>

void hello() {
	printf("Hello World!");
}

long tinhgiaithua(int n) {
	int giaithua = 1;
	for(int i = 1; i<=n; i++) {
		giaithua *= i;
	}
	return giaithua;
}

int tinhtong(int a, int b) {
	return a+b;
}

int tinhdtHCN(int cd, int cr) {
	return cd*cr;
}

int kiemtraUSCLN(int a, int b) {
	int i = 0;
	do {
		if(a==b)
			return a;
		else if(a>b)
			a -= b;
		else 
			b -= a;
	}
	while(a!=b);
	
}

int kiemtraSNT(int n) {
	for(int i = 2; i<=n/2; i++)
	if(n%i == 0)
		return 0;
	else 
		return 1;
}

void hoanvi(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int n, tong=0;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
		if((n<0)&& (n<20))
			printf("Nhap lai n < 0 va > 20\n");		
	} while((n<0)&& (n<20));
	
	if (kiemtraSNT(n) == 1)
		printf("%d La so nguyen to!", n);
	else
		printf("%d Khong la so nguyen to!", n);
	
	for(int i = 0; i<=n; i++) {
		tong = tinhtong(tong,i);
	}
	printf("\nTong tu 1 -> %d la:%d", n, tong);
}


