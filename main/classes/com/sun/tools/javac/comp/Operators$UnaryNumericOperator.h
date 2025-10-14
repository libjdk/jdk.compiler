#ifndef _com_sun_tools_javac_comp_Operators$UnaryNumericOperator_h_
#define _com_sun_tools_javac_comp_Operators$UnaryNumericOperator_h_
//$ class com.sun.tools.javac.comp.Operators$UnaryNumericOperator
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
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Operators$UnaryNumericOperator : public ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper {
	$class(Operators$UnaryNumericOperator, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper)
public:
	Operators$UnaryNumericOperator();
	using ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper::doLookup;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::java::util::function::Predicate* numericTest);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* arg) override;
	virtual bool test(::com::sun::tools::javac::code::Type* type);
	virtual bool test(Object$* type) override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
	::java::util::function::Predicate* numericTest = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$UnaryNumericOperator_h_