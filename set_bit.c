/* Set a given bit in a byte */
#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t x, g;

	printf("Enter a valid number between 0 and 255 \n");
	scanf("%hhu", &x);

	printf("enter a valid bit position i.e between 0 and 7 to set \n ");
	scanf("%hhu", &g);

	if(x << (0x01 << g) == 1) {
	
		printf("The given bit position is already set \n");
	} else {
	
		x |= (0x01 << g);
		printf("The resultant byte is : %hhu \n", x);
	}
}
