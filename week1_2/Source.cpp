//64010765 �������� ����������Ѳ��
//����¹����������Ѻ����Ţ 3 ��� �����ҵ���Ţ����դ���ҡ����ش (Level 1)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);

	if (x >= y) {
		if (x >= z) {
			printf("%lf", x);
		}
		else if (z >= x) {
			printf("%lf", z);
		}
	}
	else if (y >= x) {
		if (y >= z) {
			printf("%lf", y);
		}
		else if (z >= y) {
			printf("%lf", z);
		}
	}

	return 0;
}