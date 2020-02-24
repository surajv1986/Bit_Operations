#include<stdio.h>
#include<stdint.h>

/* Symbolic Constants and Macros */
#define LEFT_WINDOW 1
#define RIGHT_WINDOW 2
#define NO_WINDOW 3
#define INVALID_NUMBER -1
#define CHECK_SEAT(seatno) ((seatno & 0x11) & 0x01)
/* Function prototypes */
int check_seat_type(uint8_t seatno);

int check_seat_type(uint8_t seatno)
{
	/* Check valid bounds */
	if((seatno < 1) ||( seatno > 60)) {
	
		return INVALID_NUMBER;
	}
	if(CHECK_SEAT(seatno) == 1) {
		
		return LEFT_WINDOW;
	} else if (CHECK_SEAT(seatno) == 0) {
	
		return RIGHT_WINDOW;
	} else {
	
		return NO_WINDOW;
	}
	
}
int main()
{

	uint8_t seatno = 0;
	int ret = 0;

	while(1) {
		
		printf("Enter seat no between 1 and 60\n");
		scanf("%hhu", &seatno);
		ret = check_seat_type(seatno);

		switch(ret) {
		
			case LEFT_WINDOW :
						printf("Given seat no: %hhu is left window \n ", seatno);
						break;
			case RIGHT_WINDOW : 
						printf("Given seat no : %hhu is right window \n", seatno);
						break;
			case NO_WINDOW :
						printf("Given seat no : %hhu is not a window seat\n ", seatno);
						break;
			case INVALID_NUMBER:
						printf("ERROR: Please Enter a valid no between 1 and 60, you have entered number: %hhu \n", seatno);
						break;
			default:
						break;



						
		}
	}
	
	return 0;

}
