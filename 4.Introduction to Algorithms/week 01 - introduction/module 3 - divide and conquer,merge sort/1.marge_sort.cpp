#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

void merge(vi &vt, vi &left_sub,int left,vi &right_sub,int right){
    int i=0,j=0,k=0;
    while(i<left && j<right){
        if(left_sub[i]<right_sub[j]){
            vt[k++]=left_sub[i++];
        }else{
            vt[k++]=right_sub[j++];
        }
    }
    while(i<left)vt[k++]=left_sub[i++];
    while(j<right)vt[k++]=right_sub[j++];
}

void merge_sort(vi &vt,int n){

    if (n<=1)return;
    int mid = n/2;
    vi left_sub(vt.begin(),vt.begin()+mid);
    vi right_sub(vt.begin()+mid,vt.begin() + n);
    merge_sort(left_sub,mid);
    merge_sort(right_sub,n-mid);
    merge(vt,left_sub,mid,right_sub,n-mid);
}

void start_here(){

    int n;
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    merge_sort(vt,n);
    fl(i,0,n)cout<<vt[i]<<" ";
    cout<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)start_here();
    return 0;
}

// sort using merge sort : 

/*

6
1 3 5 2 4 6

output : 
1 2 3 4 5 6 

*/


// #include <bits/stdc++.h>
// using namespace std;

// void merge(int * arr, int *leftSub, int left,int*rightSub, int right){

//     int i=0,j=0,k=0;
//     while(i<left && j<right){
//         if(leftSub[i]<rightSub[j]){
//             arr[k++]=leftSub[i++];
//         }else{
//             arr[k++]=rightSub[j++];
//         }
//     }
//     while(i<left){
//         arr[k++]=leftSub[i++];
//     }
//     while(j<right){
//         arr[k++]=rightSub[j++];
//     }

// }

// void merge_sort(int *arr, int n){

//     if(n<=1)return;
//     int mid = n/2;
//     int leftSub[mid];
//     int rightSub[n-mid];
    
//     for(int i=0;i<mid;i++){
//         leftSub[i]=arr[i];
//     }

//     for(int i=mid;i<n;i++){
//         rightSub[i-mid]=arr[i];
//     }

//     merge_sort(leftSub,mid);
//     merge_sort(rightSub,n-mid);
//     merge(arr,leftSub,mid,rightSub,n-mid);

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     merge_sort(arr,n);
//     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
//     return 0;
// }