void merge(vector<int>& a,int l,int mid,int r){
    //cout<<"merging "<<st<<" "<<mid<<" "<<en<<endl;
    int sorted[r-l+1];
    int p1=l,p2=mid+1,i=0;
    while(p1<=mid && p2<=r){
        if(a[p1]<=a[p2]){
            sorted[i]=a[p1];
            p1++;
        }
        else{
            sorted[i]=a[p2];
            p2++;
        }
        i++;
    }
    //cout<<p1<<" "<<p2<<" "<<i<<endl;

    if(i!=(r-l+1)){
        if(p1<mid+1){
            while(p1<mid+1){
                sorted[i]=a[p1];
                p1++;
                i++;
            }
        }
        if(p2<=r){
            while(p2<=r){
                sorted[i]=a[p2];
                p2++;
                i++;
            }
        }
    }
    //cout<<p1<<" "<<p2<<endl;
    for(i=l;i<=r;i++){
        a[i]=sorted[i-l];
        //cout<<a[i]<<" ";
    }
    //cout<<endl;
}

void mergeSort(vector<int>& arr, int l, int r) {
    // Write Your Code Here
    //cout<<l<<" "<<r<<endl;
    if(l<r){
        //return;
    int mid=(l+r)/2;
    mergeSort(arr,  l,  mid);
    mergeSort(arr,  mid+1,  r);
    merge(arr, l,  mid,  r);
    } 
}