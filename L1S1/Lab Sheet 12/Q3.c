#include <stdio.h>



void inputData(int data[][4], int rowSize, int colSize);

void display(int data[][4], int rowSize, int colSize);

int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID);



int main() {
    int Data[4][4];
    int row=4,col=4;

    inputData(Data,row, col);
    display(Data,row,col);

    int a=findHighestStudent(Data,row,col,1002);
    printf("Student who obtained highest mark for 1002 is student %d\n",a);

    int b=findHighestStudent(Data,row,col,1003);
    printf("Student who obtained highest mark for 1002 is student %d",b);

    return 0;

}

void inputData(int data[][4], int rowSize, int colSize){

    for(int i=0;i<4;i++){
        printf("Module %d\n",1000+i);
        for(int j=0;j<4;j++){
            printf("Enter Marks of Student %d:",j+1);
            scanf("%d",&data[j][i]);
        }
    }
}

void display(int data[][4], int rowSize, int colSize){
    printf("       ");
    for(int k=0;k<4;k++){
        printf("%d ",1000+k);
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("Student %d ",i+1);

        for(int j=0;j<4;j++){
            printf("%d  ",data[i][j]);
        }
        printf("\n");
    }
}

int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID){

    int max,num;
    num=1;
    if (moduleID == 1000){
        max=data[0][0];
        for(int i=0;i<4;i++){
            if (max<data[i][0]) {
                max=data[i][0];
                num=1+i;
            }
        }
    }
    else if (moduleID == 1001){
        max=data[0][1];
        for(int i=0;i<4;i++){
            if (max<data[i][1]){
                max=data[i][1];
                num=1+i;
            }
        }
    }
    else if (moduleID==1002){
        max=data[0][2];
        for(int i=0;i<4;i++){
            if (max<data[i][2]){
                max=data[i][2];
                num=1+i;
            }
        }
    }
    else{
        max=data[0][3];
        for(int i=0;i<4;i++){
            if (max<data[i][3]){
                max=data[i][3];
                num=1+i;
            }
        }
    }
    return num;
}
