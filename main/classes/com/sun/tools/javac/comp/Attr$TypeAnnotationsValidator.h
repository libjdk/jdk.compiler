#ifndef _com_sun_tools_javac_comp_Attr$TypeAnnotationsValidator_h_
#define _com_sun_tools_javac_comp_Attr$TypeAnnotationsValidator_h_
//$ class com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Attr;
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
					class JCTree$JCAnnotatedType;
					class JCTree$JCAnnotation;
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCInstanceOf;
					class JCTree$JCMethodDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCTypeCast;
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
				namespace comp {

class Attr$TypeAnnotationsValidator : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Attr$TypeAnnotationsValidator, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Attr$TypeAnnotationsValidator();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, bool sigOnly);
	void checkForDeclarationAnnotations(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::Symbol* sym);
	void validateAnnotatedType(::com::sun::tools::javac::tree::JCTree* errtree, ::com::sun::tools::javac::code::Type* type);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	bool sigOnly = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$TypeAnnotationsValidator_h_