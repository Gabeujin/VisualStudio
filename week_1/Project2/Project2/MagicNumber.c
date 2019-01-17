#include <stdio.h>

void main() {

	int num;
	printf("%s", "MagicNumber로 부터 나이 알아내기\n");
	printf("%s", "================================\n");
	printf("%s", "다음과 같이 매직 수를 계산하세요.\n");
	printf("%s", "1. 당신의 나이에 21을 더하세요.\n");
	printf("%s", "2. 1의 결과에 2를 곱하세요.\n");
	printf("%s", "3. 2의 결과에 당신의 나이를 더하세요.\n");
	printf("%s", "4. 3의 결과에 18을 빼세요.\r\n");
	printf("%s", "계산된 매직 숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	num = num / 3 - 8;
	printf("당신의 나이는 %d 입니다.\n", num);
}