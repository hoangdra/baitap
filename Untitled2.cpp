#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
FILE*fp;
char filename[50], c;
printf("ten file :  ");
gets(filename);
if ((fp = fopen (filename, "r"))==NULL )// mo tep tin de ghi
{printf("mo ko thanh cong\n");
exit(1);
}
while((c=getc(fp))  !=EOF )
printf("%c",c);
fclose (fp);
return 0;
}
