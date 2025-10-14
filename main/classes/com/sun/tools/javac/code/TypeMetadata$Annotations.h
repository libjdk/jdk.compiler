#ifndef _com_sun_tools_javac_code_TypeMetadata$Annotations_h_
#define _com_sun_tools_javac_code_TypeMetadata$Annotations_h_
//$ class com.sun.tools.javac.code.TypeMetadata$Annotations
//$ extends com.sun.tools.javac.code.TypeMetadata$Entry

#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>

#pragma push_macro("TO_BE_SET")
#undef TO_BE_SET

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeMetadata$Entry$Kind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
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

class $export TypeMetadata$Annotations : public ::com::sun::tools::javac::code::TypeMetadata$Entry {
	$class(TypeMetadata$Annotations, 0, ::com::sun::tools::javac::code::TypeMetadata$Entry)
public:
	TypeMetadata$Annotations();
	void init$(::com::sun::tools::javac::util::List* annos);
	virtual ::com::sun::tools::javac::code::TypeMetadata$Annotations* combine(::com::sun::tools::javac::code::TypeMetadata$Entry* other) override;
	virtual ::com::sun::tools::javac::util::List* getAnnotations();
	virtual ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* annos = nullptr;
	static ::com::sun::tools::javac::util::List* TO_BE_SET;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("TO_BE_SET")

#endif // _com_sun_tools_javac_code_TypeMetadata$Annotations_h_