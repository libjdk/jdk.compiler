#ifndef _com_sun_tools_javac_code_Printer_h_
#define _com_sun_tools_javac_code_Printer_h_
//$ class com.sun.tools.javac.code.Printer
//$ extends com.sun.tools.javac.code.Type$Visitor
//$ implements com.sun.tools.javac.code.Symbol$Visitor

#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <java/lang/Array.h>

#pragma push_macro("PRIME")
#undef PRIME

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
namespace java {
	namespace lang {
		class StringBuilder;
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

class $import Printer : public ::com::sun::tools::javac::code::Type$Visitor, public ::com::sun::tools::javac::code::Symbol$Visitor {
	$class(Printer, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$Visitor, ::com::sun::tools::javac::code::Symbol$Visitor)
public:
	Printer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* capturedVarId(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* className(::com::sun::tools::javac::code::Type$ClassType* t, bool longform, ::java::util::Locale* locale);
	static ::com::sun::tools::javac::code::Printer* createStandardPrinter(::com::sun::tools::javac::api::Messages* messages);
	virtual $String* localize(::java::util::Locale* locale, $String* key, $ObjectArray* args) {return nullptr;}
	$String* printAnnotations(::com::sun::tools::javac::code::Type* t);
	$String* printAnnotations(::com::sun::tools::javac::code::Type* t, bool prefix);
	void printBaseElementType(::com::sun::tools::javac::code::Type* t, ::java::lang::StringBuilder* sb, ::java::util::Locale* locale);
	void printBrackets(::com::sun::tools::javac::code::Type* t, ::java::lang::StringBuilder* sb, ::java::util::Locale* locale);
	virtual $String* printMethodArgs(::com::sun::tools::javac::util::List* args, bool varArgs, ::java::util::Locale* locale);
	virtual $String* toString() override;
	virtual $String* visit(::com::sun::tools::javac::code::Type* t, ::java::util::Locale* locale);
	virtual $String* visit(::com::sun::tools::javac::code::Symbol* s, ::java::util::Locale* locale);
	virtual $String* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::util::Locale* locale);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* locale) override;
	virtual $String* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* locale) override;
	virtual $String* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::java::util::Locale* locale);
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, Object$* locale) override;
	virtual $String* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::util::Locale* locale);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* locale) override;
	virtual $String* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::java::util::Locale* locale);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* locale) override;
	virtual $String* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::java::util::Locale* locale);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* locale) override;
	virtual $String* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, ::java::util::Locale* locale);
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* locale) override;
	virtual $String* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::java::util::Locale* locale);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* locale) override;
	virtual $String* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, ::java::util::Locale* locale);
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* locale) override;
	virtual $String* visitOperatorSymbol(::com::sun::tools::javac::code::Symbol$OperatorSymbol* s, ::java::util::Locale* locale);
	virtual $Object* visitOperatorSymbol(::com::sun::tools::javac::code::Symbol$OperatorSymbol* s, Object$* locale) override;
	virtual $String* visitPackageSymbol(::com::sun::tools::javac::code::Symbol$PackageSymbol* s, ::java::util::Locale* locale);
	virtual $Object* visitPackageSymbol(::com::sun::tools::javac::code::Symbol$PackageSymbol* s, Object$* locale) override;
	virtual $String* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, ::java::util::Locale* locale);
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* locale) override;
	virtual $String* visitSymbol(::com::sun::tools::javac::code::Symbol* s, ::java::util::Locale* locale);
	virtual $Object* visitSymbol(::com::sun::tools::javac::code::Symbol* s, Object$* locale) override;
	virtual $String* visitSymbols(::com::sun::tools::javac::util::List* ts, ::java::util::Locale* locale);
	virtual $String* visitType(::com::sun::tools::javac::code::Type* t, ::java::util::Locale* locale);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* locale) override;
	virtual $String* visitTypeSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, ::java::util::Locale* locale);
	virtual $Object* visitTypeSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, Object$* locale) override;
	virtual $String* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::util::Locale* locale);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* locale) override;
	virtual $String* visitTypes(::com::sun::tools::javac::util::List* ts, ::java::util::Locale* locale);
	virtual $String* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::java::util::Locale* locale);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* locale) override;
	virtual $String* visitVarSymbol(::com::sun::tools::javac::code::Symbol$VarSymbol* s, ::java::util::Locale* locale);
	virtual $Object* visitVarSymbol(::com::sun::tools::javac::code::Symbol$VarSymbol* s, Object$* locale) override;
	virtual $String* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::util::Locale* locale);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* locale) override;
	::com::sun::tools::javac::util::List* seenCaptured = nullptr;
	static const int32_t PRIME = 997;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("PRIME")

#endif // _com_sun_tools_javac_code_Printer_h_