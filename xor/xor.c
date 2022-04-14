// This is the program you can use to create the data you will put into the other programs
// The idea is the student will need to find the key and determine the encoding scheme.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char key[] = {'C', 'S', 'E', 'C','2','0','2'}; //Can be any chars, and any size array

void encryptDecrypt(char* input, char* output, int size) {
	int keyLen = sizeof(key)/sizeof(key[0]);
	int i;
	
	for(i = 0; i <= size; i++) {
		output[i] = input[i] ^ key[i % keyLen];
	}
}

int main (int argc, char *argv[]) {
	char* baseStr = "Password123!";
	int size = strlen(baseStr);
	char* encrypted = (char*)malloc(sizeof(char) * size);

	encryptDecrypt(baseStr, encrypted, size);

	for(int i = 0; i<=size; i++)
		printf("%u,", encrypted[i]); // prints a series of bytes

}