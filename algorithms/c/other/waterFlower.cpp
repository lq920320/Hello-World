/**
  打印水仙花数，所谓“水仙花数”是指一个三位数，其各位

  数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153=1的三次方
  
	＋5的三次方＋3的三次方。
*/

#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("水仙花数：\n");
	for(n = 100; n < 1000; n++){
		i = n/100;
		j = (n - i*100)/10;
		k = n % 10;
		if((i * i * i) + (j * j * j) + (k * k *k) == n){
			printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
}
