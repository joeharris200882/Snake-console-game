#include <conio.h>
#include <iostream>

using namespace std;

const int width = 50;
const int height = 50;
bool gameOver;
int x, y, fruitX, fruitY, score;



void setup()
{
	int x = width / 2;
	int y = height / 2;
	int fruitX = rand() % width;
	int fruitY = rand() % height;
	gameOver = false;
	int score = 0;
}

void draw()
{
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "*";
		cout << endl;

}

void input()
{

}

void logic()
{

}

int main()
{
	while (!gameOver)
	{
		setup();
		draw();
		input();
		logic();

	}
	return 0;
}