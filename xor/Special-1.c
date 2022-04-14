// This is the most straight forward version
// They can either get the key and decode it with an xor decoder online
// or they can put some extra random arguments and get the answer straight away

#include <stdio.h>
#include <stdlib.h>

char key[] = {'C', 'S', 'E', 'C','2','0','2'}; //Can be any chars, and any size array
char data[] = {19,50,54,48,69,95,64,39,98,119,112,19,48};  // Password123!

void encryptDecrypt(char* input, char* output, int size) {
	
	int keyLen = sizeof(key)/sizeof(key[0]);
	int i;
	
	for(i = 0; i < size; i++) {
		output[i] = input[i] ^ key[i % keyLen];
	}
}

int main (int argc, char *argv[]) {
	int size = sizeof(data) / sizeof(data[0]);
	char* decrypted = (char*)malloc(sizeof(char) * size);
	
	encryptDecrypt(data, decrypted, size);
	
	if(argc == 3){
		printf("Decrypted:%s \nLength: %d \n\n", decrypted, size);
	}
}