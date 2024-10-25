//find the smallest number in 1D array

#include<stdio.h>

int main(){
    int array[5] = {99,75,102,20,35};
		int i;
    int smallest = array[0];  

    for( i = 1; i < 5; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);

    return 0;

}
