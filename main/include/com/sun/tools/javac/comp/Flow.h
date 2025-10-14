#ifndef _com_sun_tools_javac_comp_Flow_h_
#define _com_sun_tools_javac_comp_Flow_h_
//$ class com.sun.tools.javac.comp.Flow
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Symtab;
					class Types;
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
					class Check;
					class Env;
					class Resolve;
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
					class JCTree$JCLambda;
					class TreeMaker;
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
					class Context;
					class Context$Key;
					class JCDiagnostic$Factory;
					class List;
					class Log;
					class Names;
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

class $import Flow : public ::java::lang::Object {
	$class(Flow, 0, ::java::lang::Object)
public:
	Flow();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual bool aliveAfter(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* that, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void analyzeLambda(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCLambda* that, ::com::sun::tools::javac::tree::TreeMaker* make, bool speculative);
	virtual ::com::sun::tools::javac::util::List* analyzeLambdaThrownTypes(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCLambda* that, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual bool breaksOutOf(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* loop, ::com::sun::tools::javac::tree::JCTree* body, ::com::sun::tools::javac::tree::TreeMaker* make);
	static ::com::sun::tools::javac::comp::Flow* instance(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::util::Context$Key* flowKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::comp::Env* attrEnv = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	bool allowEffectivelyFinalInInnerClasses = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow_h_