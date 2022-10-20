Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@CodeDroid999 
soles21
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x03-debugging/2-largest_number.c
@soles21
soles21 all
Latest commit dec2721 yesterday
 History
 1 contributor
Executable File  33 lines (29 sloc)  397 Bytes

#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
alx-low_level_programming/2-largest_number.c at master · soles21/alx-low_level_programming
