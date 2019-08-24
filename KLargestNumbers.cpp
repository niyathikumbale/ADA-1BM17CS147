#include <iostream>
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x=*y;  
    *y=temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] > arr[min_idx])  
            min_idx = j;  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  

int main()  
{  
    int arr[50],n,k;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		}
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);
	cout<<"\nEnter k largest elements to be printed: ";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
		}
    return 0;
}