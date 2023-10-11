#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,k;
 cin >> n >> k;
 
 int count = 1;
 for(int i = 0;i < 1000000;i++){
   n /= k;
   if(n)count++;
   else break;
 }
 
 cout << count << endl;
  
 return 0;
}