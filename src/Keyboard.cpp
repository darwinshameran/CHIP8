#include "Keyboard.h"

bool Keyboard::is_key_pressed(const uint8_t key) {
	auto key_state = m_keyboard.find(key);

	if (key_state == m_keyboard.end())
		return false;
	else
		return key_state->second;
}

void Keyboard::pressed_up(const uint8_t key) {
	m_keyboard[key] = false;
}

void Keyboard::pressed_down(const uint8_t key) {
	m_keyboard[key] = true;
}