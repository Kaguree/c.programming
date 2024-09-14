//a program to find area of a rectangle
#include <stdio.h>
int main() {
    int length, width,area;
    
    printf("Enter the value of length: ");
    scanf("%d", &length);
    
    printf("Enter the value of width: ");
    scanf("%d",&width);
    area=length*width;
    printf("the area of the rectangle is:%d",area);
    return 0;
}
