#include<stdio.h>
#if 0
int main() 
{
	char data = 'A';
	printf("%c\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int data = 65;
	printf("%c\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int data = 65;
	printf("%d\n", data);
	printf("%u\n", data);
	printf("%i\n", data);
	return 0;
}
#endif
#if 0
int main()
{
	int data1;
	int data2;
	int data3;
	printf("Enter value in decimal format:");
	scanf("%d", &data1);
	printf("data1 = %d\n", data1);
	printf("Enter value in hexadecimal format:");
	scanf("%i", &data2);
	printf("data2 = %i\n", data2);
	printf("Enter value in octal format:");
	scanf("%i", &data3);
	printf("data3 = %i\n", data3);
	return 0;
}
#endif
#if 0
int main()
{
	float data = 6.27;
	printf("%f\n", data);
	printf("%e\n", data);
	return 0;
}
#endif
#if 0
int main()
{
	float data = 6.276240;
	printf("%f\n", data);
	printf("%0.2f\n", data);
	printf("%0.4f\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int pos = 14;
	float data = 1.2;
	printf("%*f", pos, data);
	return 0;
}
#endif
#if 0
int main(void)
{
	double data1 = 123456.0;
	printf("%e\n", data1);
	printf("%f\n", data1);
	printf("%g\n", data1);
	printf("\n");
	double data2 = 1234567.0;
	printf("%e\n", data2);
	printf("%f\n", data2);
	printf("%g\n", data2);
	return 0;
}
#endif
#if 0
int main() 
{
	int data = 65;
	printf("%o\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int data = 11;
	printf("%x\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	char blogname[] = "aticworld";
	printf("%s\n", blogname);
	printf("%24s\n", blogname);
	printf("%-24s\n", blogname);
	printf("%24.6s\n", blogname);
	printf("%-24.6s\n", blogname);
	return 0;
}
#endif
#if 0
int main() 
{
	char data;
	scanf("%c", &data);
	printf("%c\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int data;
	scanf("%d", &data);
	printf("%d\n", data);
	
	scanf("%u", &data);
	printf("%u\n", data);

	scanf("%i", &data);
	printf("%i\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	double data = 0.0;
	scanf("%lf", &data);
	printf("%lf\n", data);
	return 0;
}
#endif
#if 0
int main() 
{
	int data;
	scanf("%x", &data);
	printf("%d\n", data);
	return 0;
}
#endif
#if 1
#define 	ARRAY_SIZE 10
int main() 
{
	char buf[ARRAY_SIZE];
	printf("Enter a string:");
	fgets(buf, ARRAY_SIZE, stdin);
	printf("string is:%s\n", buf);
	return 0;
}
#endif
