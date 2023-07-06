#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}

int partition(int a[], int l, int r)
{
  int pivot=a[r];
  int i, p = l-1;
  for(i=l; i<=r-1; i++){
    if(a[i]<pivot){
      p++;
      swap(a[p], a[i]);
    }
  }
  swap(a[p+1], a[r]);
  return p+1;
}

void merge(int a[], int l, int m, int h)
{
    int n1 = m-l+1, n2 = h-m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[l+i]; 
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[m+1+i]; 
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j]){
            a[k] = left[i]; i++; k++;
        }
        else{
            a[k] = right[j]; j++; k++;
        }
    }

    while(i<n1){
        a[k] = left[i];
        i++; k++;
    }
    while(j<n2){
        a[k] = right[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void quickSort(int arr[], int l, int r)
{
  if(l<r){
    int pivot = partition(arr, l, r);
    quickSort(arr, l, pivot-1);
    quickSort(arr, pivot+1, r);
  }
}

void printArray(int a[], int count){
  for (int i = 0; i < count; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
}

void bubbleSORT(int arr[], int size){
  int i, j;
  for (int i=0; i<size; i++)
  {
    for (int j=i; j<size; j++)
    {
      if(arr[i]>arr[j]){
        swap(arr[i], arr[j]);
      }
    }
    
  }
  
}

int main() {
  int n; cin>>n;
  int data[n];
  cout<<"enter elements: ";
  for (int i=0; i<n; i++)
  {
    cin>>data[i];
  }
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  
  bubbleSORT(data, n);

  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}
