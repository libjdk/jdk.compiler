#ifndef _com_sun_tools_javac_comp_Check$Validator_h_
#define _com_sun_tools_javac_comp_Check$Validator_h_
//$ class com.sun.tools.javac.comp.Check$Validator
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
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
				namespace tree {
					class JCTree;
					class JCTree$JCAnnotatedType;
					class JCTree$JCArrayTypeTree;
					class JCTree$JCFieldAccess;
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCTypeApply;
					class JCTree$JCTypeParameter;
					class JCTree$JCWildcard;
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

class $import Check$Validator : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Check$Validator, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Check$Validator();
	void init$(::com::sun::tools::javac::comp::Check* this$0, ::com::sun::tools::javac::comp::Env* env);
	virtual void validateTree(::com::sun::tools::javac::tree::JCTree* tree, bool checkRaw, bool isOuter);
	virtual void validateTrees(::com::sun::tools::javac::util::List* trees, bool checkRaw, bool isOuter);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSelectInternal(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree);
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* tree) override;
	virtual void visitTypeIdent(::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* that) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitWildcard(::com::sun::tools::javac::tree::JCTree$JCWildcard* tree) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	bool checkRaw = false;
	bool isOuter = false;
	::com::sun::tools::javac::comp::Env* env = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$Validator_h_