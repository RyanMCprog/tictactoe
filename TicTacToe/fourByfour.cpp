#include "fourByfour.h"
#include <iostream>

void Fourbyfour::printBoard4x4(int ticBoard[][4], size_t width, size_t height)
{
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			if (ticBoard[i][j] < 1)
			{
				std::cout << "X" << ' ';
			}
			else if (ticBoard[i][j] > 100)
			{
				std::cout << "O" << ' ';
			}
			else
			{
				std::cout << ticBoard[i][j] << ' ';
			}
		}
		std::cout << std::endl;
	}
}

int Fourbyfour::ValidChoice4x4(int playerChoice, int ticBoard[][4], size_t width, size_t height, int turnPlayer)
{
	if (playerChoice > 0 && playerChoice < 17)
	{
		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				if (ticBoard[i][j] == playerChoice)
				{
					if (turnPlayer == 0)
						ticBoard[i][j] = -1;
					else
						ticBoard[i][j] = 101;
					return true;
				}
			}
		}
	}

	return false;
}

int Fourbyfour::CheckForWin4x4(int ticBoard[][4], size_t width, size_t height)
{
	//checks if player 1 wins
	//rows
	if (ticBoard[0][0] == -1 && ticBoard[0][1] == -1 && ticBoard[0][2] == -1 && ticBoard[0][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[1][0] == -1 && ticBoard[1][1] == -1 && ticBoard[1][2] == -1 && ticBoard[1][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[2][0] == -1 && ticBoard[2][1] == -1 && ticBoard[2][2] == -1 && ticBoard[2][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[3][0] == -1 && ticBoard[3][1] == -1 && ticBoard[3][2] == -1 && ticBoard[3][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	//columns
	else if (ticBoard[0][0] == -1 && ticBoard[1][0] == -1 && ticBoard[2][0] == -1 && ticBoard[3][0] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][1] == -1 && ticBoard[1][1] == -1 && ticBoard[2][1] == -1 && ticBoard[3][1] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == -1 && ticBoard[1][2] == -1 && ticBoard[2][2] == -1 && ticBoard[3][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][3] == -1 && ticBoard[1][3] == -1 && ticBoard[2][3] == -1 && ticBoard[3][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	//diagonals
	else if (ticBoard[0][0] == -1 && ticBoard[1][1] == -1 && ticBoard[2][2] == -1 && ticBoard[3][3] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][3] == -1 && ticBoard[1][2] == -1 && ticBoard[2][1] == -1 && ticBoard[3][0] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	//checks if Player 2 wins
	//rows
	if (ticBoard[0][0] == 101 && ticBoard[0][1] == 101 && ticBoard[0][2] == 101 && ticBoard[0][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[1][0] == 101 && ticBoard[1][1] == 101 && ticBoard[1][2] == 101 && ticBoard[1][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[2][0] == 101 && ticBoard[2][1] == 101 && ticBoard[2][2] == 101 && ticBoard[2][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[3][0] == 101 && ticBoard[3][1] == 101 && ticBoard[3][2] == 101 && ticBoard[3][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	//columns
	else if (ticBoard[0][0] == 101 && ticBoard[1][0] == 101 && ticBoard[2][0] == 101 && ticBoard[3][0] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][1] == 101 && ticBoard[1][1] == 101 && ticBoard[2][1] == 101 && ticBoard[3][1] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == 101 && ticBoard[1][2] == 101 && ticBoard[2][2] == 101 && ticBoard[3][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][3] == 101 && ticBoard[1][3] == 101 && ticBoard[2][3] == 101 && ticBoard[3][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	//diagonals
	else if (ticBoard[0][0] == 101 && ticBoard[1][1] == 101 && ticBoard[2][2] == 101 && ticBoard[3][3] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][3] == 101 && ticBoard[1][2] == 101 && ticBoard[2][1] == 101 && ticBoard[3][0] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] != 1 && ticBoard[0][1] != 2 && ticBoard[0][2] != 3 && ticBoard[0][3] != 4 && ticBoard[1][0] != 5 && ticBoard[1][1] != 6 && ticBoard[1][2] != 7 && ticBoard[1][3] != 8 && ticBoard[2][0] != 9 && ticBoard[2][1] != 10 && ticBoard[2][2] != 11 && ticBoard[2][3] != 12 && ticBoard[3][0] != 13 && ticBoard[3][1] != 14 && ticBoard[3][2] != 15 && ticBoard[3][3] != 16)
	{
		std::cout << "Draw" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}
