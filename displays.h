

#ifndef SRC_DISPLAYS_H_
#define SRC_DISPLAYS_H_

#define SEVEN_SEGMENT_DISPLAY_BASE 0x44A00000

void displayDigitAtIndex(unsigned char index, unsigned char digit);
unsigned int numberOfDigits(unsigned int x);
void displayNumber(unsigned int x);

void resetDisplayAtIndex(unsigned int x);

void resetDisplays();

void displayNumberAtIndex(unsigned char index, unsigned char number);

#endif /* SRC_DISPLAYS_H_ */
