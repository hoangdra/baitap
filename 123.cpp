#include <stdio.h>
void input(int a[], int n);
void output(int a[], int n);
void swap(int &a,int &b);
void heap(int a[], int n);
void quick_sort(int a[], int l, int r);
int main()
{
	int a[100], n;
	printf("nhap so pt n= ");
	scanf("%d",&n);
	input(a,n);
	printf("\n\n gia tri vua nhap: \n ");
	output(a,n);
	printf("\n\n gia tri sx:\n");
	heap(a,n);
//	output(a,n);
	quick_sort(a,0,n-1);
	output(a,n);
}


void input(int a[], int n)
{
	for(int i=0;i<n;i++){
	
	printf("nhap gia tri a[%d]=",i);
	scanf("%d",&a[i]);
}
}


void output(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("  %d  ",a[i]);
	}
}

void swap(int &a, int &b)
{
	int t=a;
		a=b;
		b=t;
}

void heapify(int a[], int n, int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if((left<n)  &&  (a[largest]  <  a[left]))
		largest = left;
	if((right<n)  &&  (a[largest]  <  a[right]))
		largest=right;
	if(largest !=i)
	{
		swap(a[i],a[largest]);
		heapify(a,n,largest);
	}
}
void heap(int a[], int n)		
{
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
		{
			swap(a[0],a[i]);
			heapify(a,i,0);
		}	
	
	
}

void quick_sort(int a[], int l, int r)
{
	if(l>r)
		return;
	int i = l;
	int j = r;	
	int key=(l+r)/2;
	do{
		while(a[i]<a[key])
		i++;
		while(a[j] > a[key])
		j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<j);
quick_sort(a,l,j);
quick_sort(a,i,r);

}



































