void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    if(n==0)
        return;
    int temp=0;
    
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    bubbleSort(arr, n-1);
}