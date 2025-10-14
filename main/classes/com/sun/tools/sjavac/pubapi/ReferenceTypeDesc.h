#ifndef _com_sun_tools_sjavac_pubapi_ReferenceTypeDesc_h_
#define _com_sun_tools_sjavac_pubapi_ReferenceTypeDesc_h_
//$ class com.sun.tools.sjavac.pubapi.ReferenceTypeDesc
//$ extends com.sun.tools.sjavac.pubapi.TypeDesc

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class ReferenceTypeDesc : public ::com::sun::tools::sjavac::pubapi::TypeDesc {
	$class(ReferenceTypeDesc, $NO_CLASS_INIT, ::com::sun::tools::sjavac::pubapi::TypeDesc)
public:
	ReferenceTypeDesc();
	void init$($String* javaType);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2E98A6A61A8AE2D4;
	$String* javaType = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_ReferenceTypeDesc_h_