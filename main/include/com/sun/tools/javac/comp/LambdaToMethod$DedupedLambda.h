#ifndef _com_sun_tools_javac_comp_LambdaToMethod$DedupedLambda_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$DedupedLambda_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$DedupedLambda
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
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
					class LambdaToMethod;
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
					class JCTree;
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

class $import LambdaToMethod$DedupedLambda : public ::java::lang::Object {
	$class(LambdaToMethod$DedupedLambda, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$DedupedLambda();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0, ::com::sun::tools::javac::code::Symbol$MethodSymbol* symbol, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* symbol = nullptr;
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
	int32_t hashCode$ = 0;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$DedupedLambda_h_