// WAP to input 6 integer and find the frequency of each element.

#include <stdio.h>

int main()
{
    int arr[6], i, j, counter, check,k;
    printf("Enter array elements : ");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The array elements are : ");
    for(i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    
    for(i=0;i<6;i++){
        check=0;
        for(k=i-1;k>=0;k--){
            if(arr[k]==arr[i]){
                check=1;
                break;
            }
        }
        if(check==0){
            counter=0;
            for(j=i;j<6;j++){
                if(arr[i]==arr[j]){
                    counter++;
                }
            }
            printf("\nthe frequency of %d = %d",arr[i],counter);
        }
    }

    return 0;
}
