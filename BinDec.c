#include <stdio.h>
void to_binary(int input);
void main()
{
	int input;
	
	while(1) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &input);
		if(input == 0)
			break;
		printf("2���� : ");
			to_binary(input);
		printf("\n"); 
	}
}
void to_binary(int input)
{
	if(input < 0)
		return;
	if(input >= 2) {
		to_binary(input / 2);
		printf("%d", input % 2);
	}
	else
		printf("%d", input);
}
