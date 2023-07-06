#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array: "<<endl;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"--original array--\t";
    print(arr, n);
    insertionSort(arr, n);
    cout<<"--sorted array--\t";
    print(arr, n);
    return 0;
}