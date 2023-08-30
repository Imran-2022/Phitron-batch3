#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int leftSize = m-l+1;
    int rightSize = r-m;
    int L[leftSize],R[rightSize];
    int k=0;
    for(int i=l;i<=m;i++)
    {
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++)
    {
        R[k]=a[i];
        k++;
    }
    int i=0,j=0;
    int cur=l;
    while(i<leftSize && j<rightSize)
    {
        if(L[i] <= R[j])
        {
            a[cur]=L[i];
            i++;
        }
        else 
        {
            a[cur]=R[j];
            j++;
        }
        cur++;
    }

    while(i<leftSize)
    {
        a[cur]=L[i];
        i++;
        cur++;
    }

    while(j<rightSize)
    {
        a[cur]=R[j];
        j++;
        cur++;
    }
}


void merge_sort(int a[],int l,int r){

    if(l<r){
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        // merge(a,l,mid,r);
        cout<<"THIS"<<endl;
        for(int i=l;i<=mid;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=mid+1;i<=r;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}


/*
input- 

10
15 4 3 9 2 8 10 12 6 1

output -

THIS
4 
15 
THIS
3 4 
15 
THIS
2 
9 
THIS
2 3 4 
9 15 
THIS
8 
10 
THIS
8 10 
12 
THIS
1 
6 
THIS
1 6 8 
10 12 
THIS
1 2 3 4 6 
8 9 10 12 15 

15 4 3 9 2 8 10 12 6 1 


*/