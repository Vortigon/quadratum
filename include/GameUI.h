#ifndef GAME_UI_H
#define GAME_UI_H

#include <vector>
#include "UIElement.h"

class GameUI {
public:
	GameUI();

	void init();
	void update();

	void addElement(const UIElement& element);
private:
	std::vector<UIElement*> elements;
};

#endif /* GAME_UI_H */
