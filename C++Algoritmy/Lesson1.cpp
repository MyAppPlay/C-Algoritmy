#include <stdio.h>
#include <Math.h>
#include <locale.h>

//������� �������� �������� �.�.
const char task1[] = "1. ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h), ��� m - ����� ���� � �����������, h - ���� � ������.";
const char task2[] = "2. ����� ������������ �� ������� �����. ������� �� ������������.";
const char task3[] = "3. �������� ��������� ������ ���������� ���� ������������� ����������.";

void menu();
void solution1();
void solution2();
void solution3();

int main()
{
	char* locate = setlocale(LC_ALL, "");
	int sel = 0;
	do 
	{
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 0:
			printf("����");
			break;

		default:
			printf("������. ��������� ������������ �����.\n");
		}
	} while (sel != 0);	
    return 0;	
}


void menu()
{
	const char instruction[] = "�������� ���������� ����� ������, ������� ������� �� ������ ����������\n";
    printf(instruction);
	
	printf("\n%s\n%s\n%s\n", task1, task2, task3);

	printf("0 - ����� �� �������.");
}

void solution1()
{
	double m, h;
	printf("�������� ��� ��������(��): ");
	scanf("%lf", &m);
	printf("�������� ���� ��������(��): ");
	scanf("%lf", &h);
	printf("%lf\n\n", m / ((h/100) * (h/100)));
	getch();
}

void solution2()
{
	int a, b, c, d;
	printf("�������� ������ ����� ����� ������: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
		int max1 = (a > b) ? a : b;
		int max2 = (c > d) ? c : d;

		if (max1 > max2)
			printf("%d", max1);
		else
			printf("%d", max2);
		getch();
}

void solution3()
{
	int a, b;
	printf("�������� ��� ����� ����� ������: ");
	scanf("%d%d", &a, &b);

	//a. � �������������� ������ ����������.
	int temp;
	temp = a;
	a=b;
	b = temp;
	printf("������ ������� %d %d\n", a, b);
	

	//�. ��� ������������� ������ ����������.
	a = a + b;
	b = a - b;
	a = a - b;
	printf("������ ������� %d %d\n", a, b);

	//����� � ��������� �� �� ����������
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������ ������� %d %d\n", a, b);

	//� �������������� ����������
	int  * pa, * pb;
	pa = &a;
	pb = &b;
	pa = &b;
	pb = &a;
	printf("��������� ������� %d %d\n",*pa, *pb);

	getch();
}
