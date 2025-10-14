#ifndef _com_sun_tools_javac_code_Type$StructuralTypeMapping_h_
#define _com_sun_tools_javac_code_Type$StructuralTypeMapping_h_
//$ class com.sun.tools.javac.code.Type$StructuralTypeMapping
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$ArrayType;
					class Type$ClassType;
					class Type$ForAll;
					class Type$MethodType;
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

class $export Type$StructuralTypeMapping : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Type$StructuralTypeMapping, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Type$StructuralTypeMapping();
	void init$();
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) override;
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* wt, Object$* s) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$StructuralTypeMapping_h_