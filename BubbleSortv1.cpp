
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void BubbleSort(int* tab, int amount) {                     //funkcja sortowania, sortujaca od najwiekszej, do najmniejszej.
	for (int i = 1; i < amount; i++) {
		for (int j = 1; j < amount; j++) {
			if (tab[j] < tab[j + 1]) {
				int bufor;
				bufor = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = bufor;
			}
		}
	}

}




int main()
{ 
	int *tabel;         
	int x;
	cout << "Witaj, ile liczb chcialbys przesortowac?" << endl;
	cin >> x;               //pobranie informacji od uzytkownika, ile potrzebuje losowych liczb    
	tabel = new int[x];             //utworzenie tablicy, ktora przechowa wartosci losowych liczb
	system("cls");
	cout << "LICZBY WYLOSOWANE:" << endl;
	srand(time(NULL));
	for (int i = 1; i < x; i++) {                    //petla, losujaca losowe liczby, w zaleznosci od ilosci liczb ktora petla ta ma wykonac.
		tabel[i] = rand() % 9 + 1; 
			cout << tabel[i] << endl;
	}
	BubbleSort(tabel, x);                          //uzycie funkcji sortowania, aby posortowac liczby, dla tabeli, ktora przetrzymuje liczby, oraz ilosci, ktora zostala pobrana od uzytkownika
	cout << "Liczby po przesortowaniu: " << endl;
	for (int j = 1; j < x; j++) {                //petla wypisujaca posortowane juz liczby.
		cout << tabel[j] << endl;
	}
	


}


