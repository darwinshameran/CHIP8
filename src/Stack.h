#ifndef STACK_H
#define STACK_H

#include <array>

const std::size_t m_max_stack_frames = 16;

class Stack {
private:
	std::array<uint16_t, m_max_stack_frames> m_frames;

public:
	uint16_t& operator[](std::size_t index);
};
#endif