#include<stdio.h>
int main()
{
	char *p = "qwjdiqwjdoiqjw";//适用于不需改变的字符串
	char a[10] = "afwfwq";     //
	char b[] = "asdqwfqwf";//数组中最方便的一种，可以自动分配空间
	char *c[3] = { "asfsa",
	             "asfqasf",
	             "asfqwafq" };
	char d[10];
	gets(d);
	puts(p);//puts参数是首个元素地址，包括字符串常量（等于首个元素地址）和数组名
	puts(b);//
	puts(a);
	puts(c[1]);
	puts("ikolqwefjoiqjfoqijf");
	while (*p)
	{
		putchar(*p++);
	}
	putchar('\n');
	for (int i = 0; a[i]!='\0' ; i++)
	{
		putchar(a[i]);

	}
	putchar('\n');
	for (int i = 0; i < 3; i++)
	{
		puts(c[i]);

	}
	
	
	return 0;
}