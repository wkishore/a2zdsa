/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partition(int a[],int lb,int ub){
    int pivot = a[lb];
    int start = lb;
    int en = ub;
    while(start<en){
        while(a[start]<=pivot)
            start++;
        while(a[en]>pivot)
            en--;
        if(start<en){
            int temp=a[start];
            a[start]=a[en];
            a[en]=temp;
        }
    }
    int temp1=a[lb];
    a[lb]=a[en];
    a[en]=temp1;
    return en;
}

void quickSort(int a[], int lb, int ub) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(lb<ub){
        int part=partition(a,lb,ub);
        quickSort(a,lb,part-1);
        quickSort(a,part+1,ub);
    }
}