#include<stdio.h>
void main (){
    int k , n , a ;
    printf("Enter N \n");
    scanf("%d",&n);
    printf("Enter number of opertaions \n");
    scanf("%d",&a);
    
    int x = k%2;
    int y =n;
    for(int i = 1; i<=a ;i++ ){
        printf("Enter k \n");
        scanf("%d",&k);
        if (i==1){
            if(k<n ){
                if( x!=0){
                y=n-k;
            }else{
            y=n/k;
            }
            }else{}
        
    }else if (i==2)
    {   if(k>n){
            if( x !=0){
             y=k*n;
            }else{
            y=k+n;
       }    
                 }
       
    }else if (i==3)
    {
        if(k==n){
            y=k*n;
        }
    }else{}
        n=y+n;
    }
    // if (a==1){
    //     if(k<n && x!=0){
    //         n=n-k;
    //     }else{
    //         n=n/k;
    //     }
    // }else if (a==2)
    // {
    //    if(k>n && x !=0){
    //     n=k*n;
    //    }else{
    //     n=k+n;
    //    }
    // }else if (a==3)
    // {
    //     if(k==n){
    //         n=n*n;
    //     }
    // }else{}
    // printf("Ans is %d",n);
    printf("Ans is %d",n+1);
    
}