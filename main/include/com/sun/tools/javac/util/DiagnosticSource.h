#ifndef _com_sun_tools_javac_util_DiagnosticSource_h_
#define _com_sun_tools_javac_util_DiagnosticSource_h_
//$ class com.sun.tools.javac.util.DiagnosticSource
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NO_SOURCE")
#undef NO_SOURCE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class EndPosTable;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class AbstractLog;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import DiagnosticSource : public ::java::lang::Object {
	$class(DiagnosticSource, 0, ::java::lang::Object)
public:
	DiagnosticSource();
	void init$(::javax::tools::JavaFileObject* fo, ::com::sun::tools::javac::util::AbstractLog* log);
	void init$();
	virtual bool findLine(int32_t pos);
	virtual int32_t getColumnNumber(int32_t pos, bool expandTabs);
	virtual ::com::sun::tools::javac::tree::EndPosTable* getEndPosTable();
	virtual ::javax::tools::JavaFileObject* getFile();
	virtual $String* getLine(int32_t pos);
	virtual int32_t getLineNumber(int32_t pos);
	virtual $chars* initBuf(::javax::tools::JavaFileObject* fileObject);
	virtual void setEndPosTable(::com::sun::tools::javac::tree::EndPosTable* t);
	static ::com::sun::tools::javac::util::DiagnosticSource* NO_SOURCE;
	::javax::tools::JavaFileObject* fileObject = nullptr;
	::com::sun::tools::javac::tree::EndPosTable* endPosTable = nullptr;
	::java::lang::ref::SoftReference* refBuf = nullptr;
	$chars* buf = nullptr;
	int32_t bufLen = 0;
	int32_t lineStart = 0;
	int32_t line = 0;
	::com::sun::tools::javac::util::AbstractLog* log = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NO_SOURCE")

#endif // _com_sun_tools_javac_util_DiagnosticSource_h_