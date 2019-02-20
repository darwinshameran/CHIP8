#include "Registers.h"

unsigned char& Registers::getDataRegister(const std::string name) {
	return m_dataRegisters.at(name);
}

unsigned short& Registers::getStackPointerRegister(const std::string name) {
	return m_stackPointerRegister.at(name);
}

unsigned short& Registers::getTimerRegister(const std::string name) {
	return m_timerRegister.at(name);
}

unsigned short& Registers::getProgramRegister(const std::string name) {
	return m_programRegister.at(name);
}

/* vim: set ts=8 sw=4 tw=79 ft=cpp et :*/