#ifndef _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection_h_
#define _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection_h_
//$ class com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class BoundKind;
					class Type;
					class Type$WildcardType;
					class Types$ProjectionKind;
					class Types$TypeProjection;
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

class $export Types$TypeProjection$TypeArgumentProjection : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Types$TypeProjection$TypeArgumentProjection, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Types$TypeProjection$TypeArgumentProjection();
	void init$(::com::sun::tools::javac::code::Types$TypeProjection* this$1, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Type* declaredBound);
	::com::sun::tools::javac::code::Type* makeWildcard(::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::BoundKind* bk);
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Types$ProjectionKind* pkind);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* pkind) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* wt, ::com::sun::tools::javac::code::Types$ProjectionKind* pkind);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* wt, Object$* pkind) override;
	::com::sun::tools::javac::code::Types$TypeProjection* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
	::com::sun::tools::javac::code::Type* declaredBound = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection_h_