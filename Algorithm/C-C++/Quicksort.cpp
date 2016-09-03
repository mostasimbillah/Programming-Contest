#include<bits/stdc++.h>
using namespace std;
int arr[]={3,5,9,7,4};
int partitions(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      return i;
}
void quickSort(int arr[], int left, int right) {
      int index = partitions(arr, left, right);
      if (left < index - 1)
            quickSort(arr, left, index - 1);
      if (index < right)
            quickSort(arr, index, right);
}

int main()
{
    for(int i=0;i<5;i++)
    {
        cout << arr[i] <<" ";

    }
    quickSort(arr,0,4);
    cout << endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] <<" ";

    }
    return 0;
}
