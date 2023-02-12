#ifndef FIELD_H
#define FIELD_H

class Field {
public:
	Field();

	uint16_t getHeight() const {
		return height;
	}

	uint16_t getWidth() const {
		return width;
	}
private:
	uint16_t height, width;
};

#endif /* FIELD_H */
