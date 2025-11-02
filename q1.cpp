#include <stdio.h>

int main() {
    float a[3][3], t[3][3], c[3][3], adj[3][3], inv[3][3];
    int i,j,p,q,m,n;
    float det=0;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%f",&a[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];

    for(i=0;i<3;i++)
        det += a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++) {
            float minor[2][2];
            m=0;
            for(p=0;p<3;p++) {
                if(p==i) continue;
                n=0;
                for(q=0;q<3;q++) {
                    if(q==j) continue;
                    minor[m][n]=a[p][q];
                    n++;
                }
                m++;
            }
            c[i][j]=((i+j)%2==0?1:-1)*(minor[0][0]*minor[1][1]-minor[0][1]*minor[1][0]);
        }

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            adj[j][i]=c[i][j];

    if(det!=0)
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                inv[i][j]=adj[i][j]/det;

    printf("Transpose:\n");
    for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.2f ",t[i][j]);printf("\n");}
    printf("Determinant: %.2f\n",det);
    printf("Cofactor:\n");
    for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.2f ",c[i][j]);printf("\n");}
    printf("Adjoint:\n");
    for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.2f ",adj[i][j]);printf("\n");}
    if(det!=0){
        printf("Inverse:\n");
        for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.2f ",inv[i][j]);printf("\n");}
    } else printf("Inverse not possible\n");
}

