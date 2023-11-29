// Assume that you are the software developer of the “Matrix O” company and you are asked to develop a program to rotate a 2D Matrix. Details of the program to be implemented are mentioned below. 

// • Write a C program to create a 2D integer array of size 4x3. Insert values to the first column of the array from the keyboard and assign 0 for all the other elements. 

// • Write a function called displayArray() to display the contents. 
//     void displayArray (int arr[][3], int row, int col); 
    
// • In your main function call displayArray() to display the array created. 

// • Rotate the content of the columns by 1 in the forward direction as shown below  Before Rotating    

//     45 0 0 
//     8 0 0 
//     90 0 0 
//     23 0 0   
    
//     After Rotating 
    
//     0 45 0 
//     0 8 0 
//     0 90 0 
//     0 23 0  
    
// (ex: Move the contents of the 2nd column to 3rd column, 1st column to 2nd column and 3rd column to 1st column) 

// • Call displayArray() to display the contents after rotating. 



#include <stdio.h> 

void displayArray(int arr[][3],int row, int col) { 
    for(int i=0;i<row;i++) { 
        for(int j=0;j<col;j++) { 
            printf("%d ",arr[i][j]); 
        } 
        printf("\n"); 
    } 
} 

int main() { 
    int arr[4][3],Rot_arr[4][3]; 
    int Row=4; 
    int Col=3; 
    
    for(int i=0;i<4;i++) { 
        printf("Enter the value for [%d][1] of matrix:",i+1); 
        scanf("%d",&arr[i][0]); 
    } 
    
    for(int i=0;i<4;i++) { 
        arr[i][1]=0; arr[i][2]=0; 
    } 
    
    displayArray(arr,Row,Col); 
    
    for(int i=0;i<4;i++) { 
        Rot_arr[i][0]=arr[i][2]; 
    } 
    
    for(int i=0;i<4;i++) { 
        Rot_arr[i][1]=arr[i][0]; 
    } 
    
    for(int i=0;i<4;i++) { 
        Rot_arr[i][2]=arr[i][1]; 
    } 
    
    printf("\nAfter Rotating \n"); 
    
    displayArray(Rot_arr,4,3); 
    
    return 0; 
}