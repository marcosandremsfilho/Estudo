#include <iostream>
#include <windows.h>
#include <iomanip>

#define MAXLADO 50
#define MAXCIMA 20

#define muros 219
#define cobra 254
#define meioX 25
#define meioY 10
#define TEMPO 100
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
  system("cls");
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
    if (i == meioY - 2 && j == meioX - 4)
    {
      campo[i][j] = 'S';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX - 3)
    {
      campo[i][j] = 'N';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX - 2)
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX - 1)
    {
    campo[i][j] = 'K';
    Sleep(TEMPO);
    iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX)
    {
    campo[i][j] = 'E';
    Sleep(TEMPO);
    iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX + 2)
    {
      campo[i][j] = 'G';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX + 3)
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX + 4)
    {
    campo[i][j] = 'M';
    Sleep(TEMPO);
    iniciaCampo();
    }
    if (i == meioY - 2 && j == meioX + 5)
    {
    campo[i][j] = 'E';
    Sleep(TEMPO);
    iniciaCampo();
    }
    if (i == meioY -1 && j == meioX)
    {
    campo[i][j] = 'B';
    Sleep(TEMPO);
    iniciaCampo();
    }
    if (i == meioY -1 && j == meioX + 1)
    {
      campo[i][j] = 'Y';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX - 5)
    {
      campo[i][j] = 'M';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX - 4)
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX - 3)
    {
      campo[i][j] = 'R';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX - 2)
    {
      campo[i][j] = 'C';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX - 1)
    {
      campo[i][j] = 'O';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX)
    {
      campo[i][j] = 'S';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 1)
    {
      campo[i][j] = ' ';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 2)
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 3)
    {
      campo[i][j] = 'N';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 4)
    {
      campo[i][j] = 'D';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 5)
    {
      campo[i][j] = 'R';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY && j == meioX + 6)
    {
      campo[i][j] = 'E';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 1 && j == meioX)
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 1 && j == meioX + 1)
    {
      campo[i][j] = 'N';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 1 && j == meioX + 2 )
    {
      campo[i][j] = 'D';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX - 4 )
    {
      campo[i][j] = 'J';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX - 3 )
    {
      campo[i][j] = 'O';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX - 2 )
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX - 1 )
    {
      campo[i][j] = 'O';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 1)
    {
      campo[i][j] = 'T';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 2 )
    {
      campo[i][j] = 'A';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 3 )
    {
      campo[i][j] = 'D';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 4 )
    {
      campo[i][j] = 'I';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 5 )
    {
      campo[i][j] = 'N';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if (i == meioY + 2 && j == meioX + 6 )
    {
      campo[i][j] = 'I';
      Sleep(TEMPO);
      iniciaCampo();
    }
    }
  }
}

void apaga()
{
  for(int i = meioY - 2; i<= MAXCIMA - 1; i++)
  {
    for(int j = meioX - 6; j<= MAXLADO - 1 ; j++)
    {
      if(i == meioY - 2 && j >= meioX - 4 && j <= meioX + 5)
      {
       campo[i][j] = ' ';
       Sleep(TEMPO);
       iniciaCampo();
     }
     if(i == meioY - 1 && j >= meioX && j <= meioX + 1)
     {
      campo[i][j] = ' ';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if(i == meioY && j >= meioX - 6 && j <= meioX + 6)
    {
     campo[i][j] = ' ';
     Sleep(TEMPO);
     iniciaCampo();
    }
    if(i == meioY + 1 && j >= meioX && j <= meioX + 2)
    {
      campo[i][j] = ' ';
      Sleep(TEMPO);
      iniciaCampo();
    }
    if(i == meioY + 2 && j >= meioX - 4 && j <= meioX + 6)
    {
      campo[i][j] = ' ';
      Sleep(TEMPO);
      iniciaCampo();
    }
  }

  }
}


int main()
{
  gera();
  logo();
  iniciaCampo();
  Sleep(TEMPO);
  apaga();
}
