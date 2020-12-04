// Rectangle=LxW
// Circle = pie x r x r 
// triable = 1/2 bxh

#include <stdio.h>
main()
{
    int shapes;
    float length,width,radius,height;
    printf("========Program to Calculate Area for Shapes========\n");
    printf("Choose the Shape: \n");
    printf("1. Rectangle \n2. Circle \n3. Triangle\n");
    scanf("%d",&shapes);
    switch(shapes)
    {
        case 1:
        printf("Enter the length of Rectangle :\n");
        scanf("%f",&length);
        printf("Enter the Width of Rectangle :\n");
        scanf("%f",&width);
        printf("The Area of Rectangle is : %.2f",length*width);
        break;
        
        case 2:
        printf("Enter the Radius of Circle :\n");
        scanf("%f",&radius);
        printf("The Area of Circle is : %.2f",3.14159*radius*radius);
        break;
        
        case 3:
        printf("Enter the base of triangle :\n");
        scanf("%f",&length);
        printf("Enter the height of triangle :\n");
        scanf("%f",&height);
        printf("The Area of Triangle is : %.2f",0.5*length*height);
        break;
        
        default: printf("You Entered a Wrong Input !!! Try Again Later");
    }
    
    
}
