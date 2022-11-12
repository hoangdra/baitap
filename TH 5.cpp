# include<stdio.h>
# include<conio.h>
# include<string.h>
# include<ctype.h>
 int xoa(char s[50],int vitrixoa);
 int xoakitu(char s[50]);
 int chuanhoachuoi(char s[50]);
 int diemsotu(char s[50]);
 int diemkitu(char s[50]);
 
void ghep(char s[50], char s2[50]);
int main()
{
	char s[50], s2[50];
	printf("\n Nhap chuoi s :");
	gets(s);
	chuanhoachuoi(s);
	printf("\n Chuoi da chuan hoa la :");
	puts(s);
	diemsotu(s);
	diemkitu(s);
	ghep(s,s2);
	
}
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';	
}
int xoakitu(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,1);
		i--;
	}
	if(s[0]==' ')
	 xoa(s,0);
	 if(s[strlen(s)-1]==' ')
	  xoa(s,strlen(s)-1);
}
int chuanhoachuoi(char s[50])
{
	int i=0;
	 strlwr(s);
	 xoakitu(s);
	 s[0]=s[0]-32;
	 for(int i=0;i<strlen(s);i++)
	 { 
	   if(s[i]==' '&& s[i+1]!=' ')
	   s[i+1]=s[i+1]-32;
	 }	
}
int diemsotu(char s[50])
{ int diemsotu=1;
  strlwr(s);
  for(int i=0;i<strlen(s);i++)
  {
  	if(s[i]==' ')
  	diemsotu++;
  }
   printf("\n so tu %d",diemsotu);
}
int diemkitu(char s[50])
{
	int diemkitu=0;
	char c,c1;
	 printf("\n Nhap mot ki tu:= ");
	 scanf("%c",&c);
	 fflush(stdin);
	 strupr(s);
	 for (int i=0;i<strlen(s);i++)
	 {
	 	if(s[i]==toupper(c))
	 	diemkitu++; 
	 }
	printf("so ki tu %d",diemkitu);
}
void ghep(char s[50],char s2[50])
{
	int i,j,size,size1,size2;
	fflush(stdin);
	printf("\n nhap chuoi s2=");
	gets(s2);
	chuanhoachuoi(s2);
	size1=strlen(s);
	size2=strlen(s);
	size=size1+ size2;
	j=0;
	for (i = size1;i<size;i++)
	{
		s[i]=s2[j];
		j++;
	}
	s[i]='\0';
	printf("ket qua khi noi chuoi la:\n");
	printf("%s",s);	
}
	
