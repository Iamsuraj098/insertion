/*
#include<stdio.h>
void main()
{
    int a[6];
    printf("enter the array element: \n");
    for (int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array element are:\n");
    for (int i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
}*/
/*
#include<stdio.h>
void main()
{
    int a[10],n,sum=0;
    printf("sum program using array");
    printf("enter the size of array:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum = %d",sum);
}*/
/*
#include<stdio.h>
void main()
{
    int a[50],n,e,sum;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        e = a[i];
        if (e%2==0)
        {
            printf("even number :\n");
            printf("%d",e);
            sum = sum+a[i];
        }
    }
    printf("sum=%d",sum);
}*/
// wap to print odd number:
/*
#include<stdio.h>
void main()
{
    int a[50],n,m;
    printf("enter the array size:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==1)
        {
            printf("%d",a[i]);
        }

    }
}*/
/*wap read the mtrix and print:
#include<stdio.h>
void main()
{
    int a[6][6],n,m;
    printf("enter the number of row you want:");
    scanf("%d",&n);
    printf("enter the number of colume you want: ");
    scanf("%d",&m);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("matrix is ");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }

    }

} */
/*
#include<stdio.h>
void main()
{
    int a[6][6],n,m,i,j,sum=0;
    printf("enter the number of row you want:");
    scanf("%d",&n);
    printf("enter the number of colume you want: ");
    scanf("%d",&m);
    printf("enter the element: \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("sum = %d",sum);
    printf("matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d\n",a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("sum = %d",sum);
    printf("\n");
    printf("enter the location of element you to print: ");
    scanf("%d%d",&i,&j);
    printf("%d",a[i][j]);
} */
// wap of diagonal,transpose,normal matrix:
/*
#include<stdio.h>
void main()
{
    int a[6][6],n,m,i,j;
    printf("enter the number of row you want:");
    scanf("%d",&n);
    printf("enter the number of colume you want: ");
    scanf("%d",&m);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("normal matrix is ");
    for (int i=0;i<n;i++)
    {
        printf("\n");
        for (int j=0;j<m;j++)
        {
               printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    printf("diagonal matrix is");
    for (int i=0;i<n;i++)
    {
        printf("\n");
        for (int j=0;j<m;j++)
        {
            if (i==j)
            {
               printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }

    }
    printf("\ntranspose matrix is ");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }

    }

} */
/*
#include<stdio.h>
void matrix(int,int);
void sum();
void main ()
{
    int n,m,b;
    printf("enter the row:");
    scanf("%d",&n);
    printf("enter the column:");
    scanf("%d",&m);
    matrix(n,m);
    matrix(n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b = printf("%d",[i][j]);
        }

    }

}
void matrix(int c,int b)
{
    int a[10][10],i,j;
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("matrix is: ");
    for (int i = 0; i < c; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            printf("%d\t",a[i][j]);
        }

    }

}  */
// diagonal:
/*
#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    int a[20][20],b[20];
    printf("enter the row: ");
    scanf("%d",&n);
    printf("enter number of colume: ");
    scanf("%d",&m);
    printf("enter the matrix element:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("your matrix is:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal element are: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (i==j)
            {
                printf("%d\t",a[i][j]);
            }
        }
    }
    printf("\ndiagonal matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (i==j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }

        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (i==j)
            {
                sum = sum +a[i][j];

            }

        }

    }
    printf("sum of diagonal element are %d",sum);
    return 0;
}
*/
// odd and even element of array:
/*
#include<stdio.h>
int main()
{
    int n,i,c=0,e=0,a[20],b[20],d[20];
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the element: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            //b[i]=a[i];
            printf("\neven number: %d",a[i]);
            //c=c+1;
        }
        else
        {
           // d[i]=a[i];
            printf("\n\todd number: %d",a[i]);
           // e=e+1;
        }
    }
    for ( i = 0; i < c; i++)
    {
        printf("even element are %d\n",b[i]);
    }
    for ( i = 0; i < e; i++)
    {
        printf("odd number are: %d\n",d[i]);
    }
    return 0;
}  */
// copy of elemnt of an array into other element :
/*
#include<stdio.h>
int main()
{
    int n,i,a[20],b[20];
    printf("enter the number of element: ");
    scanf("%d",&n);
    printf("enter the element:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("second array element: ");
    for (i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}*/
// determinant:
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,deter;
    int a[10][10];
    printf("enter the row: ");
    scanf("%d",&n);
    printf("enter the colume: ");
    scanf("%d",&m);
    printf("enter the element: \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("matrix is \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("determinant of matrix: ");
    if (i==2&&j==2)
    {
       deter = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    }
    else if (i==3&&j==3)
    {
        deter = (a[0][0])*(a[1][1]*a[2][2]-a[1][2]*a[2][1]) - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
                 a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }
    else
    {
        printf("enter only square matrix.");
    }
    printf("determinant of matrix is %d",deter);
    return 0;
}  */
// symmetric matrix:
/*
#include<stdio.h>
int main()
{
    int n,m,i,j,c;
    int a[10][10],b[10][10];
    printf("entre the row: ");
    scanf("%d",&n);
    printf("entre the colume: ");
    scanf("%d",&m);
    printf("enter the matrix element:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix : \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("mdsi: \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if (n==m)
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
              if (a[i][j]==b[i][j])
                {
                    c = 0;
                }
                else
                {
                    c=1;
                    break;
                }
            }
        }
    }
    else
    {
        printf("not symmetric matrix. ");
    }
    if (c==0)
    {
        printf("symmetric matrix. ");
    }
    else
    {
        printf("not symmetric matrix. ");
    }
    return 0;
} */
#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], c;
    auto int n, m;
    printf("enter the row: \n");
    scanf("%d", &n);
    printf("enter the colume: \n");
    scanf("%d", &m);
    printf("enter your first matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    printf("enter the second matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("your first matrix will be: \n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%d  ", a[i][k]);
        }
        printf("\n");
    }
    printf("transpose of matrix will be: \n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%d  ",a[k][i]);
        }
        printf("\n");
    }
    printf("your second matrix will be:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    printf("multiplication of matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c = c + a[i][k] * b[k][j];
                printf("%d  ", c);
            }
            printf("\n");
        }
        c = 0;
    }

    return 0;
}
