#ifndef GAME_H
#define GAME_H

#include "GameUI.h"

class Game {
public:
	Game();

	void init();
	void run();
private:
	GameUI gameUI;
};

#endif /* GAME_H */
