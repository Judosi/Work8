#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	// 0

	int end;
	puts("Введите конечное значение прогрессии и символ, который будет выводиться на экран:\n");
	scanf_s("%i", &end);
	for (int start = 1; start <= end; start++)
	{
		if ((start == 1) || (start == end)) {
			putchar('+');
		}
		putchar('!');
		if (start != end && start <= end / 2) {
			putchar('*'); // Введите символ, который будет выводиться
		}
		if (start != end && start > end / 2) {
			putchar('^'); // Введите символ, который будет выводиться
		}
	}

	// 1

	puts("");

	int n, m, s = 0;
	puts("Введите значение n");
	scanf_s("%d", &n);
	puts("Введите значение m");
	scanf_s("%d", &m);
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("Выполнено %d раз\n", i + 1);
	}
	printf("Ваш результат %d\n", s);

	// 2

	float x = 0.1, y;
	int times;
	puts("Введите количество повторений функции:");
	scanf_s("%d", &times);
	puts("| x | f(x) |");
	for (int q = x, count = 0; count < times; count++, x += 2)
	{
		y = pow(x, 2) + sin(5 * x);
		printf("| %.1f | %f |\n", x, y);
	}

	//homework

	puts("Введите количество повторений N");
	float n, sum = 0, num = 1, z;
	scanf_s("%f", &n);
	for (float c = n, count = 0; count < c; count++)
	{
		z = 1.0 / num;
		num++;
		sum = sum + z;
	}
	printf("Ваша итоговая сумма равна - %f", sum);

	return 0;
}