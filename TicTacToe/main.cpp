#include <iostream>
#include "fourByfour.h"
//prints board for 3x3
void printBoard(int ticBoard[][3], size_t width, size_t height)
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


//checks if a choice is valid for 3x3
int ValidChoice(int playerChoice, int ticBoard[][3], size_t width, size_t height, int turnPlayer)
{
	if (playerChoice > 0 && playerChoice < 10)
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
//checks for wins in 3x3 board
int CheckForWin(int ticBoard[][3], size_t width, size_t height)
{
	//checks if player 1 wins
	if (ticBoard[0][0] == -1 && ticBoard[0][1] == -1 && ticBoard[0][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[1][0] == -1 && ticBoard[1][1] == -1 && ticBoard[1][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[2][0] == -1 && ticBoard[2][1] == -1 && ticBoard[2][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] == -1 && ticBoard[1][0] == -1 && ticBoard[2][0] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][1] == -1 && ticBoard[1][1] == -1 && ticBoard[2][1] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == -1 && ticBoard[1][2] == -1 && ticBoard[2][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] == -1 && ticBoard[1][1] == -1 && ticBoard[2][2] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == -1 && ticBoard[1][1] == -1 && ticBoard[2][0] == -1)
	{
		std::cout << "Player 1 Wins" << std::endl;
		return true;
	}
	//checks if Player 2 wins
	if (ticBoard[0][0] == 101 && ticBoard[0][1] == 101 && ticBoard[0][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[1][0] == 101 && ticBoard[1][1] == 101 && ticBoard[1][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[2][0] == 101 && ticBoard[2][1] == 101 && ticBoard[2][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] == 101 && ticBoard[1][0] == 101 && ticBoard[2][0] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][1] == 101 && ticBoard[1][1] == 101 && ticBoard[2][1] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == 101 && ticBoard[1][2] == 101 && ticBoard[2][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] == 101 && ticBoard[1][1] == 101 && ticBoard[2][2] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][2] == 101 && ticBoard[1][1] == 101 && ticBoard[2][0] == 101)
	{
		std::cout << "Player 2 Wins" << std::endl;
		return true;
	}
	else if (ticBoard[0][0] != 1 && ticBoard[0][1] != 2 && ticBoard[0][2] != 3 && ticBoard[1][0] != 4 && ticBoard[1][1] != 5 && ticBoard[1][2] != 6 && ticBoard[2][0] != 7 && ticBoard[2][1] != 8 && ticBoard[2][2] != 9)
	{
		std::cout << "Draw" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int ScreenClose = 0;
	int board[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int board4x4[][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int GridNum = 0;
	int playerTurn = 0;
	int gameOver = 0;
	char Rematch = ' ';
	int boardNum = 0;
	Fourbyfour Board4;

	//Player picks what board they want to use
	while (boardNum != 3 && boardNum != 4)
	{
		std::cout << "what board do you want 3 or 4?" << std::endl;
		std::cin >> boardNum;
		std::cout << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

	}

	while (ScreenClose == 0)
	{
		if (boardNum == 3)
		{
			//player 1 turn starts
			printBoard(board, 3, 3);

			while (ValidChoice(GridNum, board, 3, 3, playerTurn) == false)
			{
				std::cout << "Player 1 Start" << std::endl;
				std::cin >> GridNum;
				std::cout << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}

			if (CheckForWin(board, 3, 3) == true)
			{
				printBoard(board, 3, 3);
				gameOver = 1;
			}
			//player 2 turn starts
			if (gameOver == 0)
			{
				playerTurn = 1;

				printBoard(board, 3, 3);

				while (ValidChoice(GridNum, board, 3, 3, playerTurn) == false)
				{
					std::cout << "Player 2 Start" << std::endl;
					std::cin >> GridNum;
					std::cout << std::endl;
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
				}

				playerTurn = 0;

				if (CheckForWin(board, 3, 3) == true)
				{
					printBoard(board, 3, 3);
					gameOver = 1;
				}
			}

		}
		if (boardNum == 4)
		{
			//player 1 turn starts
			Board4.printBoard4x4(board4x4, 4, 4);

			while (Board4.ValidChoice4x4(GridNum, board4x4, 4, 4, playerTurn) == false)
			{
				std::cout << "Player 1 Start" << std::endl;
				std::cin >> GridNum;
				std::cout << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}

			if (Board4.CheckForWin4x4(board4x4, 4, 4) == true)
			{
				Board4.printBoard4x4(board4x4, 4, 4);
				gameOver = 1;
			}
			//player 2 turn starts
			if (gameOver == 0)
			{
				playerTurn = 1;

				Board4.printBoard4x4(board4x4, 4, 4);

				while (Board4.ValidChoice4x4(GridNum, board4x4, 4, 4, playerTurn) == false)
				{
					std::cout << "Player 2 Start" << std::endl;
					std::cin >> GridNum;
					std::cout << std::endl;
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
				}

				playerTurn = 0;

				if (Board4.CheckForWin4x4(board4x4, 4, 4) == true)
				{
					Board4.printBoard4x4(board4x4, 4, 4);
					gameOver = 1;
				}
			}
		}

		//if the game ends
		if (gameOver == 1)
		{
			while (Rematch != 'Y' && Rematch != 'y' && Rematch != 'N' && Rematch != 'n')
			{
				std::cout << "Rematch? Y/N" << std::endl;
				std::cin >> Rematch;
				std::cout << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}

			if (Rematch == 'Y' || Rematch == 'y')
			{
				int reset = 0;
				if (boardNum == 3)
				{
					for (int i = 0; i < 3; ++i)
					{
						for (int j = 0; j < 3; ++j)
						{
							reset++;
							board[i][j] = reset;
						}
					}
				}
				if (boardNum == 4)
				{
					for (int i = 0; i < 4; ++i)
					{
						for (int j = 0; j < 4; ++j)
						{
							reset++;
							board4x4[i][j] = reset;
						}
					}
				}
				gameOver = 0;
				GridNum = 0;
				Rematch = ' ';
			}

			if (Rematch == 'N' || Rematch == 'n')
			{
				ScreenClose = 1;
			}
		}
		
	}
}


