#include<stdio.h>

int main()
{
    printf("Assignment 3 : Area And Perimeter Calculator\n\n");
    printf("Task : Write a C program that allows the user to choose between calculating the area and perimeter of a circle or a rectangle. \n Take the necessary input and calculate the desired value.");
    
    printf("\n-------------------------------------------------\n");
    
    float PI = 3.14;
    
    printf("a) Area Of Circle : \n");
    float radius, area_of_circle;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    area_of_circle = PI * radius * radius;
    printf("\nThe Calculated Area Of Circle is : %.2f", area_of_circle);
    
    printf("\n-------------------------------------------------\n");
    
    printf("b) Perimeter Of Circle : \n");
    float r, perimeter_of_circle;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    perimeter_of_circle = 2 * PI * r;
    printf("\nThe Calculated Perimeter Of Circle is : %.2f", perimeter_of_circle);
    
    printf("\n-------------------------------------------------\n");
    
    printf("c) Area Of Rectangle : \n");
    float length, breadth, area_of_rectangle;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &length);
    printf("\nEnter the breadth of the rectangle : ");
    scanf("%f", &breadth);
    area_of_rectangle = length * breadth;
    printf("\nThe Calculated Area Of Rectangle is : %.2f", area_of_rectangle);
    
    printf("\n-------------------------------------------------\n");
    
    printf("d) Perimeter Of Rectangle : \n");
    float l, b, perimeter_of_rectangle;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &l);
    printf("\nEnter the breadth of the rectangle : ");
    scanf("%f", &b);
    perimeter_of_rectangle = 2 * (l + b);
    printf("\nThe Calculated Perimeter Of Rectangle is : %.2f", perimeter_of_rectangle);
    
    printf("\n-------------------------------------------------");
    
    return 0;
}
