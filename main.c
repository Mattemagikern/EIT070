/*
 //Test
 char b;
 int main() {
 b = 9;
 while (1 == 1) {
 if (b < 10) {
 b--;
 }
 }
 }
 */

/*
 //Assignment 1
 unsigned char b;
 int main() {
 b = 9;
 while (1 == 1) {
 if (b < 10) {
 b--;
 }
 }
 }
 */

/*
 //Assignment 2
 int b;
 int main() {
 b = 9;
 while (1 == 1) {
 if (b < 10) {
 b--;
 }
 }
 }
 */

/*
 //Assignment 3
 unsigned int b;
 int main() {
 b = 9;
 while (1 == 1) {
 if (b < 10) {
 b--;
 }
 }
 }
 */

/*
 //Assignment 4
 char b[10];
 int main() {
 int i;
 while (1 == 1) {
 for (i = 0; i < 10; i++)
 b[i] = i;
 }
 }
 */

/*
 //Assignment 5
 int b[10];
 int main() {
 int i;
 while (1 == 1) {
 for (i = 0; i < 10; i++)
 b[i] = i;
 }
 }
 */

/*
 //Assignment 6
 char *address;
 char b;
 int main() {
 b = 0;
 address = &b;
 *address = 5;
 while (1 == 1) {
 }
 }
 */

/*
 //Assignment 7
 char *address;
 int b;
 int main() {
 b = 0xFFFFFFF;
 address = (char *) &b + 3;
 *address += 0xF0;
 while (1 == 1) {
 }
 }
 */

/*
 //Assignment 8
 #include "address_mapping.h"
 unsigned int state;
 unsigned int counter;
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0x0;
 counter = 10;
 while (1 == 1) {
 while (counter >= 0) {
 state = *SWITCHES_DATA;
 *LED_DATA = counter;
 counter--;
 }
 }
 }
 */

/*
 //Assignment 9
 #include "address_mapping.h"
 unsigned int state;
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0x0;
 *LED_DATA = 10;
 while (1 == 1) {
 while (*LED_DATA >= 0) {
 state = *SWITCHES_DATA;
 *LED_DATA = *LED_DATA - 1;
 }
 }
 }
 */

/*
 //Assignment 10
 #include "address_mapping.h"
 int main(){
 *SWITCHES_DATA = 10;
 while (1==1){

 }
 }
 */

/*
 //Assignment 11
 #include "address_mapping.h"
 int main(){
 while (1==1){
 *LED_DATA = *SWITCHES_DATA;
 }
 }
 */

/*
 //Assignment 12
 #include "address_mapping.h"
 int main(){
 unsigned int state;
 unsigned int count;
 while (1 == 1) {
 count = 0;

 state = *SWITCHES_DATA;
 while (state > 0) {
 int tempState = state >> 1;
 if ((tempState*2 + 1) == state) {
 count++;
 }
 state = tempState;

 }
 int value = 1;
 for (int i = 1; i <= count; i++){
 value *= 2;
 }
 //value = (2^count)-1;
 value = value -1 ;
 *LED_DATA = value;

 }
 }
 */

/*
 //Assignment 12 nicer looking
 #include "address_mapping.h"
 int main(){
 unsigned int state;
 while (1 == 1) {
 int value = 1;
 state = *SWITCHES_DATA;
 while (state > 0) {
 int tempState = state >> 1;
 if ((tempState*2 + 1) == state) {
 value *= 2;
 }
 state = tempState;
 }
 value = value -1 ;
 *LED_DATA = value;

 }
 }
 */

//-----------LAB 2---------------
/*
 //Assignment 1
 unsigned int *LED_1;
 unsigned int value;
 int i;
 int main() {
 LED_1 = (unsigned int *) 0x44A00000;
 while (1 == 1) {
 value = 1;
 for (i = 1; i < 32; i++) {
 *LED_1 = value;
 value = value << 1;
 }
 }
 }
 */

/*
 //Assignment 2
 const unsigned int display_codes[]= {0b0111111, // �index 0�
 0b110, // �index 1�
 0b1011011, // �index 2�
 0b1001111, // �index 3�
 0b1100110, // �index 4�
 0b1101101, // �index 5�
 0b1111101, // �index 6�
 0b111, // �index 7�
 0b1111111, // �index 8�
 0b1100111}; // �index 9�
 */

/*
 //Assignment 3
 #include "displays.h"
 unsigned char i;
 int main() {
 while (1 == 1) {
 for (i = 0; i < 10; i++)
 displayDigitAtIndex(i % 8, i);
 }
 }
 */

/*
 //Assignment 4
 //Assignment 7
 #include "displays.h"
 int main() {
 while (1 == 1) {

 resetDisplays();
 displayNumber(56456456);

 resetDisplayAtIndex(0);
 resetDisplayAtIndex(1);
 while (1==1){

 }
 }
 }
 */

/*
 //Assignment 8
 #include "displays.h"
 int main(){
 while (1 == 1) {
 resetDisplays();
 displayNumberAtIndex(3, 123);
 while (1==1){

 }
 }
 }
 */

/*
 //Assignment 9
 #include "buttons.h"
 unsigned int state;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 while (1 == 1) {
 state = *BUTTONS_DATA;
 }
 }
 */

/*
 //Assignment 10
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 while (1 == 1) {
 resetDisplays();
 displayNumber(counter);
 while (*BUTTONS_DATA == 0)
 ; // keep reading the data register
 if (*BUTTONS_DATA == UP)
 counter++;
 if (*BUTTONS_DATA == DOWN)
 counter--;
 }
 }
 */

/*
 //Assignment 12
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 unsigned int buttons_state;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 while (1 == 1) {
 resetDisplays();
 displayNumber(counter);
 while (*BUTTONS_DATA == 0)
 ; // keep reading the data register
 buttons_state = *BUTTONS_DATA;
 if (buttons_state == UP)
 counter++;
 if (buttons_state == DOWN)
 counter--;
 while (*BUTTONS_DATA == buttons_state)
 ;
 }
 }
 */

/*
 //Assignment 14
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 unsigned int buttons_state;
 unsigned int i;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 int temp = 0;
 int temp2 = 0;
 while (1 == 1) {
 resetDisplays();
 displayNumber(counter);
 while (*BUTTONS_DATA == 0)
 ;
 for (i = 0; i < 20000; i++)
 ;
 buttons_state = *BUTTONS_DATA;

 temp = buttons_state >> 1;
 temp2 = temp >> 1;
 if (buttons_state == UP)
 counter++;
 else if ((temp2*2+1) == temp){
 counter++;
 }
 temp = buttons_state >> 4;
 temp2 = temp >> 1;
 if (buttons_state == DOWN)
 counter--;
 else if ((temp2*2+1) == temp){
 counter--;
 }
 while (*BUTTONS_DATA == buttons_state)
 ;
 for (i = 0; i < 20000; i++)
 ;
 }
 }
 */

/*
 //Assignment 15
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 unsigned int buttons_state;
 unsigned int i;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 int temp = 0;
 int temp2 = 0;
 while (1 == 1) {
 resetDisplays();
 displayNumber(counter);

 while (*BUTTONS_DATA == 0)
 ;
 for (i = 0; i < 20000; i++)
 ;
 buttons_state = *BUTTONS_DATA;

 temp = buttons_state >> 1;
 temp2 = temp >> 1;
 if (counter < 99999999) {
 if (buttons_state == UP)
 counter++;
 else if ((temp2 * 2 + 1) == temp) {
 counter++;
 }
 }
 temp = buttons_state >> 4;
 temp2 = temp >> 1;
 if (counter > 0) {
 if (buttons_state == DOWN)
 counter--;
 else if ((temp2 * 2 + 1) == temp) {
 counter--;
 }
 }
 while (*BUTTONS_DATA == buttons_state)
 ;
 for (i = 0; i < 20000; i++)
 ;
 }
 }
 */

/*
 //Assignment 16
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 unsigned int buttons_state;
 unsigned int i;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 int temp = 0;
 int temp2 = 0;
 while (1 == 1) {
 resetDisplays();
 displayNumber(counter);
 while (*BUTTONS_DATA == buttons_state)
 ;
 while (*BUTTONS_DATA == 0)
 ;
 for (i = 0; i < 20000; i++)
 ;
 buttons_state = *BUTTONS_DATA;

 temp = buttons_state >> 1;
 temp2 = temp >> 1;
 if (counter < 99999999) {
 if (buttons_state == UP)
 counter++;
 else if ((temp2 * 2 + 1) == temp) {
 counter++;
 }
 }
 temp = buttons_state >> 4;
 temp2 = temp >> 1;
 if (counter > 0) {
 if (buttons_state == DOWN)
 counter--;
 else if ((temp2 * 2 + 1) == temp) {
 counter--;
 }
 }

 for (i = 0; i < 20000; i++)
 ;
 }
 }
 */

/*
 //Assignment 17
 #include "buttons.h"
 #include "displays.h"
 unsigned int counter;
 unsigned int buttons_state;
 unsigned int i;
 unsigned int index;
 unsigned int temp;
 unsigned int temp2;
 unsigned int value;
 unsigned int oldButtonState;
 int main() {
 *BUTTONS_CONTROL = 0xFFFFFFFF;
 counter = 0;
 index = 0;
 temp = 0;
 temp2 = 0;
 value = 0;
 oldButtonState = 0;
 while (1 == 1) {
 for (int j = 0; j <= index; j++){
 if (j == 0){
 value = counter;
 } else {
 value *= 10;
 }
 }
 resetDisplays();
 displayNumberAtIndex(index, counter);
 while (*BUTTONS_DATA == buttons_state)
 ;
 while (*BUTTONS_DATA == 0){
 oldButtonState = 0;
 }

 for (i = 0; i < 20000; i++)
 ;

 buttons_state = *BUTTONS_DATA;


 //UP BUTTON
 temp = buttons_state >> 1;
 temp2 = temp >> 1;
 if ((value+pow(10,index)) < 99999999 && oldButtonState != UP) {
 if (buttons_state == UP)
 counter++;
 else if ((temp2 * 2 + 1) == temp) {
 counter++;
 }
 }

 //DOWN BUTTON
 temp = buttons_state >> 4;
 temp2 = temp >> 1;
 if (value > 0 && counter > 0  && oldButtonState != DOWN) {
 if (buttons_state == DOWN)
 counter--;
 else if ((temp2 * 2 + 1) == temp) {
 counter--;
 }
 }



 //RIGHT BUTTON
 temp = buttons_state >> 3;
 temp2 = temp >> 1;
 if (index > 0  && oldButtonState != RIGHT) {
 if (buttons_state == RIGHT) {
 index--;
 } else if ((temp2 * 2 + 1) == temp) {
 index--;
 }
 }

 //LEFT BUTTON
 temp = buttons_state >> 2;
 temp2 = temp >> 1;
 if (index+numberOfDigits(counter) < 8  && oldButtonState != LEFT) {
 if (buttons_state == LEFT) {
 index++;
 } else if ((temp2 * 2 + 1) == temp) {
 index++;
 }
 }

 //MIDDLE BUTTON
 temp = buttons_state >> 0;
 temp2 = temp >> 1;
 if (value > 0  && oldButtonState != MIDDLE) {
 if (buttons_state == MIDDLE) {
 index = 0;
 counter = 0;
 value = 0;
 } else if ((temp2 * 2 + 1) == temp) {
 index = 0;
 counter = 0;
 value = 0;
 }
 }

 if (oldButtonState == 0) {
 oldButtonState = *BUTTONS_DATA;
 }

 for (i = 0; i < 20000; i++)
 ;
 }
 }
 */

/*
 //Assignment 1
 #include "address_mapping.h"
 void readSwitches_writeLed();
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0;
 while (1 == 1)
 readSwitches_writeLed();
 }
 void readSwitches_writeLed() {
 unsigned int temp;
 temp = *SWITCHES_DATA;
 *LED_DATA = temp;
 }
 */

/*
 //Assignment 2
 #include "address_mapping.h"
 void readSwitches_writeLed();
 unsigned int readSwitches();
 void writeLed(unsigned int value);
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0;
 while (1 == 1)
 readSwitches_writeLed();
 }
 void readSwitches_writeLed() {
 unsigned int temp;
 temp = readSwitches();
 writeLed(temp);
 }
 unsigned int readSwitches() {
 unsigned int temp;
 temp = *SWITCHES_DATA;
 return temp;
 }
 void writeLed(unsigned int value) {
 *LED_DATA = value;
 }
 */

/*
 //Assignment 3
 #include "address_mapping.h"
 void readSwitches_writeLed();
 unsigned int readSwitches();
 void writeLed(unsigned int value, unsigned int v1, unsigned int v2, unsigned int v3, unsigned int v4, unsigned int v5, unsigned int v6, unsigned int v7);
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0;
 while (1 == 1)
 readSwitches_writeLed();
 }
 void readSwitches_writeLed() {
 unsigned int temp;
 temp = readSwitches();
 writeLed(temp, temp + 1, temp + 2, temp + 3, temp + 4, temp + 5, temp + 6, temp + 7); //the i-th argument is temp+i
 }
 unsigned int readSwitches() {
 unsigned int temp;
 temp = *SWITCHES_DATA;
 return temp;
 }
 void writeLed(unsigned int value, unsigned int v1, unsigned int v2, unsigned int v3, unsigned int v4, unsigned int v5, unsigned int v6, unsigned int v7) {
 *LED_DATA = v6;
 }
 */

/*
 //Assignment 4
 #include "address_mapping.h"
 #include "assemblyImplementations.h"
 int main() {
 *SWITCHES_CONTROL = 0xFFFF;
 *LED_CONTROL = 0;
 while (1 == 1)
 readSwitches_writeLed_Assembly();
 }
 */

//Assignment 5
/*
 *
 #include "address_mapping.h";
 #include "assemblyImplementations.h";
 int main() {
 while (1 == 1) {
 main_assembly3();
 }
 }
 */
/*
 #include "displays.h"
 #include "address_mapping.h"
 #include "buttons.h"
 #include "interrupt_controller.h"
 #include "timers.h"
 #include "microBlaze.h"
 unsigned int currentButtonsState = 0;
 unsigned int prevButtonsState = 0;
 unsigned int blinker = 0b0001000;
 unsigned int blinkerOnOff = 0;
 unsigned int application_state = 0;
 unsigned char index_pos = 0;
 int main() {
 resetDisplays();
 initTimers();
 initController();
 enableMicroBlazeInterrupts();
 enableTimers();
 while (1 == 1) {
 switch (application_state) {
 case 0:
 *LED_DATA = 1 << application_state;
 resetDisplayAtIndex(index_pos);
 if (currentButtonsState != prevButtonsState) {
 if (((currentButtonsState & MIDDLE)!= (prevButtonsState & MIDDLE)) && ((currentButtonsState & MIDDLE) != 0))
 application_state++;
 if (((currentButtonsState & LEFT) != (prevButtonsState & LEFT)) && ((currentButtonsState & LEFT) != 0))
 if (index_pos< 7)
 index_pos++;
 if (((currentButtonsState & RIGHT) != (prevButtonsState & RIGHT)) && ((currentButtonsState & RIGHT) != 0))
 if (index_pos > 0)
 index_pos--;
 prevButtonsState = currentButtonsState;
 }
 *((unsigned int *)(SEVEN_SEGMENT_DISPLAY_BASE + index_pos* 4)) = blinker & blinkerOnOff;
 break;
 case 1:
 *LED_DATA = 1 << application_state;
 resetDisplayAtIndex(index_pos);
 if (currentButtonsState != prevButtonsState) {
 if (((currentButtonsState & MIDDLE)!= (prevButtonsState & MIDDLE))&& ((currentButtonsState & MIDDLE) != 0))
 application_state++;
 if (((currentButtonsState & RIGHT) != (prevButtonsState & RIGHT)) && ((currentButtonsState & RIGHT) != 0))
 if (index_pos< 7)
 index_pos++;
 if (((currentButtonsState & LEFT) != (prevButtonsState & LEFT)) && ((currentButtonsState & LEFT) != 0))
 if (index_pos > 0)
 index_pos--;
 prevButtonsState = currentButtonsState;
 }
 *((unsigned int *)(SEVEN_SEGMENT_DISPLAY_BASE + index_pos* 4)) = blinker & blinkerOnOff;
 break;
 case 2:
 *LED_DATA = 1 << application_state;
 resetDisplayAtIndex(index_pos);
 if (currentButtonsState != prevButtonsState) {
 if (((currentButtonsState & MIDDLE) != (prevButtonsState & MIDDLE)) && ((currentButtonsState & MIDDLE) != 0))
 application_state++;
 if (((currentButtonsState & UP) != (prevButtonsState & UP)) && ((currentButtonsState & UP) != 0))
 if (index_pos< 7)
 index_pos++;
 if (((currentButtonsState & DOWN) != (prevButtonsState & DOWN)) && ((currentButtonsState & DOWN) != 0))
 if (index_pos> 0)
 index_pos--;
 prevButtonsState = currentButtonsState;
 }
 *((unsigned int *)(SEVEN_SEGMENT_DISPLAY_BASE + index_pos* 4)) = blinker & blinkerOnOff;
 break;
 case 3:
 *LED_DATA = 1 << application_state;
 resetDisplayAtIndex(index_pos);
 if (currentButtonsState != prevButtonsState) {
 if (((currentButtonsState & MIDDLE) != (prevButtonsState & MIDDLE)) && ((currentButtonsState & MIDDLE) != 0))
 application_state=0;
 if (((currentButtonsState & DOWN) != (prevButtonsState & DOWN)) && ((currentButtonsState & DOWN) != 0))
 if (index_pos< 7)
 index_pos++;
 if (((currentButtonsState & UP) != (prevButtonsState & UP)) && ((currentButtonsState & UP) != 0))
 if (index_pos> 0)
 index_pos--;
 prevButtonsState = currentButtonsState;
 }
 *((unsigned int *)(SEVEN_SEGMENT_DISPLAY_BASE + index_pos* 4)) = blinker & blinkerOnOff;
 break;
 default:
 break;
 }

 }
 }
 */
/*
 * alarm_clock.c
 *
 *  Created on: 27 feb. 2017
 *      Author: dat13jha
 */

#include "displays.h"
#include "address_mapping.h"
#include "buttons.h"
#include "interrupt_controller.h"
#include "timers.h"
#include "microBlaze.h"
#include "alarm_clock.h"

/*
 *  Keeps the current state of the push buttons. Modified only in the interrupt handler for TIMER1 timer1AlarmClockInterruptHandler()
 */
unsigned int currentButtonsState = 0;

/*
 *  Keeps the previous state of the push buttons
 */
unsigned int prevButtonsState = 0;

/*
 *  Keeps the binary pattern for the bottom-most horizontal segment
 */
unsigned int blinker = 0b0001000;

/*
 *  Changes from 0x00000000 to 0xFFFFFFFF and vice-versa. Modified only in the interrupt handler for TIMER1 timer1AlarmClockInterruptHandler()
 *  Used to indicate if the blinker should be on or off
 */
unsigned int blinkerOnOff = 0;

/*
 *  Keeps track of the current state of the alarm-clock.
 *  value 0 == RUN state
 *  value 1 == SET_TIME state
 *  value 2 == SET_ALARM state
 *  value 3 == ALARM state
 */
unsigned int alarmclock_state = 0;

/*
 *  Keeps track of the index of the seven-segment display whose value might be modified by pressing the up or the down button
 */
unsigned char index_pos = 0;

/*
 *  Keeps the time set by the user.
 *  Element at index 0 refers to hours and should only accept values in the range 0-23
 *  Element at index 1 refers to minutes and should only accept values in the range 0-59
 *  Element at index 2 refers to seconds and should only accept values in the range 0-59
 *  Element at index 3 refers to hundreds of a second and should only accept values in the range 0-99
 */
unsigned char newTime[4];

/*
 *  Keeps the running time.
 *  Modified in the interrupt handler for TIMER1 timer1AlarmClockInterruptHandler() or when the state changes from SET_TIME to RUN
 *  Element at index 0 refers to hours and should only accept values in the range 0-23
 *  Element at index 1 refers to minutes and should only accept values in the range 0-59
 *  Element at index 2 refers to seconds and should only accept values in the range 0-59
 *  Element at index 3 refers to hundreds of a second and should only accept values in the range 0-99
 */
unsigned char currentTime[4];

/*
 *  Keeps the time that indicates when the alarm goes off.
 *  Element at index 0 refers to hours and should only accept values in the range 0-23
 *  Element at index 1 refers to minutes and should only accept values in the range 0-59
 *  Element at index 2 refers to seconds and should only accept values in the range 0-59
 *  Element at index 3 refers to hundreds of a second and should only accept values in the range 0-99
 */
unsigned char alarmTime[4];

/*
 *  Implement the code based on the description written as a comment
 */

int main() {
	resetDisplays();
	initTimers_alarmClock();
	initController_alarmClock();
	enableTimer1();
	enableMicroBlazeInterrupts();
	while (1 == 1) {
		switch (alarmclock_state) {
		case 0:
			*LED_DATA = 0;
			display(currentTime);
			if (compareTimeArray(currentTime, alarmTime) == 1
					&& *LED_CONTROL >= 32768) {
				enableTimer2();
			}
			if (((currentButtonsState & UP) != (prevButtonsState & UP))
					&& ((currentButtonsState & UP) != 0)) {
				alarmclock_state = 1;
				setTime(newTime, currentTime);
				display(newTime);
				index_pos = 0;
			} else if (((currentButtonsState & DOWN)
					!= (prevButtonsState & DOWN))
					&& ((currentButtonsState & DOWN) != 0)) {
				alarmclock_state = 1;
				display(alarmTime);
				index_pos = 0;
				*LED_DATA = 65535;
			}

			/*
			 * Turn off the 16 LEDs.
			 * Displays the current time on the eight seven-segment displays
			 * Changes the state of the alarm-clock to ALARM and enables TIMER2 only if the current time is the same as the alarm time and the leftmost switch is turned on
			 * Checks if the UP or DOWN button are pressed now but has not been pressed before
			 * If the UP button is pressed now, but has not been pressed before
			 * 			-the state of the alarm-clock changes to SET_TIME
			 * 			-the newTime is set to the same value as the currentTime
			 * 			-the newTime is displayed on the eight seven-segment displays
			 * 			-the index_pos is initialized to zero
			 * If the DOWN button is pressed now, but has not been pressed before
			 * 			-the state of the alarm-clock changes to SET_ALARM
			 * 			-the alarmTime is displayed on the eight seven-segment displays
			 * 			-the index_pos is initialized to zero
			 * 			-the 16 LEDs are turned on
			 */

			break;
		case 1:
			if (currentButtonsState != prevButtonsState) {
				display(newTime);
			}
			if (((currentButtonsState & UP) != (prevButtonsState & UP)
					&& (currentButtonsState & UP) != 0)
					|| (((currentButtonsState & DOWN)
							!= (prevButtonsState & DOWN))
							&& ((currentButtonsState & DOWN) != 0))) {
				if (currentButtonsState == UP) {
					index_pos++;
				} else if (currentButtonsState == DOWN) {
					index_pos--;
				}
			}
			if ((((currentButtonsState & LEFT) != (prevButtonsState & LEFT))
					&& ((currentButtonsState & LEFT) != 0))
					|| (((currentButtonsState & RIGHT)
							!= (prevButtonsState & RIGHT))
							&& ((currentButtonsState & RIGHT) != 0))) {
				if (currentButtonsState == LEFT) {
					index_pos += 2;
				} else if (currentButtonsState == RIGHT) {
					index_pos -= 2;
				}
			}
			if (((currentButtonsState & MIDDLE) != (prevButtonsState & MIDDLE))
					&& ((currentButtonsState & MIDDLE) != 0)) {
				setTime(newTime, currentTime);
				alarmclock_state = 0;
			}
			*((unsigned int *) (SEVEN_SEGMENT_DISPLAY_BASE + index_pos * 4)) =
					blinker & blinkerOnOff;
			*((unsigned int *) (SEVEN_SEGMENT_DISPLAY_BASE + (index_pos + 1) * 4)) =
					blinker & blinkerOnOff;
			/*
			 * Only when the state of the buttons has changed, the newTime is displayed
			 * If the UP or DOWN buttons are pressed now, but have not been pressed before
			 * 		-based on the index_pos, the corresponding element in the newTime array is incremented or decremented
			 * If the LEFT or RIGHT buttons are pressed now, but have not been pressed before
			 * 		-the index_pos is incremented/decremented by 2
			 * If the MIDDLE button is pressed now, but has not been pressed before,
			 * 		-the currentTime is set to be the same as the newTime
			 * 		-the state of the alarm-clock changes to RUN
			 * Based on the blinkerOnOff variable, the bottom-most horizontal segments of the displays with indices "index_pos" and "index_pos+1" are turned-on or turned-off
			 * NOTE: The data registers of the SEVEN_SEGMENT_DISPLAY device are read-write registers, i.e. when reading the data register controlling a particular seven-segment display, one obtains the same information that is used to drive (control) the seven-segment display
			 */

			break;
		case 2:
			if (currentButtonsState != prevButtonsState) {
				display(alarmTime);
				if (((currentButtonsState & UP) != (prevButtonsState & UP)
						&& (currentButtonsState & UP) != 0)
						|| (((currentButtonsState & DOWN)
								!= (prevButtonsState & DOWN))
								&& ((currentButtonsState & DOWN) != 0))) {
					if (currentButtonsState == UP) {
						index_pos++;
					} else if (currentButtonsState == DOWN) {
						index_pos--;
					}
				}
				if (((currentButtonsState & MIDDLE)
						!= (prevButtonsState & MIDDLE))
						&& ((currentButtonsState & MIDDLE) != 0)) {
					*LED_DATA = 0;
					alarmclock_state = 0;
				}
				*((unsigned int *) (SEVEN_SEGMENT_DISPLAY_BASE + index_pos * 4)) =
						blinker & blinkerOnOff;
				*((unsigned int *) (SEVEN_SEGMENT_DISPLAY_BASE
						+ (index_pos + 1) * 4)) = blinker & blinkerOnOff;
			}
			/*
			 * Only when the state of the buttons has changed, the alarmTime is displayed
			 * If the UP or DOWN buttons are pressed now, but have not been pressed before
			 * 		-based on the index_pos, the corresponding element in the alarmTime is incremented or decremented
			 * If the LEFT or RIGHT buttons are pressed now, but have not been pressed before
			 * 		-the index_pos is incremented/decremented by 2
			 * If the MIDDLE button is pressed now, but has not been pressed before,
			 * 		-the 16 LEDs are turned off
			 * 		- the state of the alarm-clock changes to RUN
			 * Based on the blinkerOnOff variable, the bottom-most horizontal segments of the displays with indices "index_pos" and "index_pos+1" are turned-on or turned-off
			 * NOTE: The data registers of the SEVEN_SEGMENT_DISPLAY device are read-write registers, i.e. when reading the data register controlling a particular seven-segment display, one obtains the same information that is used to drive (control) the seven-segment display
			 */

			break;
		case 3:
			if (blinkerOnOff == 0) {
				*LED_DATA = 0;
			} else {
				*LED_DATA = 0xFFFFFFFF;
			}
			if (currentButtonsState != prevButtonsState) {
				if (((currentButtonsState & MIDDLE)
						!= (prevButtonsState & MIDDLE))
						&& ((currentButtonsState & MIDDLE) != 0)) {
					if (alarmTime[2] > 55) {
						alarmTime[2] = (alarmTime[2] + 5) % 60;
					} else {
						alarmTime[2] += 5;
					}
					timer2AlarmClockInterruptHandler();
				}
			}
			/*
			 * Based on the state of blinkerOnOff, the 16 LEDs are turned on or off
			 * Checks if the state of the buttons has changed
			 * If the MIDDLE button is pressed, but has not been pressed before
			 * 		-the alarmTime is incremented by 5s
			 * 		-TIMER2 is stopped and the interrupts in the device are acknowledged
			 * 		-the alarm-clock state is changed to RUN
			 */
			break;
		default:
			break;
		}
	}
}

/*
 *  Description: Initializes the two timers, such that
 *  	(1)  TIMER1 generates periodic interrupts at a rate once in every 10ms
 *  	(2)  TIMER2 generates a single interrupt 5s after this timer is enabled
 *  Hints:
 *  	(1) Write the corresponding value in the LOAD register for each the timers
 *  	(2) Write the corresponding value in the CONTROL/STATUS register for each of the timers
 *  		- Set the counting direction
 *  		- Set the operation (reload or hold upon overflow)
 *  		- Acknowledge the interrupts
 *  		- Enable the interrupts
 *  		- Load the value of the LOAD register into the COUNTER register
 */
void initTimers_alarmClock() {
	enableTimer1();
	enableTimer2();

}

/*
 *  Description: Initializes the interrupt controller, such that:
 *  	(1) The interrupts from TIMER1 and TIMER2 are enabled
 *  	(2) "timer1AlarmClockInterruptHandler()" is the interrupt handler for the interrupts generated by TIMER1
 *  	(3) "timer2AlarmClockInterruptHandler()" is the interrupt handler for the interrupts generated by TIMER2 should be the routine
 *  	(4) The interrupt controller is able to capture interrupt requests from the timers, and it is able to signal interrupts to the MicroBlaze processor
 *  Hints:
 *  	Interrupts from TIMER1 are mapped to bit position 1 in the ISR of the controller, while interrupts from TIMER2 are mapped to bit position 2. The least significant bit in the ISR is at bit position 0.
 *  	Enabling of interrupts is done by writing to the IER.
 *  	The address of the interrupt handler for TIMER1 should be written in IVAR1
 *  	The address of the interrupt handler for TIMER2 should be written in IVAR2
 *  	The MER register should be modified such that interrupt requests are captured and enable the controller to generate interrupts
 *
 */
void initController_alarmClock() {
	*TIMER1_CTRL = 1 << 7;
	*TIMER2_CTRL = 1 << 7;

}

/*
 *  Description: Enables TIMER1
 *  Hints:
 *  	Write the corresponding value in the CONTROL/STATUS register of TIMER1
 */
void enableTimer1() {
	*TIMER1_LOAD = 1000000;
		*TIMER1_CTRL = (1 << 8) | (1 << 6) | (1 << 5) | (1 << 4);
}

/*
 *  Description: Enables TIMER2
 *  Hints:
 *  	Write the corresponding values in the CONTROL/STATUS register of TIMER2
 *  	Since the counter of this timer halts upon an overflow, don't forget to load the value of the LOAD register into the COUNTER register, before the timer is enabled
 *
 */
void enableTimer2() {
	*TIMER2_LOAD = 500000000;
		*TIMER2_CTRL = (1 << 8) | (1 << 6) | (1 << 5) | (1 << 4);
}

/*
 *  Description: Displays the time on the eight seven-segment displays.
 *               The time is provided as an array, where the element at index 0 represents the hours, while the element at index 3 represents the hundreds of a second.
 *               Each field should be presented with two digits.
 *               Hours are presented on the two leftmost 7-segment displays, followed by minutes, followed by seconds, and finally hundreds of a second presented on the two rightmost 7-segment displays.
 *               In case a field has only one digit, the field is presented with a leading 0. For example, if  time_array[0]==3 the hours are presented as "03" on the two leftmost displays.
 *  Hints:  You can reuse the function displayNumberAtIndex().
 *
 *
 */
void display(unsigned char *time_array) {
for(int i=7;i>0;i--){
	displayNumberAtIndex(i,time_array[i]);
}
}

/*
 *  Description: Compares two time arrays and returns 1 if the arrays are have the same elements; otherwise returns 0
 */
unsigned int compareTimeArray(unsigned char *time_array1,
		unsigned char *time_array2) {
	for(int i=0;i<7;i++){
		if(time_array1[i] != time_array2[i])
			return 0;
	}
	return 1;
}

/*
 *  Description: The elements of the time array oldTime_array are copied into the time array newTime_array
 */
void setTime(unsigned char *newTime_array, unsigned char *oldTime_array) {
	for(int i=0; i<7;i++){
		newTime_array[i] = oldTime_array[i];
	}
}

/*
 *  Description: Interrupt handler that is executed once every 10ms.
 *  			 (1) Acknowledges the interrupts in TIMER1
 *               (1) Updates the time array "currentTime"
 *               (2) Checks if 20ms have elapsed. If so, the state of the pushbuttons are stored in  "currentButtonsState"
 *               (3) Checks if 250ms have elapsed. If so, inverts all bits in the variable "blinkerOnOff"
 *               (4) Acknowledges the interrupts for TIMER1 in the interrupt controller (modifies the IAR register)
 */
//Resolve during lab!
void timer1AlarmClockInterruptHandler() {
	*TIMER1_CTRL= 1<<8;

	blinkerOnOff = ~blinkerOnOff;
}

/*
 *  Description: Interrupt handler that is executed 5s after the function enableTimer2() has been invoked .
 *  			 (1) Acknowledges the interrupts in TIMER2
 *               (2) Sets the alarm-clock state to RUN
 *               (3) Acknowledges the interrupts for TIMER2 in the interrupt controller (modifies the IAR register) *
 */
void timer2AlarmClockInterruptHandler() {

}