/*
 * functions.c
 *
 *  Created on: 14 Nov 2018
 *      Author: Mahmoud Abdelrahman
 */
int stringLength(char * str)
{
	int counter = 0;
	while(str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

void toLower(char * str)
{
	int i;
	for(i = 0; i <= stringLength(str); i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
}

int myStrCmp(const char * str1, const char * str2)
{
	toLower(str1);
	toLower(str2);
	int length;
	int len1 = stringLength(str1);
	int len2 = stringLength(str2);
	if(len1 > len2)
	{
		length = len1;
	}
	else if(len2 > len1)
	{
		length = len2;
	}
	else if(len1 == len2)
	{
		length = len1;
	}
	int counter;
	int result;
	for (counter = 0; counter < length; counter++)
	{
		if(str1[counter] != str2[counter])
		{
			return (int) str1[counter] - (int) str2[counter];
		}
	}
	return 0;
}
