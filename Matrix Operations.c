#include <stdio.h>
#include <stdlib.h>
int matrix1[3][3];
int matrix2[3][3];
void enter(){
    printf("Enter the values of Matrix 1\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the values of Matrix 2\n");

    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
}
void printing(){
    printf("The matrix 1 is:\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The matrix 2 is:\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

}
void add(){
    int addi[3][3];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            addi[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("After addition\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t",addi[i][j]);
        }
        printf("\n");
    }

}
void subtraction(){
    int submatrix[3][3];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            submatrix[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    printf("After subtraction\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t",submatrix[i][j]);
        }
        printf("\n");
    }

}
void multiplication(){
    int mult [3][3];
    for(int i=0;i<3;i++)    {
for(int j=0;j<3;j++)    {
    mult[i][j]=0;
for(int k=0;k<c;k++)    {
mult[i][j]+=matrix1[i][k]*matrix2[k][j];
}
}
}
printf("After result\n");
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d\t",mult[i][j]);
    }
    printf("\n");
}
}
void transponse(){
    int count=0;
    int tranmatrix[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            tranmatrix[j][i]=matrix1[i][j];
        }
    }
    printf("After result\n");
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d\t",tranmatrix[i][j]);
    }
    printf("\n");
}
for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
                if(tranmatrix[j][i]==matrix1[i][j]){
                    count=count+1;
                }
        }
    }
    if(count==9){
        printf("The Matrix is Symmetric");
    }
    else{
        printf("Not Symmetric");
    }
}
int main()
{
    enter();
    
    return 0;
}