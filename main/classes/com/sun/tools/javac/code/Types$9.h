#ifndef _com_sun_tools_javac_code_Types$9_h_
#define _com_sun_tools_javac_code_Types$9_h_
//$ class com.sun.tools.javac.code.Types$9
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$CapturedType;
					class Types;
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

class Types$9 : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Types$9, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Types$9();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::lang::Void* _unused);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* _unused) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$9_h_