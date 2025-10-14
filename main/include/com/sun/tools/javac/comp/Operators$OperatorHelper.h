#ifndef _com_sun_tools_javac_comp_Operators$OperatorHelper_h_
#define _com_sun_tools_javac_comp_Operators$OperatorHelper_h_
//$ class com.sun.tools.javac.comp.Operators$OperatorHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$OperatorSymbol;
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
				namespace util {
					class List;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Optional;
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

class $import Operators$OperatorHelper : public ::java::lang::Object {
	$class(Operators$OperatorHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Operators$OperatorHelper();
	void init$(::com::sun::tools::javac::comp::Operators* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* doLookup(::java::util::function::Predicate* applicabilityTest);
	$Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol>* initOperators();
	static $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol>* lambda$initOperators$0(int32_t x$0);
	::com::sun::tools::javac::comp::Operators* this$0 = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::java::util::Optional* alternatives = nullptr;
	::com::sun::tools::javac::util::List* operatorSuppliers = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators$OperatorHelper_h_