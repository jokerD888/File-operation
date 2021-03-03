#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main(void)
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('h', pfWrite);
//	fputc('e', pfWrite);
//	fputc('l', pfWrite);
//	fputc('l', pfWrite);
//	fputc('o', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//int main(void)
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//int main(void)
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL; 
//	return 0;
//}

//int main(void)
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL; 
//	return 0;
//}

//int main(void)
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf,stdout);//输出到标准输出流
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main(void)
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main(void)
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main(void)
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout,"%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

//sscanf是从字符串中读取格式化的数据
//sprintf是把格式化的数据输出成（存储到）字符串
//int main(void)
//{
//	struct S s = { 100,3.14,"hello" };
//	struct S tmp = {0};
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串储存到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};
//int main(void)
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main(void)
{
//	struct S s = { "张三",20,55.6 };
	struct S tmp = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式读文件
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}