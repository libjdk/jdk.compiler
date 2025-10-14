#ifndef _com_sun_tools_javac_comp_Operators$BinaryEqualityOperator_h_
#define _com_sun_tools_javac_comp_Operators$BinaryEqualityOperator_h_
//$ class com.sun.tools.javac.comp.Operators$BinaryEqualityOperator
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
					class Operators$ComparisonKind;
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

class $export Operators$BinaryEqualityOperator : public ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper {
	$class(Operators$BinaryEqualityOperator, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper)
public:
	Operators$BinaryEqualityOperator();
	using ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper::doLookup;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	::com::sun::tools::javac::comp::Operators$ComparisonKind* getKind(::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2) override;
	virtual bool test(::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	virtual bool test(Object$* arg1, Object$* arg2) override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$BinaryEqualityOperator_h_