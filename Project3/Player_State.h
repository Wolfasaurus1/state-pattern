#pragma once

class Player;

class Player_State {

public:
	Player_State(Player* player)
		: _player(player) {}

	virtual void ButtonPressed() = 0;

protected:
	Player* _player;
};