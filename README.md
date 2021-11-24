# K04---Dynamicka-alokace-pameti

Vytvořte program, který bude splňovat následující požadavky:

Vytvořte funkci, která bude dynamicky alokovat pole čásel (int) o zadané délce. Délka bude předána funkci jako parametr. Naalokované pole bude vráceno jako pointer v návratovém typu funkce (ne jako další argument funkce).

Vytvořte funkci, která do naalokovaného pole nakopíruje hodnoty předané na standardním vstupu, kde první řádek obsahuje číslo, které říká, kolik čísel bude předáno (naše délka pole). Druhý řádek pak obsahuje čísla, která budou nakopírována do dynamicky alokonaného pole. Funkce bude akceptovat pointer na pole, délku pole.

Vytvořte funkci, která projde čísla pole a vytiskne na standardní výstup popořadě každé číslo tak jak bylo načteno a také to, zdali je číslo sudé (odd) nebo liché (even). Funkce akceptuje dva parametry: pointer na pole a délku pole.

Vytisknutí proveďte ve funkci main:

#include <stdio.h>

int main() {
  return 0;
}
Program můžete zkompilovat a spustit pomocí:

$ gcc main.c -o main
$ ./main
Příklad vstupu:

4
1 2 3 4
Příklad výstupu:

1 odd
2 even
3 odd
4 even
HINT: Funkce pro získání pointeru na novou dynamicky alokovanou paměť se nazýva malloc (dokumentace např. zde, zde nebo zde).

HINT: Dynamicky alokovanou paměť je třeba také uvolnit. Na to slouží funkce free (dokumentace např. zde, zde nebo zde).
