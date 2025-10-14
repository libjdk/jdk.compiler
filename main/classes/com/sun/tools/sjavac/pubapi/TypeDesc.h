#ifndef _com_sun_tools_sjavac_pubapi_TypeDesc_h_
#define _com_sun_tools_sjavac_pubapi_TypeDesc_h_
//$ class com.sun.tools.sjavac.pubapi.TypeDesc
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
				class TypeMirror;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class TypeDesc : public ::java::io::Serializable {
	$class(TypeDesc, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TypeDesc();
	void init$(::javax::lang::model::type::TypeKind* typeKind);
	static ::com::sun::tools::sjavac::pubapi::TypeDesc* decodeString($String* s);
	static $String* encodeAsString(::com::sun::tools::sjavac::pubapi::TypeDesc* td);
	virtual bool equals(Object$* obj) override;
	static ::com::sun::tools::sjavac::pubapi::TypeDesc* fromType(::javax::lang::model::type::TypeMirror* type);
	virtual int32_t hashCode() override;
	static const int64_t serialVersionUID = (int64_t)0x8E2DF1334233533C;
	::javax::lang::model::type::TypeKind* typeKind = nullptr;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_TypeDesc_h_