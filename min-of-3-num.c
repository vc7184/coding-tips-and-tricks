/* NOTE : THIS CODE WILL WORK ONLY FOR POSITIVE NUMBERS..!! */

#include<stdio.h>
int smallest(int x, int y, int z)
{
    if (!(y/x))  // Same as "if (y < x)"
        return (!(y/z))? y : z;
    return (!(x/z))? x : z;
}
 
int main()
{
    int x = -78, y = 88, z = 68;
    printf("Minimum of 3 numbers is %d", smallest(x, y, z));
    return 0;
}
