<!-- practice day  -->

1. M. Replace MinMax https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxIndex=0;
    int minIndex=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
    }

    int temp;
    temp=arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


```


2. F. Way Too Long Words https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

```
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char ch[105];
        scanf("%s",&ch);
        int len=strlen(ch);
        if(len<10){
            printf("%s\n",ch);
        }
        if(len>10){
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }
    }
    return 0;
}

```

3. G. Conversion https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

```
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100001];
    fgets(ch,100001,stdin);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]==','){
            ch[i]=' ';
        }

        if(ch[i]>='a' && ch[i]<='z'){
           ch[i]= ch[i]-32;
        }else if(ch[i]>='A'&& ch[i]<='Z'){
           ch[i]= ch[i]+32;
        }
    }
    printf("%s",ch);
    return 0;
}

```


4. I. Palindrome https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

```
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1001];
    scanf("%s", &ch);
    int len = strlen(ch);
    int no = 1;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] != ch[len-1 - i])
        {
            no = 0;
        }
    }
    if (no)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


```

5. D. Strings  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

```
#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[11];
    char ch2[11];
    scanf("%s%s", &ch1, &ch2);
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);

    printf("%d %d\n", len1, len2);
    
    char A[11];
    strcpy(A, ch1);
    printf("%s\n", strcat(A, ch2));

    char temp = ch1[0];
    ch1[0] = ch2[0];
    ch2[0] = temp;

    printf("%s %s", ch1, ch2);

    return 0;
}


```
