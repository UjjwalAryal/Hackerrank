#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        scanf("%d %d",&n,&k);
        int a[n],c=0;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);}
            for(int i=0;i<n;i++)
            {if(a[i]<=0)  c++;}
                if (c<k)
                    printf("YES\n");
                else
                    printf("NO\n");

    }
    return 0;
}
  
