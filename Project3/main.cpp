#include <iostream>

#include "Player.h"


int main()
{
	Player* player = new Player(100);
	cout << player->GetHealth() << endl;
	player->ButtonPressed();
	player->ButtonPressed();

	cin.get();
	return 0;
}