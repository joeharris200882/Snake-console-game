#include <conio.h>
#include <iostream>

using namespace std;

const int width = 100;
const int height = 20;
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

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
				if (j == 0) cout << "*";
				else if (i == x && j == y) cout << "O";
				else if (i == fruitX && j == fruitY) cout << "F";
				else  cout << " ";
			
			for (int i = 0; i < width; i++)

			if ( i = width) cout << "*";
			cout << endl;

			
		}
		for (int i = 0; i < width; i++)
			cout << "%";
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