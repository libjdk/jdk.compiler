#ifndef _com_sun_tools_javac_code_Types$8_h_
#define _com_sun_tools_javac_code_Types$8_h_
//$ class com.sun.tools.javac.code.Types$8
//$ extends com.sun.tools.javac.code.Types$TypeRelation

#include <com/sun/tools/javac/code/Types$TypeRelation.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$8 : public ::com::sun::tools::javac::code::Types$TypeRelation {
	$class(Types$8, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeRelation)
public:
	Types$8();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	bool isCastableRecursive(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	bool notSoftSubtypeRecursive(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::Set* cache = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$8_h_