#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string dane;
	cin>>dane;
    fstream wyjscie; 
	wyjscie.open( "dane.txt", ios::in | ios::out | ios::app );
	wyjscie<<dane<<endl;
	
    return( 0 );
}
