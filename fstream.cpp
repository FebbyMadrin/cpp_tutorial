#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string line;

	ofstream myfileI ("input.txt", ios::app);
	if (myfileI.is_open())
	{
		myfileI<<"\n I am adding a line.123 \n";
		 myfileI.close();
	}
	else cout<<"Unable to open file for writing";

	

	ifstream myfileO ("input.txt");
	if (myfileO.is_open())
	{
		while (getline(myfileO, line))

		{
			cout<<line<<'\n';
		}
		myfileO.close();
	}
	else cout << "tidak bisa membuka file";

	return 0;
}

