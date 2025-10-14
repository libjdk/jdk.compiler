#ifndef _com_sun_tools_javac_model_JavacElements$1Vis_h_
#define _com_sun_tools_javac_model_JavacElements$1Vis_h_
//$ class com.sun.tools.javac.model.JavacElements$1Vis
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

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
					class JCTree$JCClassDecl;
					class JCTree$JCMethodDecl;
					class JCTree$JCModuleDecl;
					class JCTree$JCPackageDecl;
					class JCTree$JCTypeParameter;
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
				namespace util {
					class List;
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

class JavacElements$1Vis : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(JavacElements$1Vis, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	JavacElements$1Vis();
	void init$(::com::sun::tools::javac::model::JavacElements* this$0);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::model::JavacElements* this$0 = nullptr;
	::com::sun::tools::javac::util::List* result = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_JavacElements$1Vis_h_