#include <stdio.h>
#include <conio.h>

void nhap (int a[100][100], int m, int n)
{

    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("\nNhap a[%d][%d]=",i,j); scanf("%d",&a[i][j]);
		}
	 }
}




void xuat (int a[100][100], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("   %d   ",a[i][j]);
		   
		}
		printf("\n\n");
	 }
}


void max (int a[100][100],int m,int n)
{
    int tam=0,x,y;
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]>=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\nPhan tu lon nhat trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}


void min (int a[100][100],int m,int n)
{
    int tam,x,y;
    tam=a[0][0];
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]<=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\nPhan tu nho nhat trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}


int dem(int n)
{
	int demm=0;
    for(int i=1;i<=n;i++)
    {
	   if (n%i==0) demm++;
	}
	return demm;
}

void snt (int a[100][100],int m,int n)
{
     int x=0,tong=0;
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if(dem(a[i][j])==2) 
		   {
		     printf("\nGia tri %d cua phan tu a[%d][%d] la so nguyen to\n",a[i][j],i,j);
		     tong = tong + a[i][j];
		     x++;
		   }
		}
	 }
	 if (x==0) printf("\nKhong co gia tri nao trong ma tran a la so nguyen to");
	 else      printf("\nVay co %d gia tri trong mang a la so nguyen to va tong cua chung bang : %d",x,tong);  
}





void timx (int a[100][100],int m, int n)
{
     int x,y=0;
     printf("\n\nNhap gia tri cho X="); scanf("%d",&x);
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if (a[i][j] == x) 
		   {
		      printf("\n\nGia tri X xuat hien tren ma tran tai vi tri a[%d][%d]",i,j);
		      y++;
		   }
		}
	 }
	 if (y==0) printf ("\n\nGia tri cua X khong xuat hien trong ma tran a !");
}


void yenngua (int a[100][100],int m, int n)
{
	 int x,y,max;
	 int dem=0,demm=0;
     for (int k=0;k<m;k++)
     {
     	max=a[k][0];
	    for(int i=0;i<n;i++)
        {
	       if ( a[k][i]<=max) 
	       {
		           max = a[k][i];
		           x=i;
		   }
		}
		for (int j=0;j<m;j++)
		{
		   if (max < a[j][x]) 
		    {
			  dem++;
			}
		}
	    if (dem==0)
			  {    printf ("\n\nPhan tu a[%d][%d] la YEN NGUA !",k,x);
			       demm++;
		      }
	    dem=0;
	 } 
	 if (demm==0) printf("\n\nKhong co gia tri nao la YEN NGUA trong ma tran a !");
}


void sx (int a[100][100],int m,int n)
{
	int tam,tamm;
    for(int i=0;i<n;i++)
    {
	   for(int j=0;j<m-1;j++)
	   {
	      for(int k=j+1;k<m;k++)
	      {
		     if (a[j][i]>a[k][i])
		     { 
		        tam=a[j][i];
		        a[j][i]=a[k][i];
		        a[k][i]= tam;
			 }
		  }
		
	   }
	}
	for(int l=0;l<m;l++)
    {
	   for(int p=0;p<n-1;p++)
	   {
	      for(int q=p+1;q<n;q++)
	      {
		     if (a[l][p]>a[l][q])
		     { 
		        tamm=a[l][p];
		        a[l][p]=a[l][q];
		        a[l][q]= tamm;
			 }
		  }
		
	   }
	}
	printf("\n\nMang sau khi sap xep la : \n\n");
	for(int r=0;r<m;r++)
     {
	    for(int s=0;s<n;s++)
	    {
		   printf("  %d  ",a[r][s]);
		}
		printf("\n\n");
	 }  
	 
}


void tong(int a[100][100],int m,int n)
{
	 int x=0;
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{  
		   if (i==j) x=x+a[i][j]; 		
	 	}
	 }
	 printf("\n\nTong cac phan tu nam tren duong cheo chinh cua ma tran a = %d",x);
}



void chan(int a[100][100],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (i==j) 
		   {
		   	  for(int k=j+1;k<n;k++)
		   	  {
		   	  	 if (a[i][k]%2==0) dem++;
		   	  }
		   }
		}
    }
    if (dem==0) printf("\n\nKhong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a !");
    else        printf("\n\nCo %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a ma khong ke duong cheo chinh !",dem);
}


void le(int a[100][100],int m,int n)
{
	printf("\n\nCac so le nam trong tam giac duoi cua duong cheo phu :");
	printf("\n\n");
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (j+i==n-1)
		   {
		       for(int k=j;k<n;k++)
		   	   {
		   	   	  if (a[i][k]%2==1) 
		   	   	  {
		   	   	  	 printf("  %d  ",a[i][k]);
		   	   	  }
		   	   	  
			   }
		   }
	    }
    }
}
void tich(int a[100][100],int b[100][100])
{
   	 printf("\n\nXay Dung ma tran a va b :");
	 int m,n,tich=1,tong=0;
	 printf("\n\nNhap so cot cho  ma tran a va b = "); scanf("%d",&m);
	 printf("\n\nNhap so dong cho  ma tran a va b = "); scanf("%d",&n);
	 printf("\n\nXay Dung ma tran A:");
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 	   	printf("\n\nA[%d][%d]=",i,j); scanf("%d",&a[i][j]);
		} 
	 }
	 printf("\n\nXay Dung ma tran b:");
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 	   	printf("\n\nb[%d][%d]=",i,j); scanf("%d",&b[i][j]);
		} 
	 }
	 printf("\n\nMa tran a:\n\n");
 	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 	   	printf(" %d ",a[i][j]);
		}
		printf("\n\n");
     }
	 printf("\n\nMa tran b:\n\n");
 	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 	   	printf(" %d ",b[i][j]);
		} 
		printf("\n\n");
     }
	 
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 	   tong=tong+a[i][j]+b[i][j];
	 	   tich=tich*a[i][j]*b[i][j];
	 	}
	 }
	 printf("\n\nTong cac phan tu cua ma tran A va B = %d",tong);
     printf("\n\nTich cac phan tu cua ma tran A va B = %d",tich);

}




int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int m,n; 
    printf("Nhap so dong cho mang n="); scanf("%d",&m);
    while (m<0||m>100)
    {
    	printf("\nNhap so qua lon! nhap so dong"); scanf("%d",&m);
    }
    printf("\nNhap so cot cho mang: "); scanf("%d",&n);
    while (n<0||n>100)
    {
    	printf("\nNhap so qua lon! Nhap lai  cot cho mang:"); scanf("%d",&n);
    }
    
    nhap(a,m,n);
    xuat(a,m,n);
    max(a,m,n);
    min(a,m,n);
    snt(a,m,n);
    timx(a,m,n);
    yenngua(a,m,n);
    sx(a,m,n);
    tong(a,m,n);
    chan(a,m,n);
    le(a,m,n);
    tich(a,b);
}







