#ifndef _com_sun_tools_javac_comp_Operators$UnaryOperatorHelper_h_
#define _com_sun_tools_javac_comp_Operators$UnaryOperatorHelper_h_
//$ class com.sun.tools.javac.comp.Operators$UnaryOperatorHelper
//$ extends com.sun.tools.javac.comp.Operators$OperatorHelper
//$ implements java.util.function.Predicate

#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <java/lang/Array.h>
#include <java/util/function/Predicate.h>

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

class $export Operators$UnaryOperatorHelper : public ::com::sun::tools::javac::comp::Operators$OperatorHelper, public ::java::util::function::Predicate {
	$class(Operators$UnaryOperatorHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Operators$OperatorHelper, ::java::util::function::Predicate)
public:
	Operators$UnaryOperatorHelper();
	using ::com::sun::tools::javac::comp::Operators$OperatorHelper::doLookup;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper* addUnaryOperator(::com::sun::tools::javac::comp::Operators$OperatorType* arg, ::com::sun::tools::javac::comp::Operators$OperatorType* res, $ints* opcode);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* doLookup(::com::sun::tools::javac::code::Type* t);
	virtual bool isUnaryOperatorApplicable(::com::sun::tools::javac::code::Symbol$OperatorSymbol* op, ::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$addUnaryOperator$1(::com::sun::tools::javac::comp::Operators$OperatorType* arg, ::com::sun::tools::javac::comp::Operators$OperatorType* res, $ints* opcode);
	bool lambda$doLookup$0(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol$OperatorSymbol* op);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::code::Type* t) {return nullptr;}
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$UnaryOperatorHelper_h_