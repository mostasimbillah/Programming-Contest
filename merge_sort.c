#include<stdio.h>
#include<stdlib.h>


void Merge(int *Array,int *LeftArray,int leftCount,int *RightArray,int rightCount) {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(LeftArray[i]  < RightArray[j]) Array[k++] = LeftArray[i++];
		else Array[k++] = RightArray[j++];
	}
	while(i < leftCount) Array[k++] = LeftArray[i++];
	while(j < rightCount) Array[k++] = RightArray[j++];
}

void MergeSort(int *Array,int n) {
	int mid,i, *LeftArray, *RightArray;
	if(n < 2) return;

	mid = n/2;

	LeftArray = (int*)malloc(mid*sizeof(int));
	RightArray = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) LeftArray[i] = Array[i];
	for(i = mid;i<n;i++) RightArray[i-mid] = Array[i];

	MergeSort(LeftArray,mid);
	MergeSort(RightArray,n-mid);
	Merge(Array,LeftArray,mid,RightArray,n-mid);
        free(LeftArray);
        free(RightArray);
}

int main() {


	int Array[] = {6,2,3,1,9,10,15,13,12,17,-1,0};
	int i,numberOfElements;
	numberOfElements = sizeof(Array)/sizeof(Array[0]);
	MergeSort(Array,numberOfElements);
	for(i = 0;i < numberOfElements;i++) printf("%d ",Array[i]);
	return 0;
}
