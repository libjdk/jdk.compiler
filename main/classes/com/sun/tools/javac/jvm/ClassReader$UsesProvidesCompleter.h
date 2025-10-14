#ifndef _com_sun_tools_javac_jvm_ClassReader$UsesProvidesCompleter_h_
#define _com_sun_tools_javac_jvm_ClassReader$UsesProvidesCompleter_h_
//$ class com.sun.tools.javac.jvm.ClassReader$UsesProvidesCompleter
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ModuleSymbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassReader;
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
					class List;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$UsesProvidesCompleter : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(ClassReader$UsesProvidesCompleter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	ClassReader$UsesProvidesCompleter();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* currentModule, ::com::sun::tools::javac::util::List* interimUsesCopy, ::com::sun::tools::javac::util::List* interimProvidesCopy);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* currentModule = nullptr;
	::com::sun::tools::javac::util::List* interimUsesCopy = nullptr;
	::com::sun::tools::javac::util::List* interimProvidesCopy = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$UsesProvidesCompleter_h_