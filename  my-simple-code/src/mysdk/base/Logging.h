
#ifndef MYSDK_LOG_LOGGING_H
#define MYSDK_LOG_LOGGING_H

#include <ostream>

namespace mysdk
{
	class LoggerImpl;
	class Logger
	{
	public:
		enum LogLevel
		{
			TRACE,
			DEBUG,
			INFO,
			WARN,
			ERROR,
			FATAL,
			SQL,
			NUM_LOG_LEVELS,
		};

		Logger(const char* file, int line);
		Logger(const char* file, int line, LogLevel level);
		Logger(const char* file, int line, LogLevel level, const char* func);
		Logger(const char* file, int line, bool toAbort);
		~Logger();

		std::ostream& stream();

		static LogLevel logLevel();
		static void setLogLevel(LogLevel level);
	private:
		LoggerImpl *pImpl_;
	};

#define LOG_TRACE if (Logger::logLevel() <= Logger::TRACE)	\
	Logger(__FILE__, __LINE__, Logger::TRACE, __func__).stream()
#define LOG_DEBUG if (Logger::logLevel() <= Logger::DEBUG)	\
	Logger(__FILE__, __LINE__, Logger::DEBUG, __func__).stream()
#define LOG_INFO if (Logger::logLevel() <= Logger::INFO)	\
	Logger(__FILE__, __LINE__).stream()
#define	LOG_WARN	Logger(__FILE__, __LINE__, Logger::WARN).stream()
#define LOG_ERROR	Logger(__FILE__, __LINE__, Logger::ERROR).stream()
#define LOG_FATAL	Logger(__FILE__, __LINE__, Logger::FATAL).stream()
#define LOG_SYSERR	Logger(__FILE__, __LINE__, false).stream()
#define LOG_SYSFATAL	Logger(__FILE__, __LINE__, true).stream()
#define LOG_SQL Logger(__FILE__, __LINE__, Logger::SQL).stream()

const char* strerror_tl(int savedErrno);
// Taken from glog/logging.h
//
// Check that the input is non NULL.  This very useful in constructor
// initializer lists.
#define	CHECK_NOTNULL(val)	\
		::mysdk::CheckNotNull(__FILE__, __LINE__, "'" #val "' Must be non NULL", (val))

// A small helper for CHECK_NOTNULL().
template <typename T>
T* CheckNotNull(const char* file, int line, const char* names, T* ptr)
{
	if (ptr == NULL)
	{
		Logger(file, line, Logger::FATAL).stream() << names;
	}
	return ptr;
}

}

#endif
