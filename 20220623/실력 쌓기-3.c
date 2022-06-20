#include <stdio.h>	// 01.구간의 수 출력하기 
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


#include <stdio.h>	// 02.가장 큰 운동장 
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
