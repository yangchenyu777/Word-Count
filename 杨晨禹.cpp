#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch,address[100];
	int i,a,b,c,n;
	i=a=b=c=n=0;
    printf("�ļ�����");
	scanf("%s",address);
	fp=fopen(address,"r");
	if(fp==NULL)
	{
		printf("can not open the file\n");
		exit(0);
	}
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	rewind(fp);
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		i++;   
		if(ch==' ')     
			a++;
		ch=fgetc(fp);     
		
	}rewind(fp);
   ch=fgetc(fp);
   if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')    
	   b++;
    while (ch!=EOF)
	{
		if(!(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')) 
		{	ch=fgetc(fp);
		    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
				b++;
		}
		else ch=fgetc(fp);
	}
	rewind(fp);
   ch=fgetc(fp);
    while (ch!=EOF)
	{
		if(ch=='\n')				
		{
			ch=fgetc(fp);
			while(ch==' ')	
			{   
				ch=fgetc(fp);
				if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z');
			}
		}
		else ch=fgetc(fp);
	}
	fclose(fp);
printf("�ո���%d�����ַ���%d����������%d��,������%d��",a,i,b,c+1);   
}

