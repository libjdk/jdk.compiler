#ifndef _com_sun_tools_javac_code_TypeMetadata_h_
#define _com_sun_tools_javac_code_TypeMetadata_h_
//$ class com.sun.tools.javac.code.TypeMetadata
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeMetadata$Entry;
					class TypeMetadata$Entry$Kind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumMap;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeMetadata : public ::java::lang::Object {
	$class(TypeMetadata, 0, ::java::lang::Object)
public:
	TypeMetadata();
	void init$();
	void init$(::com::sun::tools::javac::code::TypeMetadata$Entry* elem);
	void init$(::com::sun::tools::javac::code::TypeMetadata* other);
	void add(::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind, ::com::sun::tools::javac::code::TypeMetadata$Entry* elem);
	virtual ::com::sun::tools::javac::code::TypeMetadata* combine(::com::sun::tools::javac::code::TypeMetadata$Entry* elem);
	virtual ::com::sun::tools::javac::code::TypeMetadata* combineAll(::com::sun::tools::javac::code::TypeMetadata* other);
	virtual ::com::sun::tools::javac::code::TypeMetadata$Entry* get(::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind);
	virtual ::com::sun::tools::javac::code::TypeMetadata* without(::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind);
	static ::com::sun::tools::javac::code::TypeMetadata* EMPTY;
	::java::util::EnumMap* contents = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_tools_javac_code_TypeMetadata_h_