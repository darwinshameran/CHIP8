#pragma once

#include <string>
#include <unordered_map>

class Registers {
private:
	/* 8-bit general purpose data registers ranging from V0 to VF.
	 * The 16th register, VF, is equal to the carry flag in other systems.
	 */
	std::unordered_map<std::string, unsigned char> m_dataRegisters = {
		{"V0", 0},
		{"V1", 0},
		{"V2", 0},
		{"V3", 0},
		{"V4", 0},
		{"V5", 0},
		{"V6", 0},
		{"V7", 0},
		{"V8", 0},
		{"V9", 0},
		{"V10", 0},
		{"V11", 0},
		{"V12", 0},
		{"V13", 0},
		{"V14", 0},
		{"V15", 0}
	};

	/* 8-bit stack pointer. The SP register is used to point to the topmost
	 * level of the stack.
	 */
	std::unordered_map<std::string, unsigned short> m_stackPointerRegister = {
			{"SP", 0}
	};

	/* CHIP-8 provides two timers, namely the delay and sound timers.
	 *
	 * The delay timer register (DT) is active whenever the delay timer (DT)
	 * is non-zero.
	 *
	 * The sound timer is active whenever the sound timer register (ST) is
	 * non-zero.
	 */
	std::unordered_map<std::string, unsigned short> m_timerRegister = {
			{"DT", 0},
			{"ST", 0}
	};

	/* The program counter register (PC) is used to store the currently
	 * executing address.
	 *
	 * The index register (I) is used as index for fetching memory addresses.
	 */
	std::unordered_map<std::string, unsigned short> m_programRegister = {
			{"PC", 0},
			{"I", 0}
	};
 public:
	unsigned char& getDataRegister(const std::string name);
	unsigned short& getStackPointerRegister(const std::string name);
	unsigned short& getTimerRegister(const std::string name);
	unsigned short& getProgramRegister(const std::string name);

};


	/* vim: set ts=8 sw=4 tw=79 ft=cpp et :*/