// Lab Excercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Room
{
private:
	int Hight;
	int Width;
public:
	Room();
	Room(int);
	Room(int,int);
	~Room();
};


Room::Room()
{
	Hight = 0;
	Width = 0;
	cout << "Default constructor." << endl << "Height = " << Hight<< "\tWidth = " << Width << endl;
}

Room::Room(int h)
{
	Hight = h;
	Width = 0;
	cout << "Default constructor." << endl << "Height = " << Hight<< "\tWidth = " << Width << endl;;
}

Room::Room(int h, int w)
{
	Hight = h;
	Width = w;
	cout << "Default constructor." << endl << "Height = " << Hight<< "\tWidth = " << Width << endl;;
}

Room::~Room()
{
	cout << "Destructor Called." << endl;
}


int main()
{
    Room r1;
	int h,w;
	cout << "Enter Height and Width of the Room (separated by white space) " << endl;
	cin >> h;
	cin >> w;
	Room r2(h);
	Room r3(h,w);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
