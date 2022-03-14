void quick_sort(int arr[], int l, int r){
    int arr0 = arr[l], temp, flag = 1;
    int left = l, right = r;
    if(right <= left){
        return;
    }
    while(right > left){
        if(flag){
            if(arr[right] < arr0){
                arr[left++] = arr[right];
                flag = 0;
            }else{
                right--;
            }
        }else{
            if(arr[left] > arr0){
                arr[right--] = arr[left];
                flag = 1;
            }else{
                left++;
            }
        }
    }
    if(flag){
        arr[left] = arr0;
        quick_sort(arr, l, left-1);
        quick_sort(arr, left+1, r);
    }else{
        arr[right] = arr0;
        quick_sort(arr, l, right-1);
        quick_sort(arr, right+1, r);
    }
}