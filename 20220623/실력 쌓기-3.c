#include <stdio.h>	//01. 구간의 수 출력하기 
main()
{
	int a, b, temp, i;
  
	printf("***두 수 구간의 숫자 출력하기***\n");
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i=a; i<= b; i++)
		printf("%d ",i);
	printf("\n");
	
}


#include <stdio.h>	//02. 가장 큰 운동장 
main()
{
	int i, w, h, max = 0;
	
	printf("운동장 3개의 가로, 세로이 길이를 차례로 입력하세요.\n");
	for(i = 0; i<3; i++)
	
	{
		scanf("%d %d", &w, &h);
		if(w*h > max)
			max = w*h;
	}
	
	printf("가장 큰 운동장의 넓이는 %d입니다.\n", max);

}


#include <stdio.h>	//03. 1등과 꼴등 
main()
{
	int n, i, num;
	int max = 0, min = 100;
	
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);
	printf("점수를 입력하세요(0~100) : ");
	for(i = 0; i<n; i++)
	{
		scanf("%d", &num);
		if(num > max)
			max = num;
		if(num < min)
			min = num;
	 } 
	
	printf("1등은 %d점, 꼴찌는 %d점\n", max, min);
	
}


#include <stdio.h>	//04. 가장 큰 수 
main()
{
	int a, i, m1 = 0, m2 = 0;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if(a % 2 == 1)
			if(a > m1)
				m1 = a;
		if(a % 2 == 0)
			if(a > m2)
				m2 = a;
	 } 
	if(m1 > 0)
		printf("%d ", m1);
	if(m2 > 0)
		printf("%d ", m2);
		
}
