#include <stdio.h>
void DispList(int r[], int n);
int Partition(int r[], int s, int t){
	/* 快速排序算法中一趟划分函数 */
	int i, j;
	int temp;
	i = s;
	j = t;
	temp = r[i];           /*初始化，temp为基准记录*/
	do{
		while((r[j] >= temp) && (i < j))
			j--;
		if(i < j)
			r[i++] = r[j];              /*交换r[i]和r[j]*/
		while((r[i] < temp) && (i < j))
			i++;
		if(i < j)
			r[j--] = r[i];              /*交换r[i]和r[j]*/
	}while(i != j);                   /*i=j, 则一次划分结束*/
	r[i] = temp;
	return i;
}

void Quick_Sort(int r[], int hs, int ht){
	/*对r[hs]到r[ht]进行快速排序*/
	int i;
	if(hs < ht){
		/*只有1个记录或者无记录时无须排序*/
		i = Partition(r, hs, ht);            /***r[hs] 到 r[ht] 一次划分***/
		Quick_Sort(r, hs, i - 1);           /*递归处理左区间*/
		Quick_Sort(r, i + 1, ht);           /*递归处理右区间*/
	}
}

void main() {
	int a[9]={0, 49, 38, 65, 97, 76, 13, 27, 49};
	printf("排序前：");
	DispList(a,8);
	Quick_Sort(a, 1, 8);
	printf("排序后：");
	DispList(a,8);
}

void DispList(int r[], int n){
	int i;
	for(i = 1; i <= n; i ++){
		printf("%4d", r[i]);
	}
	printf("\n");
}
