#include<stdio.h>
int main()
{
	char *p = "qwjdiqwjdoiqjw";//�����ڲ���ı���ַ���
	char a[10] = "afwfwq";     //
	char b[] = "asdqwfqwf";//����������һ�֣������Զ�����ռ�
	char *c[3] = { "asfsa",
	             "asfqasf",
	             "asfqwafq" };
	char d[10];
	gets(d);
	puts(p);//puts�������׸�Ԫ�ص�ַ�������ַ��������������׸�Ԫ�ص�ַ����������
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