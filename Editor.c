#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>


/*		
 *		
 *		| ----- A hubmle attempt to replicate Legendary V'im using C ----- |
 *		
 *		
 *		Compile will only work in Ubuntu as when you press Ctrl + F9,
 *		system ("cc filename"); is executed.
 *
 * 
 *		TODO 1.	To stop getchar() from taking input,
 *   			Just press Ctrl + H and hit enter :)
 *
 * 
 *		TODO 2.	When you see Ubuntu:~$...
 * 
 * 				TODO 1.	To see Document Statistics, Type Stats
 *  			TODO 2.	Compile and Run, Type Ctrl + F9 and hit enter.
 *    			TODO 3.	To exit, quit from the Edit, Type ./Exit and hit enter.
 *
 * 
 *		CHEERS!
 */


//	| ----- Macros. ----- |


#define TRUE      1
#define FALSE     0
#define START     0
#define NEWLINE   '\n'
#define NULLCHAR  '\0'
#define SPACE     ' '
#define TAB       '\t'
#define EXIT      '\b'
#define ON        1
#define OFF       0
#define MAXLENGTH 50
#define COMPILE   ";5~"


//	| ----- Function Declarations. ----- |


void getNameOfTheFile();
void writeCode();
void getInputFromUser();
void getUserChoice();
void selectAnOption();
void newLineIsENcountered();
void spaceIsEncountered();
void tabIsEncountered();
void displayDocumentStatistics();


//	| ----- Global Variables. ----- |


int newCharacter, lineCount,      spaceCount, tabCount,        characterCount; 
int wordCount,    totalCharCount, flag,       inputIsVariable, colSize;


char choice[MAXLENGTH], fileName[MAXLENGTH], command[MAXLENGTH];


void printUIBox( int limit )
{
	for( int i = 0; i < limit; i++ )
		printf( " " );
	
	printf( "\e[0m\n" );
}


int main( void ) {


    system( "clear" );
    getNameOfTheFile();
    
	
	writeCode();
	getInputFromUser();

	system( "clear" );
	getUserChoice();


    return 0;
}


void getNameOfTheFile( void ) {


	printf( "\e[1m\e[90;48;5;148m EDITOR \e[0m\e[90;48;5;250m VIM \e[0m\e[240;48;5;236m > Normal Mode\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\e[0m" );
    printf( "\e[0m\e[240;48;5;166m \e[0m\e[1m\e[97m filename: \e[0m" );


     scanf( "%s", fileName );
    printf( "\n" );
    fflush( stdin );
}


void writeCode( void ) {


    system( "clear" );
    lineCount = spaceCount = tabCount = characterCount = wordCount = totalCharCount = START;
    flag = OFF;   inputIsVariable = TRUE;
    

	// Terminal Size.
    struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	colSize = w.ws_col;


    printf( "\e[240;48;5;31m ./\e[1m%s \e[0m\e[90;48;5;255m VIM \e[0m\e[240;48;5;236m > Edit Mode\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\e[0m\n", fileName );
}


void getInputFromUser( void ) {


    inputIsVariable = TRUE;
    FILE *fptr;
    fptr = fopen( fileName, "w" );
    

    while( ( newCharacter = getchar() ) != EXIT ) {


        fprintf( fptr, "%c", newCharacter );
        switch( newCharacter ) {
            case NEWLINE: inputIsVariable = FALSE; newLineIsENcountered(); break;
            case SPACE:   inputIsVariable = FALSE; spaceIsEncountered();   break;
            case TAB:     inputIsVariable = FALSE; tabIsEncountered();     break;
        }
        

        if( inputIsVariable == TRUE ) {
            characterCount++;   flag = ON;
        }
        

        totalCharCount++;
    }
    

    system( "clear" );
    printf( "\e[0m\n\e[0m" );
    system( "clear" );
    fclose( fptr );
}


void getUserChoice( void ) {


	do {
    	printf( "\033[0m\e[240;48;5;148m ./\e[1m%s \e[0m\e[90;48;5;250m VIM \e[0m\e[240;48;5;236m > Command Mode\t\t\t\\t\t\t\t\t\t\t\t\t\t\t\t\t\t\e[0m\n\e[0m", fileName );
    	printf( "\e[0m\n" );
    	printf( "\e[0m\e[240;48;5;166m \e[0m\e[1m\e[97m command: \e[0m" );


		scanf("%s", choice);
		system( "clear" );
		
		
		selectAnOption();


    }while( strstr( choice, ":q" ) == OFF );
    

    printf( "\n" );
}


void selectAnOption( void ) {


    if( strstr(choice, "Stats" ) ) displayDocumentStatistics();
    
	
	else if( strstr(choice, ";5~" ) ) {
        
		
		system( "clear" );
		strcat(command, "cc "      );
		strcat(command, fileName   );
		strcat(command, " -o main" );


		system( command  );
		system( "./main" );
        command[ START ] = NULLCHAR;
    }


    else if( strstr( choice, "Edit" ) ) {
    	strcpy( command, "vim "   );
    	strcat( command, fileName );
    	system( command );
    }
}


void newLineIsENcountered( void ) {


    if(flag == ON) wordCount++;
    

    flag = OFF;
    
	if( lineCount < 10 )
		 
		
		 printf( "\e[0m\e[1;48;5;166m %d \e[0m\e[1;48;5;240m", ++lineCount );
    else printf( "\e[0m\e[1;48;5;166m%d \e[0m\e[1;48;5;240m" , ++lineCount );
}


void spaceIsEncountered( void ) {


    if( flag == ON ) wordCount++;
    spaceCount++;   flag = OFF;
}


void tabIsEncountered( void ) {


    if( flag == ON ) wordCount++;
    tabCount++;   flag = OFF;
}


void displayDocumentStatistics( void ) {


	printf( "\e[240;48;5;135m ./\e[1m%s \e[0m\e[90;48;5;250m VIM \e[0m\e[240;48;5;236m > Document Statistics\t\t\t\\t\t\t\t\t\\t\t\t\t\t\t\t\t\t\e[0m\n", fileName );
    printf( "\e[0m" );
    printf("\nLines           %d\nWords           %d\nCharacters:\n   With spaces  %d\n   No spaces    %d", lineCount, ++wordCount, totalCharCount, characterCount);
    printf("\nSpaces          %d\nTabs            %d\nBytes           %d\n\n", spaceCount, tabCount, totalCharCount);
}
