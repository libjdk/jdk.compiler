#ifndef _com_sun_tools_javac_code_Scope$StarImportScope_h_
#define _com_sun_tools_javac_code_Scope$StarImportScope_h_
//$ class com.sun.tools.javac.code.Scope$StarImportScope
//$ extends com.sun.tools.javac.code.Scope$ImportScope

#include <com/sun/tools/javac/code/Scope$ImportScope.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$ImportFilter;
					class Symbol;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCImport;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Scope$StarImportScope : public ::com::sun::tools::javac::code::Scope$ImportScope {
	$class(Scope$StarImportScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$ImportScope)
public:
	Scope$StarImportScope();
	using ::com::sun::tools::javac::code::Scope$ImportScope::getSymbols;
	using ::com::sun::tools::javac::code::Scope$ImportScope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	virtual void importAll(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::code::Scope$ImportFilter* filter, ::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::java::util::function::BiConsumer* cfHandler);
	virtual bool isFilled();
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$StarImportScope_h_