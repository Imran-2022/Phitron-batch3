### 1-0 Introduction
```
1. time and space complexity nea alochona.
2. O(1),O(lonN),O(sqrt(N)) nea alochona.
3. O(N),O(NlogN),O(N*N) nea alochona.
```

### 1-1 What is Time Complexity

```
1. time and space complexity
2. O(1),O(log N),O(sqrt(N)),O(N),O(N log N),O(N*N)

Time Complexity:

Time complexity refers to the amount of time an algorithm takes to run as a function of the size of its input.
It helps us understand how an algorithm's performance scales with the size of the problem.
Space Complexity:

Space complexity refers to the amount of memory (space) an algorithm requires as a function of the size of its input.
It helps us understand how much memory an algorithm uses as the problem size increases.

Now, let's discuss the commonly used Big O notation and what each notation represents in terms of time complexity:

O(1): Represents constant time complexity. The algorithm takes the same amount of time regardless of the input size. For example, accessing an element in an array by index.

O(log N): Represents logarithmic time complexity. The algorithm's time increases logarithmically with the input size. Examples include binary search in a sorted array or divide and conquer algorithms like merge sort and binary search tree operations.

O(sqrt(N)): Represents square root time complexity. The algorithm's time increases proportionally to the square root of the input size. An example could be finding divisors of a number up to its square root.

O(N): Represents linear time complexity. The algorithm's time increases linearly with the input size. For example, iterating through an array or list once.

O(NlogN): Represents "N log N" time complexity. Commonly seen in efficient sorting algorithms like merge sort, quicksort, and heap sort. These algorithms have a time complexity of O(N log N) due to their divide and conquer strategies.

O(N*N): Represents quadratic time complexity. The algorithm's time increases proportionally to the square of the input size. Examples include nested loops where each loop iterates over the input size.

Understanding these notations helps in analyzing and comparing algorithms' efficiency, especially as input sizes grow. It's essential to choose algorithms with lower time and space complexities for better performance, especially for large datasets or critical systems.


# O(N)

 -> fl(i,0,20)?
 -> fl(i,0,n-20)?
 -> fl(i,0,n+k)?
 O(N) mx 10^7

# O(log N)
 -> for(int i,i<n;i=i*2,/)
 -> 1000 - 500 - 250 - 125 - 62 - 31 - 15 - 7 -3 -1 
 -> 1 2 4 8 16 32 64 
 O(log N) mx 10^18

# O(sqrt(N))
 -> i*i<N
 -> i<sqrt(n)

 O(sqrt(10^14))=10^7

# example code :- 

void solve(){
    int n;
    cin>>n;
    fl(i,1,sqrt(n)+1){
        if(n%i==0){
            if(n/i!=i){
                cout<<i<<" "<<n/i<<endl;
            }else cout<<i<<endl;
        }
    }
}
input : 
36

output of the code :

1 36
2 18
3 12
4 9
6 

# O(N*N)
 -> Nested loop ar khatre vitre (*) hy 
 -> N*N, N*M etc.
 O(N*N) (10^3)^3 = 10^6 safe ! 

# O(Nlog(N)) 
 -> Nlog(2base)N = 10^6= 20*10^6=2s
 -> Nlog(2base)N = 10^5= 16*10^5=1s

# What is Space Complexity

 - input space, auxilary space . 
 int a[N] - input space.
 int b[k] - auxilary space. (imazine we take a in reverse from and put in b)

 ---
 int a[N]--- O(N)
 int b[N*M]--O(N*N) 
 space complexity = O(N*N) (max e hbe)

 int a[n][m] -- O(N*M)

 online judge max space [10^6]

 so, 
 O(N)=10^6
 O(n*m)=10^3
 O(nlogn)=10^5-> 16*10^5->1.6*10^6
 O(log N) -> 10^18
 O(sqrt(N)) -> 10^12

_____________________END

```

### 
```

```