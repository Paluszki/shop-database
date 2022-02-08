#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void pauseProgram()
{
	char enter;
	cout<<"prosze wcisnac enter e ";
	cin>>enter;
}

void zapis()
{
	system("cls");
	string zapisz;
	cin>>zapisz; 
    fstream wyjscie; 
	wyjscie.open( "inf.txt", ios::in | ios::out | ios::app );
	wyjscie<<zapisz<<endl;
	pauseProgram();
}

bool wypisz(string inf)
{ 	
	
	system("cls");
	ifstream plik;
 	plik.open(inf.c_str());
	if(!plik.good())
	{
		return false;
	}	
	string wiersz;
	while(getline(plik,wiersz)) 
	{
		cout<<wiersz<<endl;
	}
	plik.close();
	pauseProgram();
	return true;
}

int main()
{
	short menu;	
	for(;;)
	{
		system("cls");
		cout<<"Siema\n";
		cout<<"1-odczyt pliku\n";
		cout<<"2-zapis\n";
		cout<<"3-wyjscie z programu\n";
		cin>>menu;
		switch(menu)
		{
			case 1:
				wypisz("inf.txt");
				break;
			case 2:
				zapis();
				break;
			default:
				return 0;
				break;
		}
	}
	
    return( 0 );
}
