/* part1.c - Is a simple C program which performs various tasks per a user-inputted array
@author - Izum Adnan - 251202487 */

#include<stdio.h>

// Assigning Global Variables
int i, j; 
int arrSize;
void part1(int arr1[]), part2(int arr1[]), part3(int arr1[]), part4(int arr1[]), part5(int arr1[]), part6(int arr1[]);

// Main Function - Prompts Instructions and Stores User Output
int main(){
    
    // Print and Scan Statement where the print states instuctions and the scan inputs the user output
    printf("Please enter the number of integers to process: ");
    scanf("%d", &arrSize);

   if (arrSize>=5 && arrSize<=12){
   } else {
    printf("Invalid Size Please try Again\n\n");
    return main();
   }

    // Outputs how many bytes per user inputted array size
    int bytes=0;
    if (arrSize>=5 && arrSize<=12){
        for(i=0;i<arrSize;i++){
            bytes = bytes + sizeof(arrSize);
        }
        printf("  There is enough room in your array for %d integers (%d bytes)\n\n", arrSize, bytes);
    }

    // Stores user-inputted size into an array
    int arr[arrSize];

    // Prints and Stores the numbers the user wants to input within array
    printf("Please enter your integers separated by spaces: ");
    for (i=0; i<=arrSize-1; i++){
        scanf("%d", &arr[i]);}


    // The order in which the program should run in
    part1(arr);
    part2(arr);
    part3(arr);
    part4(arr);
    part5(arr);
    part6(arr);
}

// Part 1 - Prints the elements and what position they are in
void part1(int arr1[]){
    printf("\nPart 1:\n   ");
    printf("Your array is: ");
    int first=0;
    if (arrSize==1){
        printf("[%d] = %d", first, arr1[0]);
    } else {
        for (i=0; i<=arrSize-2; i++){
            printf("[%d] = %d, ", i, arr1[i]);};
        for (j=arrSize-1; j<=arrSize-1; j++){
            printf("[%d] = %d ", j, arr1[j]);};
        }
}

// Part 2 - Prints  out the largest value in the array
void part2(int arr1[]){   
    printf("\n\nPart 2:\n   ");
    int largest = arr1[0];
    for (i=0; i<=arrSize-1; i++) {
        if (largest < arr1[i]){
        largest = arr1[i];}
    }
    printf("The largest value in your array is: %d", largest);
}

// Part 3 - Prints out the elements of the array in reverse order
void part3(int arr1[]){
    printf("\n\nPart 3:\n   ");
    printf("Your array in reverse is: ");
    for (i=arrSize-1; i>=0; i--){
        printf("%d ", arr1[i]);
    }
}

// Part 4 - Prints out the sum of all values within array
void part4(int arr1[]){
    printf("\n\nPart 4:\n   ");
    int sum = 0;
    printf("The sum of all values in your array is: ");
    for (i=0; i<arrSize; i++){
        sum += arr1[i];
    }
    printf("%d", sum); 
}

// Part 5 - Prints out the elements of the array from largest to smallest (Descending Order)
void part5(int arr1[]){
    int arr2[arrSize];
    for (int i = 0; i<arrSize; i++) {     
        arr2[i] = arr1[i];     
    }     
    printf("\n\nPart 5:\n    ");
    printf("Your array in sorted order is: ");
    for (i=0;i<arrSize; i++){
	    for (j=0;j<arrSize; j++){
			if (arr2[j] < arr2[i]){
				int tmp = arr2[i]; 
				arr2[i] = arr2[j];   
				arr2[j] = tmp;}
		}}
    for (i = 0;i<=arrSize-1; i++){
		printf("%d ", arr2[i]);
	}
}

// Part 6 - Prints out the elements of the array except the first and last element are swapped
void part6(int arr1[]){
    int arr2[arrSize];
    for (int i = 0; i<arrSize; i++) {     
        arr2[i] = arr1[i];     
    }     
    int first, last;
    first=arr1[0];
    last=arr1[arrSize-1];
    arr2[0]=last;
    arr2[arrSize-1]=first;
    printf("\n\nPart 6:\n    ");
    printf("Your array with first and last element switched is: ");
    for (i = 0;i<=arrSize-1; i++){
		printf("%d ", arr2[i]);
	}
    printf("\n");
}