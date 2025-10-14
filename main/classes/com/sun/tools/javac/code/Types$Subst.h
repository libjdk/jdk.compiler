#ifndef _com_sun_tools_javac_code_Types$Subst_h_
#define _com_sun_tools_javac_code_Types$Subst_h_
//$ class com.sun.tools.javac.code.Types$Subst
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ClassType;
					class Type$ForAll;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types;
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
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$Subst : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(Types$Subst, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	Types$Subst();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to);
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::java::lang::Void* ignored);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* ignored);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* ignored) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::util::List* from = nullptr;
	::com::sun::tools::javac::util::List* to = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$Subst_h_