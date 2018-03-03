#include <stdio.h>
#include <conio.h>
#include <math.h>
int MAX(int);
int So(int);
int MIN(int);
int SoDao(int);
int main()
{
	int n;
	printf("\nNhap so que diem:");
	scanf_s("%d", &n);
	printf("\nMax: %d", MAX(n));
	printf("\nMin: %d", SoDao(MIN(n)));//in so dao cua min
	_getch();
	return 0;
}

int So(int n)
{
	int Que;
	switch (n)
	{
	case 7:Que = 8; break;
	case 6:Que = 0; break;
	case 5:Que = 2; break;
	case 4:Que = 4; break;
	case 3:Que = 7; break;
	case 2:Que = 1; break;
	default: Que = -1;
	}
	return Que;
}
int MIN(int n)
{
	int s = 0;
	if (n <= 7 && n != 6) s = 6;
	else if (n<=7 && n!=6)
		{
			s = So(n);
		}
	else
	{
		int i = 7;
		while (n > 0)
		{
			if (i == 2)
			{
				s = s * 10 + So(i);
				n = n - 2;
			}
			else
			{	
				while (n - i > 1 || n-i==0)//loai truong hop n-i =1
				{
					if (n == i == 6)//truong hop tao so 0 o dau
					{
						s = s * 10 + 6; // thay so 0 bang so 6
					}
					n = n - i;
					s = s * 10 + So(i);
				}
			}
			i--;
		}
	}
	return s;
}
int MAX(int n)
{
	int s = 0,dem=0;
	if (n % 2==0)
	{
		while (n > 0)
		{
			s = s * 10 + 1;
			n -= 2;
		}
	}
	else
	{
		while (n > 3)
		{
			s = s * 10 + 1;
			n -= 2;
			dem++;
		}
		s = 7 * (int)pow(10.0, dem) + s;
	}
	return s;
}
int SoDao(int n)
{
	int s = 0;
	while (n > 0)
	{
		s = s * 10 + n % 10;
		n /= 10;
	}
	return s;
}