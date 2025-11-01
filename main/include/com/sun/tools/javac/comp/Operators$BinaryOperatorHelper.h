#ifndef _com_sun_tools_javac_comp_Operators$BinaryOperatorHelper_h_
#define _com_sun_tools_javac_comp_Operators$BinaryOperatorHelper_h_
//$ class com.sun.tools.javac.comp.Operators$BinaryOperatorHelper
//$ extends com.sun.tools.javac.comp.Operators$OperatorHelper
//$ implements java.util.function.BiPredicate

#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <java/lang/Array.h>
#include <java/util/function/BiPredicate.h>

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
					class Operators$OperatorType;
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

class $import Operators$BinaryOperatorHelper : public ::com::sun::tools::javac::comp::Operators$OperatorHelper, public ::java::util::function::BiPredicate {
	$class(Operators$BinaryOperatorHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$OperatorHelper, ::java::util::function::BiPredicate)
public:
	Operators$BinaryOperatorHelper();
	using ::com::sun::tools::javac::comp::Operators$OperatorHelper::doLookup;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper* addBinaryOperator(::com::sun::tools::javac::comp::Operators$OperatorType* arg1, ::com::sun::tools::javac::comp::Operators$OperatorType* arg2, ::com::sun::tools::javac::comp::Operators$OperatorType* res, $ints* opcode);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* doLookup(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2);
	virtual bool isBinaryOperatorApplicable(::com::sun::tools::javac::code::Symbol$OperatorSymbol* op, ::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$addBinaryOperator$1(::com::sun::tools::javac::comp::Operators$OperatorType* arg1, ::com::sun::tools::javac::comp::Operators$OperatorType* arg2, ::com::sun::tools::javac::comp::Operators$OperatorType* res, $ints* opcode);
	bool lambda$doLookup$0(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2, ::com::sun::tools::javac::code::Symbol$OperatorSymbol* op);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2) {return nullptr;}
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$BinaryOperatorHelper_h_