#include <stdio.h>

//This is my first C program.
int main(){
	int accountId = 5;
	double accountBalance = 100.53;
	char accountType = 'C';
	printf("AccountId is: %d\n", accountId);
	printf("AccountBL is: %f\n", accountBalance);
	printf("AccountTY is: %c\n", accountType);

	printf("sizeOf(int): %d\n", sizeof(accountId));
	printf("sizeif(doule): %d\n", sizeof(accountBalance));
	printf("sizeof(char): %d\n", sizeof(char));
	return 0;
}
