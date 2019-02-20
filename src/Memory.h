#ifndef MEMORY_H
#define MEMORY_H

#include <vector>
#include <array>

class Memory {
 private:
 	 constexpr std::size_t MEM_SIZE = 0x1000;	/* Memory map size. */
	 constexpr long MEM_START_AT = 0x200;		/* Start of ROM and work RAM. */
	 std::array<uint8_t, MEM_SIZE> memory = {};

 public:
	 uint8_t& operator[](std::size_t index);
	 void rom(std::vector<int8_t>&& buf);
};	
#endif