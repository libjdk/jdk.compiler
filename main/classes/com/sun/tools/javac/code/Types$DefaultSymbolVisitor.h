#ifndef _com_sun_tools_javac_code_Types$DefaultSymbolVisitor_h_
#define _com_sun_tools_javac_code_Types$DefaultSymbolVisitor_h_
//$ class com.sun.tools.javac.code.Types$DefaultSymbolVisitor
//$ extends com.sun.tools.javac.code.Symbol$Visitor

#include <com/sun/tools/javac/code/Symbol$Visitor.h>

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

class $export Types$DefaultSymbolVisitor : public ::com::sun::tools::javac::code::Symbol$Visitor {
	$class(Types$DefaultSymbolVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Visitor)
public:
	Types$DefaultSymbolVisitor();
	void init$();
	$Object* visit(::com::sun::tools::javac::code::Symbol* s, Object$* arg);
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, Object$* arg) override;
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* arg) override;
	virtual $Object* visitOperatorSymbol(::com::sun::tools::javac::code::Symbol$OperatorSymbol* s, Object$* arg) override;
	virtual $Object* visitPackageSymbol(::com::sun::tools::javac::code::Symbol$PackageSymbol* s, Object$* arg) override;
	virtual $Object* visitTypeSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, Object$* arg) override;
	virtual $Object* visitVarSymbol(::com::sun::tools::javac::code::Symbol$VarSymbol* s, Object$* arg) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DefaultSymbolVisitor_h_