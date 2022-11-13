#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct SinhVien
{
	char Masv[10];
	char HoTensv[50];
	char gioitinh[10];
	int namsinh;
	char nganhhc[30];
	float kqcuoikhoa;
	char xeploai[20];
	char quequan[30];
};
typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void sapxep(SINHVIEN a[], int n);
void nhapsv(SINHVIEN &x);
void nhapsvN(SINHVIEN a[], int n);
void xuatsv(SINHVIEN);
void xuatsvN(SINHVIEN a[], int n);
int main()
{ int n;
	SINHVIEN x, a[10];
	printf("\n\n nhap so sinh vien:");
	scanf("%d",&n);
	nhapsvN(a,n);
	xuatsvN(a,n);
	printf("\n\n\n an phim bat ki de in danh sach sap xep");
    getch();
    sapxep(a,n); 
}

void nhapsv(SINHVIEN &x)
{
     	fflush(stdin);
	printf("\n nhap masv: ");
	gets(x.Masv); //scanf("%d",masv);
    	fflush(stdin);
	printf("\nnhap ho ten: ");
	gets(x.HoTensv);
	    fflush(stdin);
	printf("\n nhap phai:");
	gets(x.gioitinh);
		fflush(stdin);
	printf("\nnhap nganh hoc:");
	gets(x.nganhhc);
		fflush(stdin);
	printf("\nnhap que quan:");
	gets(x.quequan);
	
	
	
	do
	{
		printf("\n nhap nam sinh");
		scanf("%d",&x.namsinh);
	}while(x.namsinh<1980||x.namsinh>2004);
	do
	{
		printf("\n nhap kq cuoi khoa");
		scanf("%d",x.kqcuoikhoa);
	}while(x.kqcuoikhoa<0 || x.kqcuoikhoa>4);
	
  fflush(stdin);
	if(x.kqcuoikhoa<=1.5)
	   {
	   	strcpy(x.xeploai,"yeu");
	   }	
	else 
	       if(x.kqcuoikhoa<=2.5)
				{
				strcpy(x.xeploai,"trung_binh");
                }
                else
                	 if(x.kqcuoikhoa<=3)
			     	{
			        	strcpy(x.xeploai,"kha");
			         }
			         		  else
                	           if(x.kqcuoikhoa<=3.8)
			     	             {
			        	            strcpy(x.xeploai,"gioi");
			                      }
			                      	else
			                      	{
			                      	     strcpy(x.xeploai,"xuat sac");
			                        }
}
void nhapsvN(SINHVIEN a[], int n)
{ 
  	for(int i=0;i<n;i++)
  	{
  		printf("\n nhap sv thu %d",i+1);
  		nhapsv(a[i]);
  	}
}
 
void xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s|",x.Masv	,x.HoTensv,x.gioitinh,x.namsinh,x.nganhhc,x.kqcuoikhoa,x.quequan);
	
}
void xuatsvN(SINHVIEN a[], int n)
{
	system("cls");
	printf("\n\n|-----------------------------------------------------------------------------------------\n");
	    printf("|ma sv| ho va ten sinh vien| phai| nam sinh| nganh hoc |kq cuoi khoa |xep loai| que quan| ");
	    for(int i=0;i<n;i++)
	    {
	    	printf("\n|--------------------------------------------------------------------------------------\n");
	    	xuatsv(a[i]);
	    }
}

void sapxep(SINHVIEN a[], int n)
{ 
  	SINHVIEN tmp;
  	for(int i=0;i<n;i++)
  	{
  		for(int j=i+1; j<n;j++)
  		{
  			if(a[i].kqcuoikhoa>a[j].kqcuoikhoa)
  			{
  				tmp=a[i];
  				a[i]=a[j];
  				a[j]=tmp;
  			}
  		}
  	}
}
void  INGX(SINHVIEN a[], int n)
{
	system("cls");
	printf("\n\n|-----------------------------------------------------------------------------------------\n");
	    printf("|ma sv| ho va ten sinh vien| phai| nam sinh| nganh hoc |kq cuoi khoa |xep loai| que quan| ");
	    for(int i=0;i<n;i++)
	    {
	    	printf("\n|--------------------------------------------------------------------------------------\n");
	    	xuatsv(a[i]);
	    }
}

void TIMSV(SINHVIEN a[], int n)
{ system("cls");
  fflush(stdin);
  char matim[10];
  printf("\n nhap ma sinh vien can tim : ");
  gets(matim);
  
  
  	printf("\n\n|-----------------------------------------------------------------------------------------\n");
	    printf("|ma sv| ho va ten sinh vien| phai| nam sinh| nganh hoc |kq cuoi khoa |xep loai| que quan| ");
	    for(int i=0;i<n;i++)
	    {
	    	if(strcmp(a[i].Masv,matim)==0)
	    
	     {
	    	printf("\n|--------------------------------------------------------------------------------------\n");
	    	xuatsv(a[i]);
	     } 
	    }
}

