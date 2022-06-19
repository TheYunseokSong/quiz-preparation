#include <stdio.h>  //01.사주보기 
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
