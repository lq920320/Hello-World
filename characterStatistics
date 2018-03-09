/**
* 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
*
*/
#include<stdio.h>
int main(){
	char c;
	int letter_count = 0, space_count = 0, 
		digit_count = 0, other_count = 0;
	printf("请输入一些字符：\n");
	while((c = getchar()) != '\n'){
		if((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')){
			letter_count ++;
		}else if(c == ' '){
			space_count ++;
		}else if(c >= '0' && c <= '9'){
			digit_count ++;
		}else{
			other_count ++;
		}
	}
	printf("统计结果如下：\n");
	printf("\t\t英文字母个数: %d\n", letter_count);
	printf("\t\t空格个数: %d\n", space_count);
	printf("\t\t数字字符个数: %d\n", digit_count);
	printf("\t\t其它字符个数: %d\n", other_count);
	return 0; 
}
