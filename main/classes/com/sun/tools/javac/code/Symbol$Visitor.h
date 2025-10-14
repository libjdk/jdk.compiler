#ifndef _com_sun_tools_javac_code_Symbol$Visitor_h_
#define _com_sun_tools_javac_code_Symbol$Visitor_h_
//$ interface com.sun.tools.javac.code.Symbol$Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$OperatorSymbol;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
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

class $export Symbol$Visitor : public ::java::lang::Object {
	$interface(Symbol$Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitOperatorSymbol(::com::sun::tools::javac::code::Symbol$OperatorSymbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitPackageSymbol(::com::sun::tools::javac::code::Symbol$PackageSymbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitSymbol(::com::sun::tools::javac::code::Symbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitTypeSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, Object$* arg) {return nullptr;}
	virtual $Object* visitVarSymbol(::com::sun::tools::javac::code::Symbol$VarSymbol* s, Object$* arg) {return nullptr;}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$Visitor_h_