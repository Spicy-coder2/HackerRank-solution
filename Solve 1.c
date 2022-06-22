#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Your task is to take two numbers of int data type
//two numbers of float data type as input and output their sum

int main()
{
 
    int x,y,a,b;
    float z,j,c,d;
    scanf("%d %d",&x,&y);
    a = x+y;
    b = x-y;
    printf("%d %d ",a,b);
    
    
    scanf("%f %f",&z,&j);
    c = z+j;
    d= z-j;
    
    
    printf(" \n%.1f %.1f",c,d);
    
    
  

    
    return 0;
}


