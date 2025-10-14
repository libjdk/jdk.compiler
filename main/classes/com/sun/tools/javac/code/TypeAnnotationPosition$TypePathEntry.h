#ifndef _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntry_h_
#define _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntry_h_
//$ class com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("INNER_TYPE")
#undef INNER_TYPE
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeAnnotationPosition$TypePathEntryKind;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeAnnotationPosition$TypePathEntry : public ::java::lang::Object {
	$class(TypeAnnotationPosition$TypePathEntry, 0, ::java::lang::Object)
public:
	TypeAnnotationPosition$TypePathEntry();
	void init$(::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* tag);
	void init$(::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* tag, int32_t arg);
	virtual bool equals(Object$* other) override;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry* fromBinary(int32_t tag, int32_t arg);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t bytesPerEntry = 2;
	::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* tag = nullptr;
	int32_t arg = 0;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry* ARRAY;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry* INNER_TYPE;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry* WILDCARD;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ARRAY")
#pragma pop_macro("INNER_TYPE")
#pragma pop_macro("WILDCARD")

#endif // _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntry_h_