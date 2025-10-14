#ifndef _com_sun_tools_javac_jvm_JNIWriter$SimpleTypeVisitor_h_
#define _com_sun_tools_javac_jvm_JNIWriter$SimpleTypeVisitor_h_
//$ class com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor
//$ extends com.sun.tools.javac.code.Type$Visitor

#include <com/sun/tools/javac/code/Type$Visitor.h>

#pragma push_macro("DEFAULT_VALUE")
#undef DEFAULT_VALUE

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
				namespace jvm {

class $import JNIWriter$SimpleTypeVisitor : public ::com::sun::tools::javac::code::Type$Visitor {
	$class(JNIWriter$SimpleTypeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$Visitor)
public:
	JNIWriter$SimpleTypeVisitor();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* defaultAction(::com::sun::tools::javac::code::Type* t, Object$* p);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* p) override;
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* p) override;
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* p) override;
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* p) override;
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* p) override;
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* p) override;
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* p) override;
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* p) override;
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* p) override;
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* p) override;
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* p) override;
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* p) override;
	$Object* DEFAULT_VALUE = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT_VALUE")

#endif // _com_sun_tools_javac_jvm_JNIWriter$SimpleTypeVisitor_h_