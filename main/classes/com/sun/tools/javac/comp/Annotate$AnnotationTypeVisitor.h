#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationTypeVisitor_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationTypeVisitor_h_
//$ class com.sun.tools.javac.comp.Annotate$AnnotationTypeVisitor
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Symtab;
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
					class Annotate;
					class Attr;
					class Check;
					class Env;
					class TypeEnvs;
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
					class JCTree$JCAnnotation;
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
				namespace comp {

class $export Annotate$AnnotationTypeVisitor : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Annotate$AnnotationTypeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Annotate$AnnotationTypeVisitor();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0, ::com::sun::tools::javac::comp::Attr* attr, ::com::sun::tools::javac::comp::Check* check, ::com::sun::tools::javac::code::Symtab* tab, ::com::sun::tools::javac::comp::TypeEnvs* typeEnvs);
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getRepeatable();
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getTarget();
	virtual void scanAnnotationType(::com::sun::tools::javac::tree::JCTree$JCClassDecl* decl);
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Check* check = nullptr;
	::com::sun::tools::javac::code::Symtab* tab = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::code::Attribute$Compound* target = nullptr;
	::com::sun::tools::javac::code::Attribute$Compound* repeatable = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationTypeVisitor_h_