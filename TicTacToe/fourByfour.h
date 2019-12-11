#pragma once

class Fourbyfour
{
public:
	void printBoard4x4(int ticBoard[][4], size_t width, size_t height);

	int ValidChoice4x4(int playerChoice, int ticBoard[][4], size_t width, size_t height, int turnPlayer);

	int CheckForWin4x4(int ticBoard[][4], size_t width, size_t height);
};