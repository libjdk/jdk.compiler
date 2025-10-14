#ifndef _com_sun_tools_javac_comp_Attr$9_h_
#define _com_sun_tools_javac_comp_Attr$9_h_
//$ class com.sun.tools.javac.comp.Attr$9
//$ extends com.sun.tools.javac.code.Types$MapVisitor

#include <com/sun/tools/javac/code/Types$MapVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class Type$ClassType;
					class Type$IntersectionClassType;
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
					class Attr;
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
					class JCDiagnostic$DiagnosticPosition;
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

class Attr$9 : public ::com::sun::tools::javac::code::Types$MapVisitor {
	$class(Attr$9, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MapVisitor)
public:
	Attr$9();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	::com::sun::tools::javac::code::Symbol$TypeSymbol* makeNotionalInterface(::com::sun::tools::javac::code::Type$IntersectionClassType* ict, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	using ::com::sun::tools::javac::code::Types$MapVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* pos) override;
	virtual ::com::sun::tools::javac::code::Type* visitIntersectionClassType(::com::sun::tools::javac::code::Type$IntersectionClassType* ict, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$9_h_