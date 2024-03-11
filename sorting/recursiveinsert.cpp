void insertion(int arr[], int i,int n)
{
    //write your code here
    if(i==n)
        return;
    int temp=0,j=0;;
    
    temp=arr[i];
    //std::cout<<"hi\n";
    for(j=i;arr[j-1]>temp && j>0;j--){
        arr[j]=arr[j-1];
        //std::cout<<arr[j]<<" "<<arr[j-1]<<std::endl;
    }
    arr[j]=temp;
    insertion(arr, i+1, n);
}


void insertionSort(int arr[], int n)
{
    //write your code here
    int temp=0,j=0;;
    for(int i=1;i<n;i++){
        temp=arr[i];
        //std::cout<<"hi\n";
        for(j=i;arr[j-1]>temp && j>0;j--){
            arr[j]=arr[j-1];
            //std::cout<<arr[j]<<" "<<arr[j-1]<<std::endl;
        }
        arr[j]=temp;
    }
}