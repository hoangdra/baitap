#include <stdio.h>
void nhap(int a[], int n);
void output(int a[], int n);
void insertionSort(int a[], int n);



int main()
{
	int a[100], n;
	printf("nhap n=");
	scanf("%d",&n);
	nhap(a,n);
	printf("cac pt vua nhap");
	output(a,n);
    insertionSort(a, n);
    printf("\n cac pt da sap xep: \n");
    	output(a,n);
 
    return 0;
}

void insertionSort(int a[], int n)
{
   int i, k, j;
   for (i = 1; i < n; i++)
   {
       k = a[i];
       j = i-1;
       while (j >= 0 && a[j] > k)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = k;
   }
}

void nhap(int a[],int n)
{

	
	for(int i=0 ; i<n ; i++)
	   {
	   	  printf("\nNhap a[%d]= ", i);
	   	  scanf("%d",&a[i]);
	   }
}
void output(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("   %d ",a[i]);
	}
}
