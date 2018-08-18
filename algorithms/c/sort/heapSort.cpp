#include<stdio.h>
#define MaxSize 80
typedef int KeyType;
typedef struct{
  KeyType key;
}RecordType;
void DispList(RecordType r[], int n);

void Shift(RecordType r[], int i, int m) {
  /*堆的筛选算法——在r[i]到r[m]中调整堆*/
	int j;
	RecordType temp;
	temp = r[i];
	j = 2 * i;
	while(j <= m) {
		if((j < m) && (r[j].key < r[j+1].key))
			j++;                                 /*j指向r[i]左右孩子中关键字大者*/
		if(temp.key < r[j].key) {                /*若孩子关键字大于父亲结点*/
			r[i] = r[j];                        /*将r[j]调整到父亲结点的位置*/
			i = j;                              /*修改i和j的值，以便继续“筛”结点*/
			j = 2 * i;
		} else {
			j = m + 1;
		}
	}                                           /*调整完毕，退出循环*/
	r[i] = temp;                                /*将被筛选的结点放入正确的位置*/
}

void Heap_Sort(RecordType r[], int n) {
	/*对数组r[1]到r[n]进行堆排序*/
	RecordType temp;
	int i;
	for(i = n/2; i >= 1; i--) {
		Shift(r,i,n);
	}
	for(i = n; i >= 1; i--) {                   /*进行n-1趟筛选、交换和调整*/
		temp = r[1];                            /*将堆顶元素r[1]与最后一个元素交换*/
		r[1] = r[i];
		r[i] = temp;
		Shift(r, 1, i-1);                       /*将元素r[1]到r[i-1]重新调整为堆*/
	}
}

void main() {
	RecordType a[9] = {0, 36, 25, 48, 12, 65, 43, 20, 58};
	printf("排序前：");
	DispList(a, 8);
	Heap_Sort(a, 8);
	printf("排序后：");
	DispList(a, 8);
}

void DispList(RecordType r[], int n) {
	int i;
	for(i = 1; i <= n; i++) {
		printf("%4d", r[i]);
	}
	printf("\n");
}
