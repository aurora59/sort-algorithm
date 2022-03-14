void merge(int arr[], int temp[], int start, int mid, int end){
    int i = start, j = mid+1, k = start;
    while(i<mid+1 && j<end+1){
        if (arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i<mid+1){
        temp[k++] = arr[i++];
    }
    while(j<end+1){
        temp[k++] = arr[j++];
    }
    for(i=start; i<end+1; i++){
        arr[i] = temp[i];
    }
}
void merge_sort(int arr[], int temp[], int start, int end){
    int mid;
    if(start < end){
        mid = start + (end-start)/2;
        merge_sort(arr, temp, start, mid);
        merge_sort(arr, temp, mid+1, end);
        merge(arr, temp, start, mid, end);
    }
}