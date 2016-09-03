#include <stdio.h>

void heapify(int arr[], int n, int parent)
{
    int largest = parent;
    int leftChild = 2*parent + 1;
    int rightChild = 2*parent + 2;


    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;

    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;

    if (largest != parent)
    {
        int swp=arr[parent];
        arr[parent]=arr[largest];
        arr[largest]=swp;
        heapify(arr, n, largest);
    }
}
void buildHeap(int arr[],int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    for (int i=n-1; i>=0; i--)
    {

        int swp=arr[0];
        arr[0]=arr[i];
        arr[i]=swp;
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5,-1,0,39, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    buildHeap(arr,n);
    heapSort(arr, n);

   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);

   }
}
