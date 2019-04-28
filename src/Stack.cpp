#include "Stack.h"

uint16_t& Stack::operator[](std::size_t index) {
	return m_frames[index];
}