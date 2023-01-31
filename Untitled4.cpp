#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct
{
	char ma[50];
	char hoten[50];
	//float diemtb;
}sinhvien;
 void docfile(char *filename);
 void vietfile(char *filename);
 void tim(char *filename);
 int main()
 {
 
 int c;
 for(;;)
 	{
 	printf("\n \t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
 	printf("\t 1. nhap dssv\n");
 	printf("\t 2. in danh sach sinh vien\n");
 	printf("\t 3.tim kiem\n");
 	printf("\t 4.thoat\n");
	 scanf("%d",&c);
	 fflush(stdin);
	 if(c==1)
	 {
	 	vietfile("sinhvien.txt");
	 }	
	 else if(c==2)
	 {
	 	docfile("sinhvien.txt");
	 }
	 else if(c==3)
	 {
	 	tim("sinhvien.txt");
	 }
	 else break;
	 
	}
 }
 
 void vietfile(char *filename)
 {
 	FILE *f;
 	int n,i;
 	sinhvien sv;
 	f=fopen(filename,"ab");
 	printf("nhap so luong sinh vien");
 	scanf("%d",&n);
 }
 
 
 
 
 
 
 
 
 
 
 
