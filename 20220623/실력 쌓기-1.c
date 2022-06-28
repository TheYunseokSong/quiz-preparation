#include <stdio.h>	//01. 보안 카드 접수증
main()
{
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

}


#include <stdio.h>	//02. 정수 계산기
main()
{
	int a, b;
	
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &a, &b);
	
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	
}


#include <stdio.h>	//03. 성적 계산
main()
{
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
	printf("점수는 %.1lf입니다.\n",score);
	
}


#include <stdio.h>	//04. 번호 뽑기
#include <time.h>
#include <stdlib.h>
main()
{
	int a, b, num;
	
	srand(time(NULL));
	
	printf("***번호뽑기 프로그램***\n");
	printf("번호의 범위를 입력하세요(시작번호, 마지막번호): ");
	scanf("%d %d", &a, &b);
	num = rand() % (b-a+1) + a;
	printf("축하합니다! 뽑힌 번호는 %d입니다!\n", num);
		
}
