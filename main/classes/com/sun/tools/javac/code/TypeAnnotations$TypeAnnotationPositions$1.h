#ifndef _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions$1_h_
#define _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions$1_h_
//$ class com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$1
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
					class TypeAnnotations$TypeAnnotationPositions;
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

class TypeAnnotations$TypeAnnotationPositions$1 : public ::com::sun::tools::javac::code::Type$Visitor {
	$class(TypeAnnotations$TypeAnnotationPositions$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$Visitor)
public:
	TypeAnnotations$TypeAnnotationPositions$1();
	void init$(::com::sun::tools::javac::code::TypeAnnotations$TypeAnnotationPositions* this$1, ::com::sun::tools::javac::code::Type* val$stopAt);
	virtual ::com::sun::tools::javac::code::Type* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitModuleType(::com::sun::tools::javac::code::Type$ModuleType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::util::List* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
	::com::sun::tools::javac::code::TypeAnnotations$TypeAnnotationPositions* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* val$stopAt = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions$1_h_