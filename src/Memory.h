#ifndef MEMORY_H
#define MEMORY_H

#include <vector>
#include <array>

/* TODO: implement these constexpr vars using the namespace identifier? */
constexpr std::size_t MEM_SIZE = 0x1000;	/* Memory map size. */
constexpr long MEM_START_AT = 0x200;		/* Start of ROM and work RAM. */

class Memory {
 private:
	 std::array<uint8_t, MEM_SIZE> m_memory = {};

 public:
	 uint8_t& operator[](const std::size_t index);
	 void rom(std::vector<int8_t>&& buf);
};	
#endif