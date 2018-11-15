/*
 * main.c
 *
 *  Created on: 14 Nov 2018
 *      Author: Mahmoud Abdelrahman
 */
#include <string.h>
int main(int argc, char * argv[])
{


	char name1[100];
	char name2[100];

	// take the first string
	printf("First string: ");
	scanf("%s", name1);

	// take the second string
	printf("Second string: ");
	scanf("%s", name2);


	int result = myStrCmp(name1, name2); // use my version of strcmp()
	int result2 = strcmp(name1, name2); // use the strcmp() that is in <string.h> to test my method
	printf("%i ------ %i\n", result, result2);
}

