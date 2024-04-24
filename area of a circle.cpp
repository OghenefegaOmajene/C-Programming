#include <stdio.h>  
int main()   
{  
float PI =  3.14159;  
float radius, area;  
printf("Enter the radius of the circle: ");  
scanf("%f %f", &radius, &PI);  
  
area = PI * radius * radius;  
  
printf("The area of the circle is: %f", area);  
  
return 0;  
}  
