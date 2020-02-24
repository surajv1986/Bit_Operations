/* Clear a given bit in a byte */
#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t x, g;

	printf("Enter a valid byte between 0 and 255 \n");
	scanf("%hhu", &x);
	printf("Enter a valid bit position i.e number between 0 and 7 to clear\n ");
	scanf("%hhu", &g);

	if((x & (0x01 << g)) == 0) {
	
		printf("The given bit is already is cleared \n");

	} else {
	
		x = x & ~(0x01 << g);	
		printf(" The resultant byte is %hhu \n", x);
	}
	
}
