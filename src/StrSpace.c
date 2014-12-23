#include <stdio.h>
#include <string.h>

void strSpaceMain(int argc, char** argv) {
	char first[100];
	char second[100];
	char third[100];
	char fourth[100];
	char ch;
	int i;
	
	printf("%d", argc);
	printf("%s", argv[1]);
	
	if(argc > 1) {
		
		printf("Inside if");
		printf("Inside if");
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
		
		
		printf("Command Line Arguments %s %s %s %s", first, second, third, fourth); 
	} else {
		
		
		scanf("%[^\n]", first);
		
		
        while ((ch = getchar()) != '\n' && ch != EOF);
        fgets(second, 80, stdin);
        i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		while ((ch = getchar()) != '\n' && ch != EOF);
        fgets(third, 80, stdin);
        i = strlen(third)-1;
        if( third[i] == '\n')
        third[i] = '\0';
		
		while ((ch = getchar()) != '\n' && ch != EOF);
        fgets(fourth, 80, stdin);
        i = strlen(fourth)-1;
        if( fourth[i] == '\n')
        fourth[i] = '\0';
		
		printf("STDIN Arguments %s %s %s %s", first, second, third, fourth);
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