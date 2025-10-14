#ifndef _com_sun_tools_javac_comp_LambdaToMethod$KlassInfo_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$KlassInfo_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$KlassInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
					class Symbol$VarSymbol;
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
					class JCTree$JCClassDecl;
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
					class ListBuffer;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$KlassInfo : public ::java::lang::Object {
	$class(LambdaToMethod$KlassInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$KlassInfo();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* clazz);
	void addMethod(::com::sun::tools::javac::tree::JCTree* decl);
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* appendedMethodList = nullptr;
	::java::util::Map* dedupedLambdas = nullptr;
	::java::util::Map* dynMethSyms = nullptr;
	::java::util::Map* deserializeCases = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* deserMethodSym = nullptr;
	::com::sun::tools::javac::code::Symbol$VarSymbol* deserParamSym = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* clazz = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$KlassInfo_h_