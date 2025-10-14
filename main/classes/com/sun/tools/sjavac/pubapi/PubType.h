#ifndef _com_sun_tools_sjavac_pubapi_PubType_h_
#define _com_sun_tools_sjavac_pubapi_PubType_h_
//$ class com.sun.tools.sjavac.pubapi.PubType
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class PubApi;
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
			namespace sjavac {
				namespace pubapi {

class PubType : public ::java::io::Serializable {
	$class(PubType, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PubType();
	void init$(::java::util::Set* modifiers, $String* fqName, ::com::sun::tools::sjavac::pubapi::PubApi* pubApi);
	virtual bool equals(Object$* obj) override;
	virtual $String* getFqName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x98FABA6F2449C8FF;
	::java::util::Set* modifiers = nullptr;
	$String* fqName = nullptr;
	::com::sun::tools::sjavac::pubapi::PubApi* pubApi = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_PubType_h_