#include "Player.h"
#include "Vulnerable.h"
#include "Strong.h"

Player::Player(int health)
	: _health(health) {
	_state = new Strong(this);
}

void Player::ButtonPressed() {
	this->_state->ButtonPressed();
}
