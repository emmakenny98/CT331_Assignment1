#include <stdio.h>

int newInt;
int* ip;
long newLong;
double *newDouble;
char **newChar;

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

printf("Size of int: %d \n", getInt(newInt));
printf("Size of int pointer: %d\n", getIntPointer(ip));
printf("Size of long: %d\n", getLong(newLong));
printf("Size of double: %d\n", getDouble(newDouble));
printf("Size of char: %d\n", getChar(newChar));
  return 0;
}

int getInt(int newInt) {
        return sizeof(newInt);
}

int getIntPointer(int* ip) {
        return sizeof(ip);
}

int getLong(long newLong) {
        return sizeof(newLong);
}

int getDouble(double *newDouble) {
        return sizeof(*newDouble);
}

int getChar(char **newChar) {
        return sizeof(newChar);
}
