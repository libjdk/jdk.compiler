#ifndef _com_sun_tools_javac_util_Warner_h_
#define _com_sun_tools_javac_util_Warner_h_
//$ class com.sun.tools.javac.util.Warner
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint$LintCategory;
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
					class JCDiagnostic$DiagnosticPosition;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Warner : public ::java::lang::Object {
	$class(Warner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Warner();
	void init$(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void init$();
	virtual void clear();
	virtual bool hasLint(::com::sun::tools::javac::code::Lint$LintCategory* lint);
	virtual bool hasNonSilentLint(::com::sun::tools::javac::code::Lint$LintCategory* lint);
	virtual bool hasSilentLint(::com::sun::tools::javac::code::Lint$LintCategory* lint);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos();
	virtual void silentWarn(::com::sun::tools::javac::code::Lint$LintCategory* lint);
	virtual void warn(::com::sun::tools::javac::code::Lint$LintCategory* lint);
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos$ = nullptr;
	bool warned = false;
	::java::util::EnumSet* nonSilentLintSet = nullptr;
	::java::util::EnumSet* silentLintSet = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Warner_h_