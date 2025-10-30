#ifndef _com_sun_tools_javac_code_ClassFinder$BadEnclosingMethodAttr_h_
#define _com_sun_tools_javac_code_ClassFinder$BadEnclosingMethodAttr_h_
//$ class com.sun.tools.javac.code.ClassFinder$BadEnclosingMethodAttr
//$ extends com.sun.tools.javac.code.ClassFinder$BadClassFile

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Symbol$TypeSymbol;
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
					class JCDiagnostic;
					class JCDiagnostic$Factory;
				}
			}
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
				namespace code {

class $export ClassFinder$BadEnclosingMethodAttr : public ::com::sun::tools::javac::code::ClassFinder$BadClassFile {
	$class(ClassFinder$BadEnclosingMethodAttr, $NO_CLASS_INIT, ::com::sun::tools::javac::code::ClassFinder$BadClassFile)
public:
	ClassFinder$BadEnclosingMethodAttr();
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym, ::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic* diag, ::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh);
	static const int64_t serialVersionUID = 0;
	ClassFinder$BadEnclosingMethodAttr(const ClassFinder$BadEnclosingMethodAttr& e);
	virtual void throw$() override;
	inline ClassFinder$BadEnclosingMethodAttr* operator ->() {
		return (ClassFinder$BadEnclosingMethodAttr*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ClassFinder$BadEnclosingMethodAttr_h_