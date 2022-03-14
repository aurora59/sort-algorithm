void buble_sort(int a[], int n){
    int temp;
    for(int i=n-1; i>1; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}