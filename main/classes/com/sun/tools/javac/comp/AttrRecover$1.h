#ifndef _com_sun_tools_javac_comp_AttrRecover$1_h_
#define _com_sun_tools_javac_comp_AttrRecover$1_h_
//$ class com.sun.tools.javac.comp.AttrRecover$1
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class AttrRecover;
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
					class JCTree$JCErroneous;
					class JCTree$JCLambda;
					class JCTree$JCReturn;
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
					class ListBuffer;
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

class AttrRecover$1 : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(AttrRecover$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	AttrRecover$1();
	void init$(::com::sun::tools::javac::comp::AttrRecover* this$0, bool val$voidCompatible, ::com::sun::tools::javac::util::ListBuffer* val$rollback, ::com::sun::tools::javac::tree::JCTree$JCLambda* val$lambda);
	void lambda$visitReturn$0(::com::sun::tools::javac::tree::JCTree$JCLambda* lambda, ::com::sun::tools::javac::tree::JCTree$JCErroneous* err, ::com::sun::tools::javac::tree::JCTree$JCReturn* tree);
	static void lambda$visitReturn$1(::com::sun::tools::javac::tree::JCTree$JCReturn* tree);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::AttrRecover* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCLambda* val$lambda = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$rollback = nullptr;
	bool val$voidCompatible = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrRecover$1_h_