/*
  Hofstadter-Funktion - rekursiv
  Autor: Dirk Krummacker
  Programmierungsbeginn: 13-Jun-96
  Letzte Änderung: 13-Jun-96
  Beschreibung:
    Rekursive Berechnung der Hofstadter-Funktion. Wann stockt der PC ???
*/

#include <stdio.h>  /* Ein-/Ausgabebibliothek */

int hof (int x);

void main()  /* Hauptprogramm */
{
  /* Variablendeklaration */
  int lauf, grenze=50;  /* Obergrenze */

  /* Überschrift */
  printf("\nHofstadter-Funktion:");
  printf("\n");

  /* Schleife */
  for (lauf=1; lauf<grenze; lauf++)
  {
    printf("\nhof(%i) = %i", lauf, hof(lauf));
  }
} 

int hof (int x)
{
  if ((x==1) || (x==2))
    return 1;
  else
    return hof(x-hof(x-1))+hof(x-hof(x-2));
}
