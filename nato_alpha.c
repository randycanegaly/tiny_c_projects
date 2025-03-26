#include <stdio.h>
#include <ctype.h>

int main(void) {

	const char *nato[] = {//an array of pointers to char, each element is a string
		"Alfa",//pointer is to the start of this string, an address, like 0x404020,
		"Bravo",//address is 0x404025 (Alpha has 5 characters because '\0')
		"Charlie",
		"Delta",
		"Echo",
		"Foxtrot",
		"Golf",
		"Hotel",
		"India",
		"Juliett",
		"Kilo",
		"Lima",
		"Mike",
		"November",
		"Oscar",
		"Papa",
		"Quebec",
		"Romeo",
		"Sierra",
		"Tango",
		"Uniform",
		"Victor",
		"Whiskey",
		"Xray",
		"Yankee",
		"Zulu"
	};

	char phrase[64];//an array of chars, 64 chars long, this creates storage for it
	char ch;
	int i;

	printf("Enter a word or phrase.");
	fgets(phrase, 64, stdin);//reads up to 63 characters at a time from stdin and puts them in the phrase buffer. Puts '\0' at the end of the string loaded in to phrase. '\0' is not truthy

	i = 0;
	while (phrase[i]) {//loop while there are characters - haven't hit '\0' yet
		ch = toupper(phrase[i]);
		if (isalpha(ch))
			printf("%s ", nato[ch-'A']);
		i++;
		if (i==64)//reached max of the buffer
			break;
	}
	putchar('\n');//output a newline

	return(0);
}
