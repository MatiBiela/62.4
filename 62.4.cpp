#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	int countOf6(int number)
	{
	int count6=0;
 	while (number > 0)
  		{
       		if (number %10 == 6)
            count6++;
       		number/=10;
    return count6;
}
 	
	count6=0;
	while (number > 0)
	{
	
 	if(number %8 == 6) {
 		count6++;
 		number /= 8;
 		}
 	return count6;
 }
 }
int main(int argc, char** argv) {
	ifstream input;
	ifstream output;
	int liczbydec, liczbyoct;
	input.open("liczby1.txt");
	output.open("liczby2.txt");
	
	if(input.good()) {
		while(!input.eof()) {
			for(int i=0; i<1000; i++)
			{
			input >> oct >> liczbyoct;
			output >> dec >> liczbydec;	
			count0f6(liczbydec, liczbyoct)
		}
		}
		cout << "Liczb 6 w liczbach dziesietnych jest: " << countOf6(liczbydec);
		cout << "Liczb 6 w liczbach osemkowych jest: " << count0f6(liczbyoct);
	}
	input.close();
	output.close();

	return 0;
}
