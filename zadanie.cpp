#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int n=1, i, k, t=1;
	string dane;
	ofstream wyjscie("dane.txt");
	cout<<"Witam w spisie danych produktow\n";
	cout<<"-------------------------------\n";
	cout<<"Prosze o podawanie wyswietlonych informacji (bez poslskich znakow)\n";
	while(t!=0)
	{
		cout<<"Nazwa produktu: "; cin>>dane;//getline nie dzia³a bo nie wiadomo co pomija mi ca³¹ linikê	
		cout<<"Ilosc sztuk: "; cin>>i;
		cout<<"Kod produktu: "; cin>>k;
		cout<<n<<"."<<dane<<" "<<i<<" "<<k<<"\n";
		wyjscie<<n<<"."<<dane<<"|szt:"<<i<<"|kod:"<<k<<"\n";
		n++;
		cout<<"Zakonczyc (tak-0, nie-1)?";cin>>t;
		cout<<endl;
	}
	wyjscie.close();
	cout<<"Podane dane sa dostepne w pliku tekstowym: dane";
	return 0;
}

