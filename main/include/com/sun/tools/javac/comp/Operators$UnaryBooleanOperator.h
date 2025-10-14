#ifndef _com_sun_tools_javac_comp_Operators$UnaryBooleanOperator_h_
#define _com_sun_tools_javac_comp_Operators$UnaryBooleanOperator_h_
//$ class com.sun.tools.javac.comp.Operators$UnaryBooleanOperator
//$ extends com.sun.tools.javac.comp.Operators$UnaryOperatorHelper

#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$OperatorSymbol;
					class Type;
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
					class Operators;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$Tag;
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

class $import Operators$UnaryBooleanOperator : public ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper {
	$class(Operators$UnaryBooleanOperator, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper)
public:
	Operators$UnaryBooleanOperator();
	using ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper::doLookup;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* arg) override;
	virtual bool test(::com::sun::tools::javac::code::Type* type);
	virtual bool test(Object$* type) override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$UnaryBooleanOperator_h_