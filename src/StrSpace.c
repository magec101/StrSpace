#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strSpaceMain(int argc, char** argv) {
	char first[100];
	char second[100];
	char third[100];
	char fourth[100];
	char ch;
	int i;
	
//	printf("%d", argc);
//	printf("%s", argv[9]);

    strcpy(fourth, argv[9]);	
	if(argc > 1) {
		
		printf("Inside if");
		printf("Inside if edited statement");
		//printf("1%d", argc);
		printf("%s", argv[1]);
		strcpy(first, argv[1]);
		printf("%s", first);
		strcpy(second, argv[2]);
		
		printf("%s", second);
		strcpy(third, argv[3]);
		printf("%s", third);
		strcpy(fourth, argv[4]);
		printf("%s", fourth);
		
		
		
	//	printf("Command line argument %s %s %s %s", first, second, third, fourth);
	} else {
		//gets(first); gets(second); gets(third); gets(fourth);
		//printf("STDIN arg values [%s] [%s] [%s] [%s]", first, second, third, fourth);
	}
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
	
 	printf("%d", argc);
	printf("%s", argv[1]);
 	strSpaceMain(argc, argv);
    return 0;
}

#endif