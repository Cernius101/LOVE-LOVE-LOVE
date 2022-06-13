#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "unistd.h"
#include "windows.h"

#define COLOR_DEFAULT 7
#define RED_COLOR 12

void LOVE_IS_HERE(int color);
void LOOP_YOUR_TEXT(char *text);

int main(){
    
    system("cls");
    char YOUR_TEXT[256];

    printf("Don't be shy! Insert your text here. EVERYTHING LOOKS GOOD WITH THE RED COLOR!\n");
    printf("R:");
    gets(YOUR_TEXT);
    LOOP_YOUR_TEXT(YOUR_TEXT);
    
}

void LOOP_YOUR_TEXT(char text[]){
    
    system("cls");
    int i;
    
    for (i = 0; i < 10; i++)
    {
        LOVE_IS_HERE(RED_COLOR);
        printf("\t %s \t", text);
        sleep(1);
        printf("\n\n");
        LOVE_IS_HERE(COLOR_DEFAULT);
    }

    getch();
}

void LOVE_IS_HERE(int color){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}