#include<stdio.h>
int main()
{
    int n, N[n][n], M[n][n];
    printf ("enter n");
    scanf("%d",&n);
    printf("enter the first matrix");
    for( int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &N[i][j]);
        }
    }
    printf("enter the second matrix");
    for( int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    int G[n][n];
    int temp;
    for (int i=0; i<n; i++)
    {   temp=0;
        for (int j=0; j<n ;j++)
        {
            for (int k=0;k<n;k++){
                temp+=M[i][j]*N[j][k];
            }
        }
    }
    return 0;
}
// #include<stdio.h>
// #include<string.h>

// int main(){
//     // char c[20];
//     // scanf("%s",c);
//     // printf("%s",c);
//     int i=strcmp("shyir","Harsh Sharma");
//     printf("%d",i);
//     return 0;
// }
