#include <stdio.h>
void nhapmang(int a[10], int n);
void xuatmang(int a[10], int n);
void giatriln(int a[10], int n);
void tinhtich(int a[10], int n);
void ktnt(int a[10], int n);
int main()
{
int a[10], n;
printf("nhap so ptu cua mang n=");
scanf("%d",&n);
nhapmang(a,n);
xuatmang(a,n);
giatriln(a,n);
tinhtich(a,n);
ktnt(a,n);
return 0; 
}

void nhapmang(int a[10], int n)
{
	for(int i=0;i<n;i++)

   {

     printf("\n nhap so ptu cua mang la a[%d]= ",i);
     scanf("%d",&a[i]);
   }
}

void xuatmang(int a[10], int n)
{
  	printf("\n cac ptu cua mang:");
  	  	  for(int j=0;j<n;j++)
		printf("%d   ;    ",a[j]);
}

void giatriln(int a[10], int n)
  { int max=0, i;
  	for(int i=0;i<n;i++)
  	if(a[i]>=max)
  	max=a[i];
     printf("\n phan tu lon nhat %d",max);
  }
void tinhtich(int a[10], int n)
{ int tich=1 ;
   for(int i=0;i<n;i++)
   {
   	   tich=tich*a[i];
   }
   printf("\n tich cach ptu la %d",tich);
}

void ktnt(int a[10], int n)
 	{
	  int dem=0;
 	    for(int i=1;i<=n;i++)
 	      { 
 	          if(n%i==0)
 	           dem++;
 	    	}
 	         if(dem==2)
			   printf("\n%d la so nguyen to",n);
 	          else
 	          printf("\n %d khong phai la so nguyen to ",n);
	 }


