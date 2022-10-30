#include <stdio.h>
void Nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
   {
     printf("\na[%d] = ",i);
     scanf("%d",&a[i]);
   }
}
void Xuat(int a[], int n)
{
		printf("\nMang vua nhap :\n");
  	  	for(int j=0;j<n;j++)
			printf("%5d",a[j]);
}
void gtln(int a[], int n)
{
	 { int max=0, i;
  	  for(int i=0;i<n;i++)
     	if(a[i]>=max)
     	max=a[i];
        printf("\n phan tu lon nhat %d",max);
    }
}    
int tich(int a[], int n)
{
	int t=1;
  	  	for(int i=1;i<n;i++)
		t*=a[i];
		return t;
		
}
bool ktnt(int a)	
{
	  int dem=0;
 	    for(int i=1;i<=a;i++)
 	      { 
 	          if(a%i==0)
 	           dem++;
 	    	}
 	         if(dem==2)
			return 1;
			else return 0;	
	 }

void snt(int a[], int n)
{
	for(int i=0; i<n ; i++)
		{
			 if (ktnt(a[i])==1)
			  printf("\n%d la so nguyen to",a[i]);
 	          else
 	          printf("\n%d khong phai la so nguyen to ",a[i]);
		}
}
void tongsnt(int a[], int n)
{
	int s=0;
	for(int i=0; i<n ; i++)
		{
			 if (ktnt(a[i])==1)
				s+=a[i];	 
		}
	 printf("\nTong cac so nguyen to la %d",s);
}
void gtbx(int a[], int n)
  {
  	int x;
     printf("\n nhap gtri x");
     scanf("%d",&x);
      {
	    for(int i=0; i<n ; i++)
       if(a[i]==x)
       printf("\n GIA TRI BANG X %d",a[i]);
       else
       printf("\n khong co gtri bang x",a[i]);
 	  }
  }
int main()
{
	int a[100],n;
	printf("\nNhap so phan tu cua mang : ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	gtln(a,n);
	printf("\nTich cac phan tu cua mang la : %d",tich(a,n));
	snt(a,n);
	tongsnt(a,n);
	gtbx(a,n);
	return 0;
}
