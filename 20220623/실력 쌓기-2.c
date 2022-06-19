#include <stdio.h>	//01. 사주보기 
main()
{
	int year, month, day, res;
	
	printf("당신의 사주를 봐드립니다.\n연도, 월, 일을 차례대로 입력하세요: ");
	scanf("%d %d %d", &year, &month, &day);
	
	res = year - month + day;
	if (res % 10 == 0)
		printf("당신의 사주는 대박입니다.\n");
	else
		printf("당신의 사주는 그럭저럭입니다.\n");
	
}


#include <stdio.h>	//02. 3개의 타널 통과
main()
{
	int a, b, c;
	
	printf("세 터널의 높이를 차례대로 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (170 >= a)
		printf("충돌 %d", a);
	else if (170 >= b)
		printf("충돌 %d", b);
	else if (170 >= c)
		printf("충돌 %d", c);
	else
		printf("무사 통과");
	 
}


#include <stdio.h>	//03. 이 달은 며칠까지 있을까? 
main()
{
	int a, b;
	
	printf("연도와 월을 입력하세요: ");
	scanf("%d %d", &a, &b);
	printf("%d년 %d월의 마지막 날은 ", a, b);
	
	if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)
		printf("31일");
	else if(b==4 || b==6 || b==9 || b==11)
		printf("30일");
	else
	{
		if(a%4==0 && a%100 !=0 || a%400 == 0)
			printf("29일");
		else
			printf("28일"); 
	 }
	printf("입니다\n");
	 
}


#include <stdio.h>	//04. 30분 전 
main()
{
	int hour, min;
	
	printf("시간과 분을 입력하세요: ");
	scanf("%d %d", &hour, &min);
	
	printf("입력한 시간의 30분 전 시간은 ");
	if(min >= 30)
		printf("%d시 %d분\n", hour,min-30);
	else
	{
		if(hour == 0)
			printf("%d시 %d분\n", 23, 60-(30-min));
		else 
			printf("%d시 %d분\n", hour-1, 60-(30-min));
	 } 
	 
}
