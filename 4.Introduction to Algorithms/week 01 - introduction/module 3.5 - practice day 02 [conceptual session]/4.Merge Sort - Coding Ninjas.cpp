
void merge(vector<int> & arr, vector<int>&leftSub, int left, vector<int> &rightSub, int right){
    int i=0,j=0,k=0;
    while(i<left && j<right){
        if(leftSub[i]<rightSub[j]){
            arr[k++]=leftSub[i++];
        }else{
            arr[k++]=rightSub[j++];
        }

    }
    while(i<left){
        arr[k++]=leftSub[i++];
    }
    while(j<right){
        arr[k++]=rightSub[j++];
    }
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    if(n<=1)return;
    int mid=n/2;
    vector<int>leftSub(arr.begin(),arr.begin()+mid);
   vector<int> rightSub(arr.begin() + mid, arr.begin() + n);
    mergeSort(leftSub, mid);
    mergeSort(rightSub, n-mid);
    merge(arr,leftSub,mid,rightSub,n-mid);

}