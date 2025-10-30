#ifndef _com_sun_tools_javac_code_ClassFinder$BadClassFile_h_
#define _com_sun_tools_javac_code_ClassFinder$BadClassFile_h_
//$ class com.sun.tools.javac.code.ClassFinder$BadClassFile
//$ extends com.sun.tools.javac.code.Symbol$CompletionFailure

#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>

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

class $import ClassFinder$BadClassFile : public ::com::sun::tools::javac::code::Symbol$CompletionFailure {
	$class(ClassFinder$BadClassFile, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$CompletionFailure)
public:
	ClassFinder$BadClassFile();
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym, ::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic* diag, ::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh);
	static ::com::sun::tools::javac::util::JCDiagnostic* createBadClassFileDiagnostic(::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic* diag, ::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory);
	static ::com::sun::tools::javac::util::JCDiagnostic* lambda$new$0(::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic* diag, ::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory);
	static const int64_t serialVersionUID = 0;
	ClassFinder$BadClassFile(const ClassFinder$BadClassFile& e);
	virtual void throw$() override;
	inline ClassFinder$BadClassFile* operator ->() {
		return (ClassFinder$BadClassFile*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ClassFinder$BadClassFile_h_