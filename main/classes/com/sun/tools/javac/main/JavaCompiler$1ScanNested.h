#ifndef _com_sun_tools_javac_main_JavaCompiler$1ScanNested_h_
#define _com_sun_tools_javac_main_JavaCompiler$1ScanNested_h_
//$ class com.sun.tools.javac.main.JavaCompiler$1ScanNested
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
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
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class JavaCompiler$1ScanNested : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(JavaCompiler$1ScanNested, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	JavaCompiler$1ScanNested();
	void init$(::com::sun::tools::javac::main::JavaCompiler* this$0, ::com::sun::tools::javac::comp::Env* val$env);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* node) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	::com::sun::tools::javac::main::JavaCompiler* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* val$env = nullptr;
	::java::util::Set* dependencies = nullptr;
	bool hasLambdas = false;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_JavaCompiler$1ScanNested_h_