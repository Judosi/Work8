#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	// 0

	int end;
	puts("������� �������� �������� ���������� � ������, ������� ����� ���������� �� �����:\n");
	scanf_s("%i", &end);
	for (int start = 1; start <= end; start++)
	{
		if ((start == 1) || (start == end)) {
			putchar('+');
		}
		putchar('!');
		if (start != end && start <= end / 2) {
			putchar('*'); // ������� ������, ������� ����� ����������
		}
		if (start != end && start > end / 2) {
			putchar('^'); // ������� ������, ������� ����� ����������
		}
	}

	// 1

	puts("");

	int n, m, s = 0;
	puts("������� �������� n");
	scanf_s("%d", &n);
	puts("������� �������� m");
	scanf_s("%d", &m);
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("��������� %d ���\n", i + 1);
	}
	printf("��� ��������� %d\n", s);

	// 2

	float x = 0.1, y;
	int times;
	puts("������� ���������� ���������� �������:");
	scanf_s("%d", &times);
	puts("| x | f(x) |");
	for (int q = x, count = 0; count < times; count++, x += 2)
	{
		y = pow(x, 2) + sin(5 * x);
		printf("| %.1f | %f |\n", x, y);
	}

	//homework

	puts("������� ���������� ���������� N");
	float n, sum = 0, num = 1, z;
	scanf_s("%f", &n);
	for (float c = n, count = 0; count < c; count++)
	{
		z = 1.0 / num;
		num++;
		sum = sum + z;
	}
	printf("���� �������� ����� ����� - %f", sum);

	return 0;
}