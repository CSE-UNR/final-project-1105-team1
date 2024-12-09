//Authors: Luke Wright, Aiden Libanag, & Jordan Stephenson
//Date 12/8/2024

#include <stdio.h>

#define FILE_NAME "madlib2.txt"
#define ROW_CAP 17
#define COL_CAP 17

void madlibRead(FILE* fin, char str[][COL_CAP]);
void madlibDisplay(char str[][COL_CAP]);
void madlibA(int user, char str[][COL_CAP]);
void madlibN(int user, char str[][COL_CAP]);
void madlibV(int user, char str[][COL_CAP]);
void strCopy(char source[][COL_CAP], char dest[][COL_CAP]);

int main(){

	char madLib[ROW_CAP][COL_CAP];
	FILE* fp;
	
	fp = fopen(FILE_NAME, "r");
	
	madlibRead(fp, madLib);
	
	madlibDisplay(madLib);
	
	fclose(fp);
	
	return 0;
	
}

void madlibRead(FILE* fin, char str[][COL_CAP]){

	for(int row = 0; row < ROW_CAP; row++){
		for(int col = 0; col < COL_CAP; col++){
		
			fscanf(fin, "%c", &str[row][col]);
			
		}
	}
}

void strCopy(char source[][COL_CAP], char dest[][COL_CAP]){

	int row = 0, col = 0;

	for(row = 0; source[row][col] != '\0'; row++){
		for(col = 0; source[row][col] != '\n'; col++){
		
			dest[row][col] = source[row][col];
			
		}
	}
	
	dest[row][col] = '\0';
	
}

void madlibDisplay(char str[][COL_CAP]){

	for(int row = 0; row < ROW_CAP; row++){
		for(int col = 0; col < COL_CAP; col++){
			printf("%c", str[row][col]);
		}
	}
}	
