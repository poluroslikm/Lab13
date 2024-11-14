#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
int lab13task1()
{
	char snew[40] = { 'h','e','l','l','o',' ', }, name[10], voskl[2] = { '!' };
	printf("Enter your name\n");
	scanf("%s", name);
	strcat(snew, name);
	for (int i=0; i<40;i++)
		snew[i]=toupper(snew[i]);
	strcat(snew, voskl);
	char* find = strstr(snew, voskl);
	long p = find - snew;
	for (int i=p; i != 39; i++)
		snew[i]='!';
	printf("%s", snew);
}
int lab13task2()
{
	char snew[20] = { 'h','e','l','l','o',' '}, name[10], space[40];
	printf("Enter your name\n");
	scanf("%s", name);
	strcat(snew, name);
	//printf("%s", snew);
	for (int i = -1; i < 40; i+=2)
	{
		space[i-1] = snew[i/2];
		space[i] = ' ';
	}
	printf("%s!", space);
}
int lab13task3()
{
	char snew[80], point[2] = { '.' };
	printf("Enter your string\n");
	fgets(snew, 80, stdin);
	char* find = strstr(snew, point);
	if (find) 
		printf("Точка найдена\n");
	else
	{
		printf("Точка добавлена\n");
		strcat(snew, point);
		printf("%s", snew);
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Введите номер задания лаборотной\n");
	char p;
	scanf("%c", &p);
	getchar();
	switch (p)
	{
	case '1':
		lab13task1();
		break;
	case '2':
		lab13task2();
		break;
	case '3':
		lab13task3();
		break;
	default:
		printf("Неизвестная операция");
		break;
	}
}