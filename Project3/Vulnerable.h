#pragma once
#include "Player_State.h"

class Vulnerable : public Player_State {

public:
	Vulnerable(Player * player)
		: Player_State(player) {}

	void ButtonPressed() override;
};