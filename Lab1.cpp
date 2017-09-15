// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	char filename[20];
	ifstream filone;
	double firstNum, secondNum, temp(0), lasttemp;
	double secondToLast(0), last(0);
	int contador = 0;
	//int i = 0; 

	cout << "Please enter the name of the file: ";
	cin.getline(filename, 20);
	filone.open(filename);

	/*if (filone.fail())
	{
		cerr << "Could not Open File" << endl;
		system("Pause");

	}*/

	while (filone>> temp && !filone.fail())
	{
		if (contador == 0)
		{
			//filone >> firstNum;
			firstNum = temp; 
		}
		else if (contador == 1)
		{
			secondNum = temp;
		}
		if (contador > 0)
		{
			secondToLast = last; 
		}
		last = temp;
		//filone >> temp; 

		contador++;
	}
		cout << "Amount of Numbers: " << contador << endl;
		cout << "First Number: " << firstNum << endl;
		cout << "Second Number: " << secondNum << endl;

		cout << "Second to last: " << secondToLast << endl;
		cout << "Last: " << last << endl;
		
		/*cout << filone.beg; 
		filone.seekg(0,filone.beg);
		
		while (!filone.eof())
		{
			if (i == contador)
			{
				filone >> last; 
			}
			else if (i == contador - 1)
			{
				filone >> secondNum;
			}
			else 
			{
				filone >> temp;
			}
			//cout << j << endl;
			i++;
		}
		cout << "Second to Last: " << secondNum << endl;
		cout << "Last: " << last << endl;*/
		
    return 0;
}

