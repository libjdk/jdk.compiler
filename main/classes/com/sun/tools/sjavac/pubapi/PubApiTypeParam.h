#ifndef _com_sun_tools_sjavac_pubapi_PubApiTypeParam_h_
#define _com_sun_tools_sjavac_pubapi_PubApiTypeParam_h_
//$ class com.sun.tools.sjavac.pubapi.PubApiTypeParam
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubApiTypeParam : public ::java::io::Serializable {
	$class(PubApiTypeParam, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PubApiTypeParam();
	void init$($String* identifier, ::java::util::List* bounds);
	virtual $String* asString();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7B805371D2A1CD4A;
	$String* identifier = nullptr;
	::java::util::List* bounds = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_PubApiTypeParam_h_