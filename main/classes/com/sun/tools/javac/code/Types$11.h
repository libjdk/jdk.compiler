#ifndef _com_sun_tools_javac_code_Types$11_h_
#define _com_sun_tools_javac_code_Types$11_h_
//$ class com.sun.tools.javac.code.Types$11
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$TypeVar;
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

class Types$11 : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Types$11, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Types$11();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* _unused);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* _unused) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* _unused);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* _unused) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$11_h_