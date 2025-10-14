#ifndef _com_sun_tools_sjavac_pubapi_PubVar_h_
#define _com_sun_tools_sjavac_pubapi_PubVar_h_
//$ class com.sun.tools.sjavac.pubapi.PubVar
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class TypeDesc;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubVar : public ::java::io::Serializable {
	$class(PubVar, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PubVar();
	void init$(::java::util::Set* modifiers, ::com::sun::tools::sjavac::pubapi::TypeDesc* type, $String* identifier, $String* constValue);
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::Optional* getConstValue();
	virtual $String* getIdentifier();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5094F5C8848AF16F;
	::java::util::Set* modifiers = nullptr;
	::com::sun::tools::sjavac::pubapi::TypeDesc* type = nullptr;
	$String* identifier = nullptr;
	$String* constValue = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_PubVar_h_