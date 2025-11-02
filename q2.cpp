#include <stdio.h>

int main() {
    int n,m,a[5][5],i,j,zero=1,identity=1,diag=1,symm=1,upper=1,lower=1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
    if(n==m)printf("Square Matrix\n"); else printf("Rectangular Matrix\n");
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(a[i][j]!=0)zero=0;
    if(zero)printf("Zero Matrix\n");
    if(n==m){
        for(i=0;i<n;i++)for(j=0;j<m;j++){
            if(i==j && a[i][j]!=1)identity=0;
            if(i!=j && a[i][j]!=0)identity=0;
            if(i!=j && a[i][j]!=0)diag=0;
            if(a[i][j]!=a[j][i])symm=0;
            if(i>j && a[i][j]!=0)upper=0;
            if(i<j && a[i][j]!=0)lower=0;
        }
        if(identity)printf("Identity Matrix\n");
        if(diag && !identity)printf("Diagonal Matrix\n");
        if(symm)printf("Symmetric Matrix\n");
        if(upper)printf("Upper Triangular Matrix\n");
        if(lower)printf("Lower Triangular Matrix\n");
    }
}

