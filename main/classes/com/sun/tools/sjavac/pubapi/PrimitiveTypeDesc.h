#ifndef _com_sun_tools_sjavac_pubapi_PrimitiveTypeDesc_h_
#define _com_sun_tools_sjavac_pubapi_PrimitiveTypeDesc_h_
//$ class com.sun.tools.sjavac.pubapi.PrimitiveTypeDesc
//$ extends com.sun.tools.sjavac.pubapi.TypeDesc

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PrimitiveTypeDesc : public ::com::sun::tools::sjavac::pubapi::TypeDesc {
	$class(PrimitiveTypeDesc, $NO_CLASS_INIT, ::com::sun::tools::sjavac::pubapi::TypeDesc)
public:
	PrimitiveTypeDesc();
	void init$(::javax::lang::model::type::TypeKind* typeKind);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x53F9B40D34028D92;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_PrimitiveTypeDesc_h_