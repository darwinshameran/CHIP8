#include "Registers.h"

uint8_t& Registers::getDataRegister(const std::string name) {
	return m_dataRegisters.at(name);
}

uint16_t& Registers::getStackPointerRegister(const std::string name) {
	return m_stackPointerRegister.at(name);
}

uint16_t& Registers::getTimerRegister(const std::string name) {
	return m_timerRegister.at(name);
}

uint16_t& Registers::getProgramRegister(const std::string name) {
	return m_programRegister.at(name);
}