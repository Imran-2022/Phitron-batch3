#include <bits/stdc++.h>
using namespace std;

void merge(int * arr, int *leftSub, int left,int*rightSub, int right){

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

void merge_sort(int *arr, int n){

    if(n<=1)return;
    int mid = n/2;
    int leftSub[mid];
    int rightSub[n-mid];
    
    for(int i=0;i<mid;i++){
        leftSub[i]=arr[i];
    }

    for(int i=mid;i<n;i++){
        rightSub[i-mid]=arr[i];
    }

    merge_sort(leftSub,mid);
    merge_sort(rightSub,n-mid);
    merge(arr,leftSub,mid,rightSub,n-mid);

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}