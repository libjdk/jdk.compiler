#ifndef _com_sun_tools_javac_comp_Operators$UnaryPrefixPostfixOperator_h_
#define _com_sun_tools_javac_comp_Operators$UnaryPrefixPostfixOperator_h_
//$ class com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator
//$ extends com.sun.tools.javac.comp.Operators$UnaryNumericOperator

#include <com/sun/tools/javac/comp/Operators$UnaryNumericOperator.h>

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

class $export Operators$UnaryPrefixPostfixOperator : public ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator {
	$class(Operators$UnaryPrefixPostfixOperator, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator)
public:
	Operators$UnaryPrefixPostfixOperator();
	using ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator::doLookup;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* arg) override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$UnaryPrefixPostfixOperator_h_