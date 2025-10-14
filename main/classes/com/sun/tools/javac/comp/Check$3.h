#ifndef _com_sun_tools_javac_comp_Check$3_h_
#define _com_sun_tools_javac_comp_Check$3_h_
//$ class com.sun.tools.javac.comp.Check$3
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$CapturedType;
					class Type$TypeVar;
					class Type$WildcardType;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Check$3 : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Check$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Check$3();
	void init$(::com::sun::tools::javac::comp::Check* this$0);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Boolean* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::lang::Void* s);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* s);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$3_h_