#ifndef FIELD_UI_H
#define FIELD_UI_H

#include "UIElement.h"
#include "Field.h"

class FieldUI : public UIElement {
public:
	FieldUI();

private:
	void transformCoords();
};

#endif /* FIELD_UI_H */
