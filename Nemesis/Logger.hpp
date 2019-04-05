#pragma once

#include <string>
#include <Windows.h>

class Logger
{
	//
	//
	// Variables
	//
	//

	/**
	 * \brief Will be added in the beginning of the log.
	 */
	static std::string prefix;

public:

	//
	//
	// Important functions
	//
	//

	/**
	 * \brief Prints the specified wide string.
	 * \param format the format string
	 * \param ... the additional parameters
	 */
	static auto Log(std::wstring format, ...) -> VOID;

	/**
	 * \brief Prints the specified string.
	 * \param format the format string
	 * \param ... the additional parameters
	 */
	static auto Log(std::string format, ...) -> VOID;
};
