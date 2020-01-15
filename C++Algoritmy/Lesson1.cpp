#include <stdio.h>
#include <Math.h>
#include <locale.h>

//Задание выполнил Гаврилов В.А.
const char task1[] = "1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h), где m - масса тела в килограммах, h - рост в метрах.";
const char task2[] = "2. Найти максимальное из четырех чисел. Массивы не использовать.";
const char task3[] = "3. Написать программу обмена значениями двух целочисленных переменных.";

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
			printf("Пока");
			break;

		default:
			printf("Ошибка. Проверьте правильность ввода.\n");
		}
	} while (sel != 0);	
    return 0;	
}


void menu()
{
	const char instruction[] = "Выберите пожалуйста номер задачи, решение которой вы хотите посмотреть\n";
    printf(instruction);
	
	printf("\n%s\n%s\n%s\n", task1, task2, task3);

	printf("0 - Выход из консоли.");
}

void solution1()
{
	double m, h;
	printf("Напишите вес человека(кг): ");
	scanf("%lf", &m);
	printf("Напишите рост человека(см): ");
	scanf("%lf", &h);
	printf("%lf\n\n", m / ((h/100) * (h/100)));
	getch();
}

void solution2()
{
	int a, b, c, d;
	printf("Напишите четыре числа через пробел: ");
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
	printf("Напишите два числа через пробел: ");
	scanf("%d%d", &a, &b);

	//a. С использованием третей переменной.
	int temp;
	temp = a;
	a=b;
	b = temp;
	printf("Первое решение %d %d\n", a, b);
	

	//б. Без использования третей переменной.
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Второе решение %d %d\n", a, b);

	//Нашел в интернете но не разобрался
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("Третье решение %d %d\n", a, b);

	//с использованием указателей
	int  * pa, * pb;
	pa = &a;
	pb = &b;
	pa = &b;
	pb = &a;
	printf("Четвертое решение %d %d\n",*pa, *pb);

	getch();
}
