/**
* 十个数字冒泡排序
*/
#include<stdio.h>
#define N 10
int main(){
	int n = 1,temp = 0, i = 0;
	printf("Please enter how many numbers to sort:  ");
	scanf("%d", &n);
	printf("Please enter %d numbers to sort: \n", n);
	int a[N];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n-1; i++) //进行n次循环  
    {  
      for(int j= i+1; j < n; j++) //循环比较剩余的变量
      {
        if(a[i] > a[j]) //如果前面一个数比后面数大，交换两个数的值
        {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }  
	for(i = 0; i < n; i++){
		printf("%d  ", a[i]);
	}
	printf("\n");
	return 0;
}
