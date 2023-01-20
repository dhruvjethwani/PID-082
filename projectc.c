#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void intro();
void check();
void login();
void convert();
void insert();
void intro()
{
	printf("     	\t\t\tHELLO THERE! WELCOME TO SPEECH TO TEXT CONVERTER\n");
	printf("	 	\t\t\tESFP Project By- Dhruv Jethwani\n");
	printf("		\t\t\tEnr No.- 22162171008\n");
	printf("\t\t***********************************************************************");
}
void check()
{
	char user[4];
	int value,upwd, pwd=3825633;
	printf("\nUsername: ");
	scanf("%s",&user);
	printf("Password: ");
	scanf("%d",&upwd);
	value=strcmp(user,"dhruv");
	if(value==0 && upwd==pwd)
	{
		printf("\nLogin Successfull!\n");
		printf("*********************************************************************");
		login();
	}
	else
	{
		return 0;
	}
}
void login()
{
	FILE *p;
	p=fopen("F:\\Filehandling prog.s of c\\12.txt","w");
	char n[30],s[20],c[20],mob[10];
	printf("\nName:\t");
	fflush(stdin);
	gets(n);		
	printf("State:\t");
	scanf("%s",&s);
	printf("City:\t");
	scanf("%s",&c);
	printf("Mobile No.:\t");
	scanf("%s",&mob);
	printf("\nDetails Entered Successfully!\n");
	fprintf(p,"%s %s %s %s",n,s,c,mob);
	printf("Record Entered!\n");
	printf("*********************************************************************\n");
	fclose(p);
}
void insert()
{
	FILE *d;
	char ch,n[30],s[20],c[20],mob[10];
	d=fopen("F:\\Filehandling prog.s of c\\12.txt","r");
	printf("The Record Entered- ");
	while((ch=getc(d))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(d);
	printf("*********************************************************************\n");
}
void convert()
{
	float l;
	char txt[10000];
	printf("Enter the length of audio to be converted to text:");
	scanf("%f",&l);
	printf("Now enter the text- ");
	fflush(stdin);
	gets(txt);
	printf("Text Entered- \n%s",txt);
}
void main()
{
	intro();
	check();
	insert();
	convert();
}
