#ifndef _com_sun_tools_javac_jvm_UninitializedType_h_
#define _com_sun_tools_javac_jvm_UninitializedType_h_
//$ class com.sun.tools.javac.jvm.UninitializedType
//$ extends com.sun.tools.javac.code.Type$DelegatedType

#include <com/sun/tools/javac/code/Type$DelegatedType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class TypeMetadata;
					class TypeTag;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class UninitializedType : public ::com::sun::tools::javac::code::Type$DelegatedType {
	$class(UninitializedType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$DelegatedType)
public:
	UninitializedType();
	void init$(::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Type* qtype, int32_t offset, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::jvm::UninitializedType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* initializedType();
	static ::com::sun::tools::javac::jvm::UninitializedType* uninitializedObject(::com::sun::tools::javac::code::Type* qtype, int32_t offset);
	static ::com::sun::tools::javac::jvm::UninitializedType* uninitializedThis(::com::sun::tools::javac::code::Type* qtype);
	int32_t offset = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_UninitializedType_h_