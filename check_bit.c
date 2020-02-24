/* Check if a given bit in a byte is 1 or zero */
#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t x, g;

	printf("Enter a value between 0 and 255 \n");
	scanf("%hhu", &x);

	printf("Enter a valid bit position between 0 and 8 which is to be checked \n ");
	scanf("%hhu", &g);

	if((x & (0x01 << g)) == 0) {
	
		printf("The given bit is cleared i.e 0\n");
	
	} else {
	
		printf("The given bit is set i.e 1\n");
	
	}
}
