#ifndef _com_sun_tools_javac_code_Type$Visitor_h_
#define _com_sun_tools_javac_code_Type$Visitor_h_
//$ interface com.sun.tools.javac.code.Type$Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Type$Visitor : public ::java::lang::Object {
	$interface(Type$Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) {return nullptr;}
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) {return nullptr;}
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) {return nullptr;}
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) {return nullptr;}
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) {return nullptr;}
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) {return nullptr;}
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* s) {return nullptr;}
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* s) {return nullptr;}
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) {return nullptr;}
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) {return nullptr;}
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) {return nullptr;}
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) {return nullptr;}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$Visitor_h_