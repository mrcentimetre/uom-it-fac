#include <stdio.h>

void inputData (double account[][3], int rowSize);
void CalcInterest(double account[][3] , int rowSize);
void CalcBalance(double account[][3], int rowSize);
double findTotBalance(double account[][3] ,int rowSize);
void print(double account[][3],int rowSize);

int main() {
    double Arr[10][3];
    int row=10;

    inputData(Arr, row);
    CalcInterest(Arr, row);
    CalcBalance(Arr,row);

    double t=findTotBalance(Arr,row);

    printf("Total amount of account balances = %.2lf\n",t);

    print(Arr,row);

    return 0;

}

void inputData (double account[][3], int rowSize){
    for(int i=0;i<10;i++){
        printf("Enter the initial value for row %d:",1+i);
        scanf("%lf",&account[i][0]);
    }
}


void CalcInterest(double account[][3] , int rowSize){
    for(int i=0;i<10;i++){
        account[i][1]=account[i][0]*0.045;
    }
}

void CalcBalance(double account[][3], int rowSize){
    for(int i=0;i<10;i++){
        account[i][2]=account[i][0]+account[i][1];
    }
}

double findTotBalance(double account[][3] ,int rowSize){
    double total=0;
    for(int i=0;i<10;i++){
        total=total+account[i][2];
    }
    return total;
}

void print(double account[][3],int rowSize){
    printf("Account Balances\n");

    for(int i=0;i<10;i++){
        printf("%.2lf ",account[i][2]);
    }
}
