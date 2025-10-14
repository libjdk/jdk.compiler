#ifndef _com_sun_tools_sjavac_Log_h_
#define _com_sun_tools_sjavac_Log_h_
//$ class com.sun.tools.sjavac.Log
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Log$Level;
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Log : public ::java::lang::Object {
	$class(Log, 0, ::java::lang::Object)
public:
	Log();
	void init$(::java::io::Writer* out, ::java::io::Writer* err);
	static void debug($String* msg);
	static void debug($Throwable* t);
	static void error($String* msg);
	static void error($Throwable* t);
	static ::com::sun::tools::sjavac::Log* get();
	static void info($String* msg);
	static bool isDebugging();
	virtual bool isLevelLogged(::com::sun::tools::sjavac::Log$Level* l);
	static void log(::com::sun::tools::sjavac::Log$Level* l, $String* msg);
	static void log(::com::sun::tools::sjavac::Log$Level* l, $Throwable* t);
	virtual void printLogMsg(::com::sun::tools::sjavac::Log$Level* msgLevel, $String* msg);
	static void setLogForCurrentThread(::com::sun::tools::sjavac::Log* log);
	static void setLogLevel($String* l);
	static void setLogLevel(::com::sun::tools::sjavac::Log$Level* l);
	static void trace($String* msg);
	static void warn($String* msg);
	static ::com::sun::tools::sjavac::Log* stdOutErr;
	static ::java::lang::ThreadLocal* loggers;
	::java::io::PrintWriter* err = nullptr;
	::java::io::PrintWriter* out = nullptr;
	::com::sun::tools::sjavac::Log$Level* level = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Log_h_