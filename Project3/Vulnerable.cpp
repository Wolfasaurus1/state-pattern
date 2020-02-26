#include "Vulnerable.h"
#include "Player.h"

void Vulnerable::ButtonPressed() {
	this->_player->SetHealth(_player->GetHealth() - 10);
	cout << this->_player->GetHealth() << endl;
}

