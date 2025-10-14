#ifndef _com_sun_tools_javac_code_Types$14_h_
#define _com_sun_tools_javac_code_Types$14_h_
//$ class com.sun.tools.javac.code.Types$14
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$14 : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(Types$14, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	Types$14();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	::com::sun::tools::javac::code::Type* combineMetadata(::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Type* t);
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Boolean* recurse);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* recurse) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Boolean* recurse);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* recurse) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Boolean* recurse);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* recurse) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Boolean* recurse);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* recurse) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$14_h_