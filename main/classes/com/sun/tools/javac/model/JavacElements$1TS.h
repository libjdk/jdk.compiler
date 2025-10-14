#ifndef _com_sun_tools_javac_model_JavacElements$1TS_h_
#define _com_sun_tools_javac_model_JavacElements$1TS_h_
//$ class com.sun.tools.javac.model.JavacElements$1TS
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
				namespace model {
					class JavacElements;
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
					class JCTree$JCAnnotation;
					class JCTree$JCAssign;
					class JCTree$JCExpression;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class JavacElements$1TS : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(JavacElements$1TS, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	JavacElements$1TS();
	void init$(::com::sun::tools::javac::model::JavacElements* this$0, ::com::sun::tools::javac::tree::JCTree* val$tree, ::com::sun::tools::javac::code::Symbol$MethodSymbol* val$sym);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* t) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* t) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* t) override;
	::com::sun::tools::javac::model::JavacElements* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* val$sym = nullptr;
	::com::sun::tools::javac::tree::JCTree* val$tree = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* result = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_JavacElements$1TS_h_