#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mostra(string s, short x, short y)
{
	gotoxy(x, y);
	cout << s;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string msg = "Boa noite a todos!";
	int col;
    int lin;

    col = 25;

    gotoxy(col, 5);
    cout << msg;
	
	for(char c: msg){
        for(lin = 6; lin <= 20; lin++){

            gotoxy(col, lin);
            cout << c;

            gotoxy(col, lin -1);
            cout << c;

            Sleep(30);

        }
        col ++;
    }
    gotoxy(0,21 );
	
	return 0;
}