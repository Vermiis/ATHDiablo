#include <iostream>
#include <time.h>
#include <string>
#include "walka.h"
using namespace std;
int karma;

class postac
{
public:
	int sila =1; //str*10
	int agi =1;
	int luck=1;
	int def= 1; //def *5
	int sta = 1;
	int hp=sta*100;
	//+eliksiry
}; 
postac ludek; 
class wrog
{
public:
	int sila = 1;
	int agi = 1;
	int luck = 1;
	int def = 1;
	int hp = 1;

};
class cerber
{  //piese³
public:
	int sila = 20;
	int agi = 10;
	int luck = 3;
	int def = 15;
	int hp = 700;
};
class grzanki //final boss :D
{
public:
	int sila = 50;
	int agi = 20;
	int luck = 7;
	int def = 10;
	int hp = 1500;
};

void walka1()
{
	double whp, wstr;
	whp = ludek.hp + 100;
	wstr = 2 +ludek.sila*0.75 ;
	//wagi = ludek.agi;

	cout << "zaatakowac? \n tak = 1\n Nope = 2\n";
	int hit;
	cin >> hit;
	if (hit == 1)
	{
		do
		{
			cout << "zdecydowales sie na atak";
			whp = whp - ludek.sila * 10;
			cout << "przeciwnik ma " << whp << "HP.\n\n";
			cout << "zostales zaatakowany";
			ludek.hp = ludek.hp - wstr * 10;
			cout << "teraz masz " << ludek.hp  << "HP.\n\n";
		} while (whp<=0 || ludek.hp<=0);
	
	}
	else if (hit == 2)
	{
		cout << "wybrales uniknac starcia, ale wrog zaatakowal Cie od tylu";
		ludek.hp = ludek.hp - wstr * 10;
		cout << "teraz masz " << ludek.hp << "HP .\n\n";
	}
}

void komnata1()
{
	int staty, help;

	cout << "Wchodzisz do portierni i spotykasz 12 absolwnetow uczelni, ktorzy Cie wolaja by udzieliæ Ci rad i z kazdym z nich przeprowadzasz rozmowe. Po owocny dialogu dostales 12 ksiag." << endl;
	cout << "Pozyskales 12 punktow wiedzy, ktore mozesz wykorzystac by zwiekszyc swoje umiejetnosci.\n Wpisz 1 aby zwiekszyc sile\n Wpisz 2 aby zwiekszyc zrecznosc\n Wpisz 3 aby zwiekszyc szczescie\n Wpisz 4 aby zwiekszyc obrone \n Wpisz 5 aby zwiekszyc witalnosc" << endl;
	cout << "Nacisnij 9 aby dowiedziec sie wiecej na temat umiejetnosci w grze" << endl;
/*	cin >> help;
	if (help = 9)
	{
		cout << "Sila pozwala wymierzyc mocniejszy cios w kierunku wroga" << endl;
		cout << "Zrecznosc pozwala otweirac zamki i skrzynie oraz do unikania wrogow" << endl;
		cout << "Szczescie pozwala wymierzyc mocniejszy cios w kierunku wroga" << endl;
		cout << "Obrona pozwala przyjac wiecej ciosow od wroga" << endl;
		cout << "Witalnosc zwieksza poziom twojego zycia" << endl;
	}*/
	for (int a=1; a >= 12; a++)
	{
		cin >> staty;
		switch (staty)
		{

		case 1:
		{
			cout << "Wybierasz umiejetnosc sila" << endl;
			ludek.sila += 1;
		}
		case 2:
		{
			cout << "Wybierasz umiejetnosc zrecznosc" << endl;
			ludek.agi += 1;
		}
		case 3:
		{
			cout << "Wybierasz umiejetnosc szczescie" << endl;
			ludek.luck += 1;
		}
		case 4:
		{
			cout << "Wybierasz umiejetnosc obrona" << endl;
			ludek.def += 1;
		}
		case 5:
		{
			cout << "Wybierasz umiejetnosc witalnosc" << endl;
			ludek.sta += 1;
		}
		default:
			cout << "Zly wybor tracisz punkt wiedzy" << endl;
		}
	}
}



void komnata2()
{
	cout << "Otwierasz stare drzwi od palarni. Wewn¹trz panuje pó³mrok, a w powietrzu wci¹¿ unosi siê woñ cudzesów." << endl;
	cout << "Natykasz siê na wkurzon¹ woŸn¹, która rusza w Twoim kierunku z uniesionym bojowo mopem. " << endl;
	//skrzynka(postac.agi)
	//luck?
	walka1();

	//+ skrzynka magiczna
	//bonusy do stat

}
void komnata3()
{
	cout << "Uciekajac po walce wbiegasz w pierwsze napotkane drzwi. Za nimi kryje sie zakurzona szafka na buty. " << endl;
	if (ludek.agi > 3)
	{
		cout << "Otwierasz szafke, wsrod starych trampek znajdujesz butelke wody, ktora dodaje Ci sil" << endl;
		ludek.hp += 100;
	}
	else
	{
		cout << "masz za mala zrecznosc, by poradzic sobie z otwarciem szafki" << endl;
	}


}
void komnata4()
{
	cout << "Poszedles dalej. Przechadzajac sie przez puste sale dostrzegles ruch w zacienionym kacie jednego z pomieszczen " << endl;
	if (ludek.luck <= 3)
	{
		cout << "Natknales sie na fantoma prosto z wydzialu ratownictwa medycznego " << endl;
		walka1();
	}
		
	else
		cout << "Na szczescie to tylko cien drzewa poruszanego wiatrem. Poszedles dalej" << endl;
}

void komnata5()
{
	cout << "Podazales w kierunku wejscia do podziemi uczelni. ";
	if (ludek.agi <= 4)
	{
		cout << "podloga byla swiezo umyta i poslizgnales sie jak ostatnia sierota. Spotkales sie blisko z plytkami. Bolalo. -10 HP" << endl;
		ludek.hp = ludek.hp - 10;
	}
	
	cout << "Dotarles do wlazu. Uniosles go i zeskoczyles na dol" << endl;
}
void komnata6()
{
	cout << "W piwnicy panuje mrok. Idziesz po omacku przed siebie, starajac sie nie potknac. W oddali slyszysz ciche skomlenie.";
	cout << "Idac dalej spotykasz wielkiego pajaka siedzacego na pajeczynie po srodku przejscia." << endl;
	walka1();
	cout << " Otrzepujesz z ubrania resztki przeciwnika i idziesz przed siebie.";
}
void komnata7()
{
	cout << "Spotykasz glodnego studenta siedzacego pod sciana. Prosi Cie o jedzenie. Mozesz go zignorowac albo oddac mu swoja bulke i zupke chinska o smaku krewetkowym" << endl;
	cout << " Co robisz?" << endl;
	cout << "1- daj jedzenie \n ; 2- zignoruj" << endl;
	int decyzja;
	cin >> decyzja;
	switch (decyzja)
	{
	case 1:
	{
		cout << "Student uszczesliwiony zajada sie tym, co od Ciebie otrzymal, ale Ty sam zaczales odczuwac glod..."<<endl;
		cout << "Podczas dalszej wedrowki glod staje sie dokuczliwy, a Ty sam tracisz 100 HP";
		karma = 1;
		ludek.hp = ludek.hp - 100;
	}
	case 2:
	{
		cout << "Idziesz sobie dalej, ignorujac prosby biedaka, ktory zablakal sie w piwnicach uczelni" << endl;
		karma = 0;
	}
	if (ludek.hp <= 0)
	{
		cout << "zginales, wcisnij dowolny klawisz" << endl;
		getchar();
		exit(0);
		
	}
	
	}
}
void komnata8()
{
	cout << "Znajdujesz skrzynke, z ktorej wydobywa sie dziwna won. Probujesz ja otworzyc" << endl;
	if (ludek.agi >= 5)
	{
		cout << "Udalo Ci sie otworzyc skrzynke, znajdujesz w niej splesnialy kask rowerowy dajacy Ci + 1 obrony"<<endl;
		ludek.def += 1;

	}
	else
	{
		cout << "Masz za grube paluchy, zeby poradzic sobie z zamknieciem. Po kilku nieudanych probach oddalasz sie." << endl;
	}
}

void komnata9()
{
	cout << "Dochodzisz do kotlowni. Tam, wsrod gryzacego dymu dostrzegasz grajacego w sudoku na telefonie dozorce. " << endl;
	cout << "mozesz probowac sie przemknac. 1- tak; 2 - nie" << endl;
	int decyzja;
	cin >> decyzja;
	switch (decyzja)
	{
	case 1:
	{
		if (ludek.agi >= 4)
		{
			cout << "Udaje Ci sie niepostrzezenie przemknac do kolejnego pomieszczenia" << endl;

		}
		else
		{
			cout << "Dozorca dostrzega jak sie skradasz. Odklada wiekowa Nokie i rzuca w Ciebie weglem" << endl;
			ludek.hp = ludek.hp - 40;
		}
		walka1();

	}
	case 2:
	{	
		cout << "Podejmujesz walke" << endl;
		walka1();

	}

	
	default:
		cout << "zla opcja";
		break;
	}
	
}

void komnata10()
{
	cout << "Zmeczony walka z dozorca docierasz do apteczki. Probujesz ja otworzyc, ale slyszysz za soba kroki. To stary kundel, wygladajacy na glodego" << endl;
	cout << "Mozesz podzielic sie z nim sucharami, albo zachowac wszystko dla siebie. Co wybierasz? (1- podziel sie; 2- wez wszystko dla siebie" << endl;
	int decyzja;
	//cin >> decyzja;
	do
	{
		cout << "(1- podziel sie; 2- wez wszystko dla siebie" << endl;
		cin >> decyzja;
	} while (decyzja == 1 || decyzja == 2);

	switch (decyzja)
	{
	case 1:
	{
		cout << "Opatrzyles psa, przez co zostal Ci tylko jeden opatrunek. Uzywasz go na sobie, przez co zyskujesz + 50 HP" << endl;
		ludek.hp += 50;
		karma += 1;
	}
	case 2:
	{
		cout << "Uzywasz bandazy, ktore pomagaja Ci opatrzec rany. +150 HP" << endl;
		ludek.hp += 150;
	}
	}


}



void komnata11()
{
	cout << "Wchodzisz do pomieszczenia gdzie znajduje sie xbox. Czy chcesz zagrac?" << endl;

	int decyzja;
	//cin >> decyzja;
	do
	{
		cout << "1-tak, 2- nie";
		cin >> decyzja;
	} while (decyzja == 1 || decyzja == 2);

	switch (decyzja)
	{
	case 1:
	{
		cout << "Uslyszal Cie kierownik dzialu informatycznego. Wyzywa Cie na pojedynek, ktorego powodzenie zalezy od Twojej zrecznosci i szczescia" << endl;
		if (ludek.luck + ludek.agi >= 10)
		{
			cout << "wygrywasz pojedynek, dostajesz +1 do zrecznosci" << endl;
			ludek.agi += 1;
		}
		else
		{
			cout << "Przegrywasz pojedynek. Smutek i zmeczenie powoduja utrate 50 HP";
			ludek.hp = ludek.hp - 50;
		}

	}
	case 2:
	{
		cout << "Probujesz sie przemknac obok drzwi";
		if (ludek.agi + ludek.luck >= 9)
		{
			cout << "Udaje Ci sie przemknac " << endl;
		}
		else
			walka1();
	}


	}
}
void komnata12()
{
	cout << "Za pomieszczeniem kierownika znajdujesz stary komputer, ktory mozesz rozkrecic. " << endl;
	if (ludek.agi >= 5)
	{
		cout << "Wewnatrz PC byl calkiem spory i ciezki dysk, ktorego mozesz uzyc jako piesciaka. +1 do sily." << endl;
		ludek.sila += 1;
	}
	else
	{
		cout << "Twoje umiejetnosci sa za niskie, by rozkrecic komputer, skaleczyles sie, gdy usilowales uzyc srubokreta. -50HP" << endl;
		ludek.hp = ludek.hp - 50;
	}
}
void komnata13()
{

}



int main()

{
	int wybor;

	cout << " Stajesz przed wejsciem do ATH. Mozesz zawrocic uczyc sie dalej C++ lub wejsc, aby przezyc(lub nie) wielka przygode"<<endl;
	cout << "Czy wchodzisz? T/N" << endl;
	cin >> wybor;
	switch (wybor)
	{
		// zmiana na T/N 
	case 1:
	{
		cout << "Wrociles do domu. Matole. " << endl;
		break;
	}

	case 2:
	{
		cout << "blala" << endl;
		komnata1();
		cout << "opis komnaty 2 :" <<endl;
		komnata2();
		//+ uczynki glob;
		komnata3(); komnata4(); komnata5(); komnata6(); komnata7();
		komnata9(); komnata10(); komnata11(); komnata12(); komnata13();



		break;
	}
	

	
	}
	getchar();
	getchar();
}