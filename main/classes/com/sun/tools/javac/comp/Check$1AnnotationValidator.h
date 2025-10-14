#ifndef _com_sun_tools_javac_comp_Check$1AnnotationValidator_h_
#define _com_sun_tools_javac_comp_Check$1AnnotationValidator_h_
//$ class com.sun.tools.javac.comp.Check$1AnnotationValidator
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
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

class Check$1AnnotationValidator : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Check$1AnnotationValidator, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Check$1AnnotationValidator();
	void init$(::com::sun::tools::javac::comp::Check* this$0);
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$1AnnotationValidator_h_