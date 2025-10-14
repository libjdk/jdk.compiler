#ifndef _com_sun_tools_javac_comp_Operators$BinaryNumericOperator_h_
#define _com_sun_tools_javac_comp_Operators$BinaryNumericOperator_h_
//$ class com.sun.tools.javac.comp.Operators$BinaryNumericOperator
//$ extends com.sun.tools.javac.comp.Operators$BinaryOperatorHelper

#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>

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

class $export Operators$BinaryNumericOperator : public ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper {
	$class(Operators$BinaryNumericOperator, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper)
public:
	Operators$BinaryNumericOperator();
	using ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper::doLookup;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::java::util::function::Predicate* numericTest);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2) override;
	virtual bool test(::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	virtual bool test(Object$* arg1, Object$* arg2) override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
	::java::util::function::Predicate* numericTest = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$BinaryNumericOperator_h_