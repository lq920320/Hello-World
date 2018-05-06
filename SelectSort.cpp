/**
* 简单选择排序C语言实现
*/
#include<stdio.h>
typedef int KeyType;
typedef struct{
	KeyType key;
}RecordType;
void DispList(RecordType r[], int n);

void Select_Sort(RecordType r[], int n){/*简单选择排序*/
	RecordType temp;
	int i, j;
	for(i = 1; i <=n; i++){
		for(j = i+1; j <= n; j++){
			if(r[j].key < r[i].key){
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
		}
	}
}

void main(){
	RecordType a[9] = {0, 53, 36, 48, 36, 60, 17, 18, 41};
	printf("排序前：");
	DispList(a, 8);
	Select_Sort(a, 8);
	printf("排序后：");
	DispList(a, 8);
}

void DispList(RecordType r[], int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("%4d", r[i]);
	}
	printf("\n");
}
