#include<stdio.h>
#include<string.h>

void main()
{
    int n;
    int flag=1;

    char* p;
    printf("Add string: ");
    scanf("%s",p);
    n = strlen(p);

    if(n<2){
        printf("Invalid");
        return;
    }
    if(p[n-1]=='b' && p[n-2]=='b'){
        flag=1;
    }
    else{
        printf("Invalid");
        return;
    }
    for(int i=0;i<n-2;i++){
        if(p[i]=='a'){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}

