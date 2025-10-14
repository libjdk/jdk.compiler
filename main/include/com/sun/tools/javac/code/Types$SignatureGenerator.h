#ifndef _com_sun_tools_javac_code_Types$SignatureGenerator_h_
#define _com_sun_tools_javac_code_Types$SignatureGenerator_h_
//$ class com.sun.tools.javac.code.Types$SignatureGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Type;
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
				namespace util {
					class List;
					class Name;
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

class $import Types$SignatureGenerator : public ::java::lang::Object {
	$class(Types$SignatureGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$SignatureGenerator();
	void init$(::com::sun::tools::javac::code::Types* types);
	virtual void append(char16_t ch) {}
	virtual void append($bytes* ba) {}
	virtual void append(::com::sun::tools::javac::util::Name* name) {}
	virtual void assembleClassSig(::com::sun::tools::javac::code::Type* type);
	virtual void assembleParamsSig(::com::sun::tools::javac::util::List* typarams);
	virtual void assembleSig(::com::sun::tools::javac::code::Type* type);
	virtual void assembleSig(::com::sun::tools::javac::util::List* types);
	virtual void classReference(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual bool hasTypeVar(::com::sun::tools::javac::util::List* l);
	virtual void reportIllegalSignature(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Types* types = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$SignatureGenerator_h_