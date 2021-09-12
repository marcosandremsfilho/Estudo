#include <iostream>
#include <windows.h>
#include <iomanip>

#define MAXLADO 50
#define MAXCIMA 20

#define muros 219
#define cobra 254
#define meioX 25
#define meioY 10
#define TEMPO 1500
using namespace std;

char campo[MAXCIMA][MAXLADO];

void gera()
{
  for(int i = 0; i<= MAXCIMA; i++)
  {
    for(int j = 0; j<= MAXLADO; j++)
    {
      campo[i][j] = ' ';

      if(j == 0 || j == MAXLADO) campo[i][j] = muros;

      else if(i == 0 || i == MAXCIMA ) campo[i][j] = muros;
    }
  }
}

void iniciaCampo()
{
  for(int i = 0; i<= MAXCIMA; i++)
  {
    for(int j = 0; j<= MAXLADO; j++)
    {
    cout << campo[i][j];
    if (j == MAXLADO) cout << "\n";
    }
  }
}

void logo()
{
  for(int i = 0; i<= MAXCIMA; i++)
  {
    for(int j = 0; j<= MAXLADO; j++)
    {
    if (i == meioY - 2 && j == meioX - 4) campo[i][j] = 'S';
    if (i == meioY - 2 && j == meioX - 3) campo[i][j] = 'N';
    if (i == meioY - 2 && j == meioX - 2) campo[i][j] = 'A';
    if (i == meioY - 2 && j == meioX - 1) campo[i][j] = 'K';
    if (i == meioY - 2 && j == meioX) campo[i][j] = 'E';
    if (i == meioY - 2 && j == meioX + 1) campo[i][j] = ' ';
    if (i == meioY - 2 && j == meioX + 2) campo[i][j] = 'G';
    if (i == meioY - 2 && j == meioX + 3) campo[i][j] = 'A';
    if (i == meioY - 2 && j == meioX + 4) campo[i][j] = 'M';
    if (i == meioY - 2 && j == meioX + 5) campo[i][j] = 'E';
    if (i == meioY -1 && j == meioX) campo[i][j] = 'B';
    if (i == meioY -1 && j == meioX + 1) campo[i][j] = 'Y';
    if (i == meioY && j == meioX - 5) campo[i][j] = 'M';
    if (i == meioY && j == meioX - 4) campo[i][j] = 'A';
    if (i == meioY && j == meioX - 3) campo[i][j] = 'R';
    if (i == meioY && j == meioX - 2) campo[i][j] = 'C';
    if (i == meioY && j == meioX - 1) campo[i][j] = 'O';
    if (i == meioY && j == meioX) campo[i][j] = 'S';
    if (i == meioY && j == meioX + 1) campo[i][j] = ' ';
    if (i == meioY && j == meioX + 2) campo[i][j] = 'A';
    if (i == meioY && j == meioX + 3) campo[i][j] = 'N';
    if (i == meioY && j == meioX + 4) campo[i][j] = 'D';
    if (i == meioY && j == meioX + 5) campo[i][j] = 'R';
    if (i == meioY && j == meioX + 6) campo[i][j] = 'E';
    if (i == meioY + 1 && j == meioX) campo[i][j] = 'A';
    if (i == meioY + 1 && j == meioX + 1) campo[i][j] = 'N';
    if (i == meioY + 1 && j == meioX + 2 ) campo[i][j] = 'D';
    if (i == meioY + 2 && j == meioX - 4 ) campo[i][j] = 'J';
    if (i == meioY + 2 && j == meioX - 3 ) campo[i][j] = 'O';
    if (i == meioY + 2 && j == meioX - 2 ) campo[i][j] = 'A';
    if (i == meioY + 2 && j == meioX - 1 ) campo[i][j] = 'O';
    if (i == meioY + 2 && j == meioX) campo[i][j] = ' ';
    if (i == meioY + 2 && j == meioX + 1) campo[i][j] = 'T';
    if (i == meioY + 2 && j == meioX + 2 ) campo[i][j] = 'A';
    if (i == meioY + 2 && j == meioX + 3 ) campo[i][j] = 'D';
    if (i == meioY + 2 && j == meioX + 4 ) campo[i][j] = 'I';
    if (i == meioY + 2 && j == meioX + 5 ) campo[i][j] = 'N';
    if (i == meioY + 2 && j == meioX + 6 ) campo[i][j] = 'I';
    }
  }
}

void apaga()
{
  for(int i = 1; i<= MAXCIMA - 1; i++)
  {
    for(int j = 1; j<= MAXLADO - 1 ; j++)
    {
      campo[i][j] = ' ';
    }
  }
  system("cls");
  iniciaCampo();
}

int main()
{
  gera();
  logo();
  iniciaCampo();
  Sleep(TEMPO);
  apaga();
}
