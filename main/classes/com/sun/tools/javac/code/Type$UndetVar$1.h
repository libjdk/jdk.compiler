#ifndef _com_sun_tools_javac_code_Type$UndetVar$1_h_
#define _com_sun_tools_javac_code_Type$UndetVar$1_h_
//$ class com.sun.tools.javac.code.Type$UndetVar$1
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$UndetVar$1 : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(Type$UndetVar$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	Type$UndetVar$1();
	void init$(::com::sun::tools::javac::code::Type$UndetVar* this$0);
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* uv, ::java::lang::Void* _unused);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* uv, Object$* _unused) override;
	::com::sun::tools::javac::code::Type$UndetVar* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$UndetVar$1_h_