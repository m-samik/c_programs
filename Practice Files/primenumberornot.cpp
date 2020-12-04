#include <stdio.h>

main(){
    int i,n,c=0;
    printf("Enter Any Number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("Prime Number ");
    else
    printf("Not Prime Number");
    
}
