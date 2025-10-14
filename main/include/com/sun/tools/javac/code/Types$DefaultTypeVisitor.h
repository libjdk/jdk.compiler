#ifndef _com_sun_tools_javac_code_Types$DefaultTypeVisitor_h_
#define _com_sun_tools_javac_code_Types$DefaultTypeVisitor_h_
//$ class com.sun.tools.javac.code.Types$DefaultTypeVisitor
//$ extends com.sun.tools.javac.code.Type$Visitor

#include <com/sun/tools/javac/code/Type$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace code {

class $import Types$DefaultTypeVisitor : public ::com::sun::tools::javac::code::Type$Visitor {
	$class(Types$DefaultTypeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$Visitor)
public:
	Types$DefaultTypeVisitor();
	void init$();
	$Object* visit(::com::sun::tools::javac::code::Type* t, Object$* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) override;
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) override;
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* s) override;
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* s) override;
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) override;
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) override;
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DefaultTypeVisitor_h_