#ifndef _com_sun_tools_sjavac_pubapi_TypeVarTypeDesc_h_
#define _com_sun_tools_sjavac_pubapi_TypeVarTypeDesc_h_
//$ class com.sun.tools.sjavac.pubapi.TypeVarTypeDesc
//$ extends com.sun.tools.sjavac.pubapi.TypeDesc

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class TypeVarTypeDesc : public ::com::sun::tools::sjavac::pubapi::TypeDesc {
	$class(TypeVarTypeDesc, $NO_CLASS_INIT, ::com::sun::tools::sjavac::pubapi::TypeDesc)
public:
	TypeVarTypeDesc();
	void init$($String* identifier);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2E98A6A61A8AE2D5;
	$String* identifier = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_TypeVarTypeDesc_h_