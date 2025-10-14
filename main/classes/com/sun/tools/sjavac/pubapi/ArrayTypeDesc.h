#ifndef _com_sun_tools_sjavac_pubapi_ArrayTypeDesc_h_
#define _com_sun_tools_sjavac_pubapi_ArrayTypeDesc_h_
//$ class com.sun.tools.sjavac.pubapi.ArrayTypeDesc
//$ extends com.sun.tools.sjavac.pubapi.TypeDesc

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class ArrayTypeDesc : public ::com::sun::tools::sjavac::pubapi::TypeDesc {
	$class(ArrayTypeDesc, $NO_CLASS_INIT, ::com::sun::tools::sjavac::pubapi::TypeDesc)
public:
	ArrayTypeDesc();
	void init$(::com::sun::tools::sjavac::pubapi::TypeDesc* compTypeDesc);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static const int64_t serialVersionUID = (int64_t)0xEFA94903468CC0CC;
	::com::sun::tools::sjavac::pubapi::TypeDesc* compTypeDesc = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_ArrayTypeDesc_h_