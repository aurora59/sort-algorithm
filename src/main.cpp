#include <iostream>
using namespace std;

void buble_sort(int a[], int n);
void select_sort(int arr[], int n);
void insert_sort(int arr[], int n);
void merge_sort(int arr[], int temp[], int start, int end);
void quick_sort(int arr[], int l, int r);
void Heap_Sort_Asc(int a[], int n);


int main(){
    int arr[] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62};
    int len = sizeof(arr)/sizeof(arr[0]);
    // buble_sort(arr, len);
    // select_sort(arr, len);
    // insert_sort(arr, len);
    // int temp[len];
    // merge_sort(arr, temp, 0, len-1);
    // quick_sort(arr, 0, len-1);
    Heap_Sort_Asc(arr, len);
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}