#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            if(arr[i] > arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }       
        }
    }  
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}