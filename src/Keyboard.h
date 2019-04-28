#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <unordered_map>

class Keyboard {
private:
	std::unordered_map<uint8_t, bool> m_keyboard = {
		{'0', false}, {'1', false}, {'2', false}, {'3', false}, {'4', false},
		{'5', false}, {'6', false}, {'7', false}, {'8', false}, {'9', false},
		{'A', false}, {'B', false}, {'C', false}, {'D', false}, {'E', false},
		{'F', false}
	};

public:
	bool is_key_pressed(const uint8_t key);
	void pressed_up(const uint8_t key);
	void pressed_down(const uint8_t key);
};
#endif