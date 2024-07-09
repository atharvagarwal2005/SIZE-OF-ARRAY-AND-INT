#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};       // printing address of the elements of an array//
 printf("Addresses of elements :\n");
    for (int n= 0; n < 5; ++n) 
    {
        printf("Address of arr[%d]: %u\n", n, &arr[n]);
    }
    
    return 0;
}
   
    
   
   