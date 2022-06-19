#include <stdio.h>
main()
{
//보안 카드 접수증
	char name[21];
	int age;
	char code;
	double secure;

	printf("이름을 입력하세요: ");
	scanf("%s", &name);
	printf("나이를 입력하세요:");
	scanf("&d", &age);
	fflush(stdin);
	printf("부서코드를 입력하세요 :");
	scanf("%c", &code);
	printf("보안키를 입력하세요 :");
	scanf("%lf", &secure);

	printf("*****************\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("부서코드: %c\n", code);
	printf("보안코드: %g\n", secure);
	printf("*****************\n"); 

	
//정수 계산기
	int a, b;
	
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &a, &b);
	
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	
	
//성적 계산
	double a, b, c;
	int d, e, f;
	double score;
	
	printf("***과목별 점수 계산 프로그램***\n");
	printf("중간고사 반영비율/받은 점수를 입력하세요: ");
	scanf("%lf %d", &a, &d);
	printf("기말고사 반영비율/받은 점수를 입력하세요: ");
	scanf("%lf %d", &b, &e);
	printf("수행평가 반영비율/받은 점수를 입력하세요: ");
	scanf("%lf %d", &c, &f);
	
	score = a*d + b*e + c*f; 
	printf("점수는 %g입니다.\n",score);
}
