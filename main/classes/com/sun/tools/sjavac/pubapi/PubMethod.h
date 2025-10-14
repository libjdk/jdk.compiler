#ifndef _com_sun_tools_sjavac_pubapi_PubMethod_h_
#define _com_sun_tools_sjavac_pubapi_PubMethod_h_
//$ class com.sun.tools.sjavac.pubapi.PubMethod
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
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubMethod : public ::java::io::Serializable {
	$class(PubMethod, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PubMethod();
	void init$(::java::util::Set* modifiers, ::java::util::List* typeParams, ::com::sun::tools::sjavac::pubapi::TypeDesc* returnType, $String* identifier, ::java::util::List* paramTypes, ::java::util::List* throwDecls);
	virtual $String* asSignatureString();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x9392783E4D58609D;
	::java::util::Set* modifiers = nullptr;
	::java::util::List* typeParams = nullptr;
	::com::sun::tools::sjavac::pubapi::TypeDesc* returnType = nullptr;
	$String* identifier = nullptr;
	::java::util::List* paramTypes = nullptr;
	::java::util::List* throwDecls = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_PubMethod_h_