/* Flip a bit in a given postion of a byte using a macro which accepts arguements */

#include<stdio.h>
#include<stdint.h>

/* Macro to flip a particular bit in a byte */
#define FLIP_BIT(x, pos) (x ^ (0x01 << pos))

int main()
{
	uint8_t x, pos;

	printf("Enter a value between 0 and 255\n");
	scanf("%hhu",&x);
	printf("Enter the position of bit to flip\n");
	scanf("%hhu", &pos);
	printf("The byte containing the flipped bit is: %hhu\n", FLIP_BIT(x, pos));

	return 0;
}


