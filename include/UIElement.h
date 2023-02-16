#ifndef UI_ELEMENT_H
#define UI_ELEMENT_H

class UIElement : public InputHandler {
public:
	UIElement();

	bool inBound() const;
private:
	float width, height;
	float xPos, yPos;
};

#endif /* UI_ELEMENT_H */
