#include <iostream>
#include <
using namespace std;

wstring tetromino[7];

int nFieldWidth = 12;
int nFieldHeight = 18;

unsigned char *pField = nullptr;


int Rotate(int px, int py, int r)
{
    switch (r%4)
    {
        case 0: return py * 4 + px;
        case 1: return 12 + py - (px * 4);
        case 2: return 15 - (py * 4) - px;
        case 3: return 3 - py + (px * 4);
    }
    return 0;
}


int main()
{
    //Criando peças/assets
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".XX.");
    tetromino[2].append(L".X..");
    tetromino[2].append(L".X..");
    tetromino[2].append(L"....");

    tetromino[3].append(L"..X.");
    tetromino[3].append(L"..X.");
    tetromino[3].append(L"..X.");
    tetromino[3].append(L"..X.");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"..X.");

    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");

    pField = new unsigned char[nFieldWidth*nFieldHeight]; // Inicializando o pField(campo de jogo) como altura e largura
    //Definindo as bbordas do campo
    for(int x = 0; x < nFieldWidth; x++)
    {
        for(int y = 0; y < nFieldHeight; x++)
        {
            pField[Y*nFieldWidth + x] = (x == 0 || x = nFieldWidth - 1 || y = nFieldHeight -1) ? 9 : 0
        }
        wchar_t* screen = new wchar_t[nFieldWidth * nFieldHeight];
        HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
        SetConsoleActiveScreenBuffer(hConsole);
        DWORD dwBytesWritten = 0;
    }
}