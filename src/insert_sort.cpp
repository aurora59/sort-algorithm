void insert_sort(int arr[], int n){
    int temp, j;
    for(int i=1; i<n; i++){
        j  = i-1;
        temp = arr[i];
        while(temp < arr[j]){
            arr[j+1] = arr[j];
            if(j>0){
                arr[j] = arr[j-1];
                j--;
            }else{
                j--;
                break;
            }
        }
        arr[j+1] = temp;
    }
}