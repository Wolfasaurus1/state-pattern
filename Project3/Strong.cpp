#include "Strong.h"
#include "Player.h"

void Strong::ButtonPressed() {
	this->_player->SetHealth(_player->GetHealth() + 10);
	cout << this->_player->GetHealth() << endl;
}

