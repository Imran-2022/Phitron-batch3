### what we will learn !

1. string copy.
2. compare two string. 
3. two string concat.
4. counting array . 

### string copy -->

```

#include <stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    scanf("%s%s",&ch1,&ch2);
    for(int i=0;i<strlen(ch2);i++){
        ch1[i]=ch2[i];
    }
    printf("%s",ch1);
    return 0;
}



another way - strcpy (a,b)  , it will copy b to a ; 
```
### String Lexicographical Comparison

```
apple<apply (not match and e before y)
apple<applicant
abcd>abc
abd<abde
abd==abd
abc<edf
can be 4 case ,
1. first one can be end first,
2. second one can be end first.
3. can be same .
4. not match.

infinite loop.

for(int i =0;;i++){}

while(1)


```

```
- without buildin funciton - 

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", &a, &b);
    int i = 0; 
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same \n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a choto\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b choto\n");
            break;
        }
        // this is ladder .

        if (a[i] == b[i])
        {
            i++;
        }else if (a[i]<b[i])
        {
            printf("a choto");
            break;
        }
        else{
            printf("b choto");
            break;
        }
    }
    return 0;
}




- with buildin function - 

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", &a, &b);
    int val = strcmp(a, b);// return 1,-1,0 , 1 if a>b, -1 if b>a, 0 if a=b;
    if(val<0){
        printf("a choto");
    }
    if(val>0){
        printf("b choto");
    }
    if(val==0){
        printf("same");
    }
    return 0;
}


```

### 3. two string concat.

```
- without buildin function

#include <stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int alen = strlen(a);
    for(int i=0;i<=strlen(b);i++){
        a[alen]=b[i];
        alen++;
    }
    a[alen]='\0'; // when we copy less .
    printf("%s %s",a,b);

    return 0;
}

- with buildin function - 


#include <stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);

    printf("%s %s",a,b);

    return 0;
}

```


### 4.frequency/counting array . 

```
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int cnt[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d, %d times\n", i, cnt[i]);
    }

    return 0;
}





- counting array ll

 ### character count - 

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    scanf("%s", ch);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(ch); i++)
    {
        int val = ch[i] - 97; // - 'a'
        cnt[val]++;
    }
    // not in serial
    // for (int i = 0; i < 26; i++)
    // {
    //     if (cnt[i] != 0)
    //     {
    //         printf("%c,%d times\n", i + 97, cnt[i]);
    //     }
    // }

    // in serial
    for (int i = 0; i < strlen(ch); i++)
    {
        int val = ch[i] - 97;
        if (cnt[val] != 0)
        {
            printf("%c,%d times\n", val + 97, cnt[val]);
        }
        cnt[val] = 0;
    }

    return 0;
}



###  





```