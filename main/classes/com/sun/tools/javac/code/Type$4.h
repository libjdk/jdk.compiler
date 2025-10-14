#ifndef _com_sun_tools_javac_code_Type$4_h_
#define _com_sun_tools_javac_code_Type$4_h_
//$ class com.sun.tools.javac.code.Type$4
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$WildcardType;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$4 : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(Type$4, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	Type$4();
	void init$();
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* aVoid);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* aVoid) override;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* aVoid);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* aVoid) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* aVoid);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* aVoid) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* wt, ::java::lang::Void* aVoid);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* wt, Object$* aVoid) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$4_h_