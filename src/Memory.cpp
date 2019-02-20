#include "Memory.h"
#include <algorithm>

uint8_t& Memory::operator[](const std::size_t index) {
	if (index >= MEM_SIZE)
		throw std::out_of_range("Error: Array index is out bounds.");

	return m_memory[index];
}

void Memory::rom(std::vector<int8_t>&& buf) {
	auto iter = m_memory.begin();
	std::advance(iter, MEM_SIZE);
	std::copy(buf.begin(), buf.end(), iter);
}
