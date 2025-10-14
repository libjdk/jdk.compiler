#ifndef _com_sun_tools_javac_code_Printer$1_h_
#define _com_sun_tools_javac_code_Printer$1_h_
//$ class com.sun.tools.javac.code.Printer$1
//$ extends com.sun.tools.javac.code.Printer

#include <com/sun/tools/javac/code/Printer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Messages;
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
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$OperatorSymbol;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Type;
					class Type$ArrayType;
					class Type$CapturedType;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$ForAll;
					class Type$MethodType;
					class Type$ModuleType;
					class Type$PackageType;
					class Type$TypeVar;
					class Type$UndetVar;
					class Type$WildcardType;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Printer$1 : public ::com::sun::tools::javac::code::Printer {
	$class(Printer$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Printer)
public:
	Printer$1();
	void init$(::com::sun::tools::javac::api::Messages* val$messages);
	virtual $String* capturedVarId(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) override;
	virtual $String* localize(::java::util::Locale* locale, $String* key, $ObjectArray* args) override;
	using ::com::sun::tools::javac::code::Printer::visitArrayType;
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitCapturedType;
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitClassSymbol;
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitClassType;
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitErrorType;
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitForAll;
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitMethodSymbol;
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitMethodType;
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitModuleType;
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitOperatorSymbol;
	virtual $Object* visitOperatorSymbol(::com::sun::tools::javac::code::Symbol$OperatorSymbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitPackageSymbol;
	virtual $Object* visitPackageSymbol(::com::sun::tools::javac::code::Symbol$PackageSymbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitPackageType;
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitSymbol;
	virtual $Object* visitSymbol(::com::sun::tools::javac::code::Symbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitType;
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitTypeSymbol;
	virtual $Object* visitTypeSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitTypeVar;
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitUndetVar;
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitVarSymbol;
	virtual $Object* visitVarSymbol(::com::sun::tools::javac::code::Symbol$VarSymbol* s, Object$* locale) override;
	using ::com::sun::tools::javac::code::Printer::visitWildcardType;
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* locale) override;
	::com::sun::tools::javac::api::Messages* val$messages = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Printer$1_h_