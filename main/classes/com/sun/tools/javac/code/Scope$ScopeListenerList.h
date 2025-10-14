#ifndef _com_sun_tools_javac_code_Scope$ScopeListenerList_h_
#define _com_sun_tools_javac_code_Scope$ScopeListenerList_h_
//$ class com.sun.tools.javac.code.Scope$ScopeListenerList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$ScopeListener;
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
				namespace code {

class $export Scope$ScopeListenerList : public ::java::lang::Object {
	$class(Scope$ScopeListenerList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Scope$ScopeListenerList();
	void init$();
	virtual void add(::com::sun::tools::javac::code::Scope$ScopeListener* sl);
	virtual void symbolAdded(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* scope);
	virtual void symbolRemoved(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* scope);
	void walkReferences(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* scope, bool isRemove);
	::com::sun::tools::javac::util::List* listeners = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ScopeListenerList_h_