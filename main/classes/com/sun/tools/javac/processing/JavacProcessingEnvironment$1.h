#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$1_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$1_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$1
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacProcessingEnvironment;
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
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCMethodDecl;
					class JCTree$JCNewClass;
					class JCTree$JCUnary;
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
				namespace processing {

class JavacProcessingEnvironment$1 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(JavacProcessingEnvironment$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	JavacProcessingEnvironment$1();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0);
	void lambda$visitClassDef$1(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a);
	void lambda$visitTopLevel$0(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* node, ::com::sun::tools::javac::code::Symbol* sym);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* node) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* node) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* node) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* node) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* node) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* node) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* node) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* node) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* node) override;
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* node) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* node) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* node) override;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* topLevel = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$1_h_