#ifndef _com_sun_tools_javac_main_JavaCompiler$1MethodBodyRemover_h_
#define _com_sun_tools_javac_main_JavaCompiler$1MethodBodyRemover_h_
//$ class com.sun.tools.javac.main.JavaCompiler$1MethodBodyRemover
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class JavaCompiler;
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
					class JCTree$JCClassDecl;
					class JCTree$JCMethodDecl;
					class JCTree$JCVariableDecl;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class JavaCompiler$1MethodBodyRemover : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(JavaCompiler$1MethodBodyRemover, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	JavaCompiler$1MethodBodyRemover();
	void init$(::com::sun::tools::javac::main::JavaCompiler* this$0, bool val$isInterface);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::main::JavaCompiler* this$0 = nullptr;
	bool val$isInterface = false;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_JavaCompiler$1MethodBodyRemover_h_