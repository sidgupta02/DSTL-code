// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5],b[5],c[5];
    printf("enter elements of set a");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements of set b");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int count=0,k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]==b[j]){
                continue;
            }
            else
                count++;
        }
        if(count==5){
            c[k]=a[i];k++;
        }
        count=0;
        
    }
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}
