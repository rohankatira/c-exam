//develop a c program that defines a structure representing a house
//(with attributes like room_quantity,established_year and city).
// list N number of 'house' details using array of objects.
#include<stdio.h>
struct house{
    int room_quantity;
    int established_year;
    char city[20];
};

int main(){
    int num,i;
    printf("how many houses' details do you want to enter?\n");
    scanf("%d",&num);
    struct house housedetails[num];

    for( i=0; i<num; i++){
        printf("enter room quantity: %d\n",i);
        scanf("%d",&housedetails[i].room_quantity);

        printf("enter established year: %d\n",i);
        scanf("%d",&housedetails[i].established_year);

        printf("enter city: %d\n",i);
        scanf("%d",housedetails[i].city);
    }

    for( i = 0; i<num; i++){
        printf("room quantity is: %d\n",housedetails[i].room_quantity);
        printf("established year is: %d\n",housedetails[i].established_year);
        printf("room quantity is: %d\n",housedetails[i].city);
    }

}

