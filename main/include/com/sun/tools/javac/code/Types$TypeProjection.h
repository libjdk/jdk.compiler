#ifndef _com_sun_tools_javac_code_Types$TypeProjection_h_
#define _com_sun_tools_javac_code_Types$TypeProjection_h_
//$ class com.sun.tools.javac.code.Types$TypeProjection
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$TypeVar;
					class Types;
					class Types$ProjectionKind;
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
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types$TypeProjection : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Types$TypeProjection, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Types$TypeProjection();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::util::List* vars);
	::com::sun::tools::javac::code::Type* lambda$visitClassType$0(::com::sun::tools::javac::code::Types$ProjectionKind* pkind, ::com::sun::tools::javac::code::Type* c);
	::com::sun::tools::javac::code::Type* mapTypeArgument(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Type* declaredBound, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Types$ProjectionKind* pkind);
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::com::sun::tools::javac::code::Types$ProjectionKind* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::code::Types$ProjectionKind* pkind);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* pkind) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::code::Types$ProjectionKind* pkind);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* pkind) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::util::List* vars = nullptr;
	::java::util::Set* seen = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeProjection_h_