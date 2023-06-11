#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define N 20
typedef struct node
{
	
	long stt;
	char sothua[50];
	char hoten[50];
	char chieurong[10];
	char chieudai[10];
	char dientich[10];

}node;
typedef struct stack
{
	int top;
	node list[N];
}stack;
void khoitao(stack &s)
{
	s.top=-1;
}
int empty(stack s)
{
	return s.top==-1?1:0;
}
int full(stack s)
{
	return s.top==N-1?1:0;
}
void push(stack &s,node x)
{
	if(!full(s))
	s.list[++s.top]=x;
}
node pop(stack &s)
{ node x;
     if(!empty(s))
     x=s.list[s.top--];
     return x;
}
int main()
{
	int n,S;stack s;node x;
	int t1; char *t2 ; char *t3; char *t4; char *t5; char *t6;
	printf("\n Nhap vao phan tu:");
	scanf("%d",&n);
	khoitao(s);
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap so thu tu:");
		scanf("%d",&x.stt);
		printf("\n Nhap so thua:");
		fflush(stdin);
		gets(x.sothua);
		printf("\n Nhap ho ten:");
		fflush(stdin);
		gets(x.hoten);
		printf("\n Nhap chieu rong:");
		fflush(stdin);
		gets(x.chieurong);
		printf("\n Nhap chieu dai:");
		fflush(stdin);
		gets(x.chieudai);
		printf("\n Nhap dien tich:");
		fflush(stdin);
		gets(x.dientich);
		push(s,x);
	}
	while(!empty(s))
	{
		x=pop(s);
		printf("\n|-------------------------------------------------------------------------|\n");
		printf("\n|STT | So thua |       Ho ten       | Chieu rong | Chieu dai | Dien tich  |\n");
	   	printf("\n| %d  |   %s     |            %s       |     %sm     |    %sm     |     %sm2    |\n" ,x.stt,x.sothua,x.hoten,x.chieurong,x.chieudai,x.dientich);
		printf("\n|------------------------------------------------------------------------ |\n");
	}
	return 0;
}
