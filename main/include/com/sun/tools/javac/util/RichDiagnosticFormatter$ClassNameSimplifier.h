#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$ClassNameSimplifier_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$ClassNameSimplifier_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class RichDiagnosticFormatter;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import RichDiagnosticFormatter$ClassNameSimplifier : public ::java::lang::Object {
	$class(RichDiagnosticFormatter$ClassNameSimplifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RichDiagnosticFormatter$ClassNameSimplifier();
	void init$(::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0);
	virtual void addUsage(::com::sun::tools::javac::code::Symbol* sym);
	virtual $String* simplify(::com::sun::tools::javac::code::Symbol* s);
	::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0 = nullptr;
	::java::util::Map* nameClashes = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$ClassNameSimplifier_h_