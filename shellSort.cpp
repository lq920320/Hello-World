#include<stdio.h>
typedef int KeyType;
typedef struct{
	KeyType key;
}RecordType;
void DispList(RecordType r[], int n);

void Shell_Sort(RecordType r[], int n){
	int i, jump, change, m, k = 1;        /*change为交换标志，jump为步长*/
	RecordType t;
	jump = 14;
	while(jump > 0){
		jump = jump/2;               /*取步长为di+1=di/2*/
		do{
			change = 0;                /*change = 0表示未交换*/
			for(i = 1; i <= n-jump; i++){
				m = i + jump;            /*取增量为di+1=di/2的希尔排序-2*/
				if(r[i].key > r[m].key){
					t = r[m];
					r[m] = r[i];
					r[i] = t;
					change = 1;            /*change = 1表示有交换*/
				}
			}
		}while(change == 1);
		printf("第%d趟排序结果：", k++);
		DispList(r, n);
	}                              /*当jump = 1 且change = 0时终止*/
}


void DispList(RecordType r[], int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("%4d", r[i]);
	}
	printf("\n");
}

void main(){
	RecordType a[15] = {0, 39, 80, 76, 41, 13, 29, 50, 78, 30, 11, 100, 7, 41, 86};
	printf("排序前：");
	DispList(a, 14);
	Shell_Sort(a,14);
	printf("排序后：");
	DispList(a, 14);
}
