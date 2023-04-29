// array insert new element in n position,

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d%d", &pos, &val);

    for (int i = 5; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// delete an array element from any position ,

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);

    for (int i =pos-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//Reverse an Array (two points technique.)
// swap.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//Copy Elements of Two Arrays

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int newarr[n + m];
    for (int i = 0; i < n; i++)
    {
        newarr[i]=arr[i];
    }
    for (int i = n; i < m+n; i++)
    {
        newarr[i]=arr2[i];
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", newarr[i]);
    }

    return 0;
}



// introduction to string - 

// sizeof --

#include <stdio.h>
int main()
{
    int arr[5];
    printf("%d",sizeof(arr)/sizeof(int));
    return 0;
}


// 

#include <stdio.h>
int main()
{
    //    char ch[5]={'r','a','h','a','t'};

    char ch[6] = "rahat\0"; // first superpower . here \0 indecate end of the line(null)

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", ch[i]);
    // }

    printf("%s",ch);

    return 0;
}

// string input without white space .

#include <stdio.h>
int main()
{
    char ch[6];
    scanf("%s", ch);
    printf("%s\n", ch);
    return 0;
}


//  string input with white space ..

// two way. (gets(not standard),fgets)

#include <stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    gets(ch);
    printf("%s\n", ch);
    return 0;
}


// another way - 

#include <stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    fgets(ch,17,stdin); // array, size(string+null),stdin function as parameter . 
    ch[5]='\0'; // how it works ? 
    printf("%s\n", ch);
    return 0;
}

// length of string - 

#include <stdio.h>
#include<string.h>
int main()
{
    char ch[233];
    fgets(ch,233,stdin); // array, size(string+null),stdin function as parameter . 
    int count=0;
    for(int i =0;ch[i]!='\0';i++){
        count++;
    }
    printf("%d\n", count);
    return 0;
}


//  strlen - 

#include <stdio.h>
#include<string.h>
int main()
{
    char ch[233];
    fgets(ch,233,stdin); // array, size(string+null),stdin function as parameter . 
    int len=strlen(ch);
    printf("%d\n", len);
    return 0;
}

// problem task 1 : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A


#include <stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    char s2[1001];
    fgets(s1,1001,stdin);
    fgets(s2,1001,stdin);

    int len1=strlen(s1);
    int len2=strlen(s2);
    s1[len1-1]='\0';
    s2[len2-1]='\0';
    printf("%d %d\n",len1-1, len2-1);
    printf("%s %s",s1,s2);

    return 0;
}


// problem task 2 :B. Let's use Getline =  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <stdio.h>

int main()
{
    char ch[100001];
    fgets(ch, 100001, stdin);

    for(int i=0;ch[i]!='\\';i++){
        printf("%c", ch[i]);
    }
    return 0;
}

// problem task 3 :E. Count = https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>

int main()
{
    char c1[1000001];
    scanf("%s",&c1);
    int sum=0;
    for(int i=0;c1[i]!='\0';i++){
        sum+=c1[i]-'0';
    }
    printf("%d",sum);
    return 0;
}

