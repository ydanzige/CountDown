#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;

/*
Blinking some text on console
params:
char* txt - the txt that you whant to blink
int numBlink - number of blinking
int sleepTimeMs - the dilay of blinking
*/
void blinking(char* txt, int numBlink, int sleepTimeMs)
{
	system("cls");
	for (int i = 0; i < numBlink; i++)
	{
		cout << "\r" << txt;
		this_thread::sleep_for(chrono::milliseconds(sleepTimeMs));
		system("cls");
		this_thread::sleep_for(chrono::milliseconds(sleepTimeMs));

	}

}
void main() {

	for (int i = 12; i > -1; i--)
	{
		cout << "\r" << "Time until takeoff : " << i << "  ";
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	blinking("Takeoff", 5, 1000);
}