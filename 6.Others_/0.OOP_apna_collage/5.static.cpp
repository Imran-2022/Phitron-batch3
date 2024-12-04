#include<bits/stdc++.h>
using namespace std;

void fun(){
    static int x=0;// init statement - 1 run . 
    // others code bar bar run. 
    cout<<x<<endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    fun();

    //  no change so increased the value each time by one
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void fun(){
//     static int x=0;
//     cout<<x<<endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
//     fun();
// ---------------------- here no change always 0
//     return 0;
// }