#include<stdio.h>
#if 0
int main() 
{
	unsigned char ch1 = 260;
	unsigned char ch2 = -6;
	printf("%c%c", ch1, ch2);
}
#endif
#if 0
int main() 
{
	signed char ch1 = 130;
	signed char ch2 = -130;
	printf("%d %d", ch1, ch2);
}
#endif
#if 0
int main()
{
	int num;
	for(num = 97; num <= 122; num++)
	{
		printf("%c", num);
	}
}
#endif
#if 0
int main() 
{
	int num;
	for(num = 97; num <= 122; num++)
	{
		printf("%c", (char)num);
	}
}
#endif
#if 0
int main() 
{
	int num1 = 9;
	int num2 = 5;
	float div = (float)num1/num2;
	printf("%f", div);
}
#endif
#if 1
int main() 
{
	int num1 = 9;
	int num2 = 5;
	float div = num1/num2;
	printf("%f", div);
}
#endif

