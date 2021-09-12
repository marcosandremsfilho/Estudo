#include <iostream>
#include <windows.h>

#define MAXLADO 50
#define MAXCIMA 20

#define muros 219
#define cobra 254

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
    if (i == 9 && j == 21) campo[i][j] = 'S';
    if (i == 9 && j == 22) campo[i][j] = 'N';
    if (i == 9 && j == 23) campo[i][j] = 'A';
    if (i == 9 && j == 24) campo[i][j] = 'K';
    if (i == 9 && j == 25) campo[i][j] = 'E';
    if (i == 9 && j == 26) campo[i][j] = ' ';
    if (i == 9 && j == 27) campo[i][j] = 'G';
    if (i == 9 && j == 28) campo[i][j] = 'A';
    if (i == 9 && j == 29) campo[i][j] = 'M';
    if (i == 9 && j == 30) campo[i][j] = 'E';
    if (i == 10 && j == 22) campo[i][j] = 'B';
    if (i == 10 && j == 23) campo[i][j] = 'Y';
    if (i == 10 && j == 24) campo[i][j] = ' ';
    if (i == 10 && j == 25) campo[i][j] = 'M';
    if (i == 10 && j == 26) campo[i][j] = 'A';
    if (i == 10 && j == 27) campo[i][j] = 'R';
    if (i == 10 && j == 28) campo[i][j] = 'C';
    if (i == 10 && j == 29) campo[i][j] = 'O';
    if (i == 10 && j == 30) campo[i][j] = 'S';
    }
  }
}

int main()
{
  gera();
  logo();
  iniciaCampo();
}
