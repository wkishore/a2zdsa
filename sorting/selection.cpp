void selectionSort(vector<int>&arr) {
    // Write your code here.
    for(int i=0;i<arr.size();i++){
        int min_ind=i;
        int min_val=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<min_val){
                min_ind=j;
                min_val=arr[j];
            }
        }
        arr[min_ind]=arr[i];
        arr[i]=min_val;
    }
}