#include<iostream>
#include<stdio.h>
#include<locale.h>
void task7()
{
	int n, a, c, d, g, f, s,e,w,q,t,y,u,i;
	printf("������� �����");
	scanf_s("%d", &n);
	a = n / 60;
	c = (n - (a * 60)) / 10;
	d = (n - (60 * a)) % 10;
	e= (n - (a * 60)) / 20;
	w= (n - (a * 60)) / 5;
	if (d >= 5) {
		w = w + 1;
		d = 0;
	}

	if (d > 8) {
		c = c + 1;
		d = 0;
	}
	if (w > 2) {
		c = c + 1;
		w = 0;
	}

	
	if (c > 2 ) {
		
		c = 0;
	}
	if (e >= 2) {
		e = 0;
		a = a + 1;
	}
	if (c > 4) {
		a = a + 1;
		c = 0;
	}
	g = a * 440;
	f = c * 125;
	s = d * 15;
	t = w * 70;
	y = e * 230;

	n = g + f + s+t+y;


	printf("%d����� �� 60 �������\n%d����� �� 10 �������\n%d����� �� 1 �������\n%d������� �� 5 \n%d������� �� 20\n%d��\n", a, c, d,w,e, n);



}
void task6()
{
	int n,a,c,d,g,f,s;
	printf("������� �����");
	scanf_s("%d", &n);
	a = n / 60;
	c = (n - (a * 60)) / 10;
	d = (n-(60 * a)) % 10;
	if (d > 8) {
		c = c + 1;
		d = 0;
	}
	if (c > 4) {
		a = a + 1;
		c = 0;
	}
	g = a * 440;
	f = c * 125;
	s = d * 15;
	n = g + f + s;
	

	printf("%d����� �� 60 �������\n%d����� �� 10 �������\n%d����� �� 1 �������\n%d��\n", a, c, d,n);
}
void task5()
{
	int a;
	a = 1 + rand() % 5;
	switch (a)
	{
	case 2:printf("����\n");
		break;
	case 3:printf("�����\n");
		break;
	case 4:printf("������\n");
		break;
	case 5:printf("�������\n");\
		break;
	case 1:printf("-\n");
		break;
		break;
	default:
		break;
	}
}

void task4()
{
	int n;
	printf("������� �����");
	scanf_s("%d", &n);
	if (n == 6 || n==28 || n==496 || n==8128)
	printf("true\n");
	else printf("false\n");



}
void task3()
{
	int a, b, c, d, g, n, f;
	printf("������� �����");
	scanf_s("%d", &n);
	a = n / 10000;
	b = (n % 10000) / 1000;
	c = (n % 1000) / 100;
	d = (n % 100) / 10;
	g = n % 10;
	if (a == g && b == d)
		printf("true\n");
	else printf("false\n");



}
void task2()
{
	int a, b, c, d, g,n,f;
	printf("������� �����");
	scanf_s("%d", &n);
	a = n / 10000;
	b = (n % 10000) /1000 ;
	c = (n % 1000)/100 ;
	d = (n % 100)/10;
	g = n % 10;
	f = (g * 10000) + (d * 1000) + (c * 100) + (b * 10) + a;

	printf("%d\n",f);




}




void task1()
{
	int a, b, c,g;
	int e;
	printf("������� ����� ������");
	scanf_s("%d", &a);
	b = a / 60;
	e = a % 60;
	c = a/ 3600;
	g = (a - (e + (c * 3600))) / 60;
	printf("%d�����\n%d������\n%d�����\n", g, e,c);


}
int main()
{
	setlocale(LC_ALL, "");
	int task;
start:
	printf("������� ����� �������");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		task1();
	}
	break;
	case 2: {
		task2();
	}
			break;
	case 3: {
		task3();
	}
			break;
	case 4: {
		task4();
	}break;
	case 5: {
		task5();
	}break;
	case 6: {
		task6();
	}break;
	case 7: {
		task7();
	}break;		
	default:
		break;
}
goto start;
}