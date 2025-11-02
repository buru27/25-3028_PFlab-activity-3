#include <stdio.h>

int main() {
    int a[3][3][3],i,j,k,same;
    for(i=0;i<3;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)scanf("%d",&a[i][j][k]);
    for(i=0;i<2;i++){
        same=1;
        for(j=0;j<3;j++)for(k=0;k<3;k++)
            if(a[i][j][k]!=a[i+1][j][k])same=0;
        if(same)printf("Layer %d and %d are identical\n",i+1,i+2);
        else printf("Layer %d and %d are different\n",i+1,i+2);
    }
}

