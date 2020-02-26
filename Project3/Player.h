#pragma once
#include <iostream>

class Player_State;

using namespace std;

class Player {

public:
	Player(int health);

	int GetHealth() { return this->_health; }
	void SetHealth(int health) { this->_health = health; }

	void ButtonPressed();

private:
	int _health;
	Player_State* _state;
};
