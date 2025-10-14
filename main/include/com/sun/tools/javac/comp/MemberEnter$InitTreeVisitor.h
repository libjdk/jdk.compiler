#ifndef _com_sun_tools_javac_comp_MemberEnter$InitTreeVisitor_h_
#define _com_sun_tools_javac_comp_MemberEnter$InitTreeVisitor_h_
//$ class com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

#pragma push_macro("ALLOWED_OPERATORS")
#undef ALLOWED_OPERATORS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCBinary;
					class JCTree$JCConditional;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCLiteral;
					class JCTree$JCParens;
					class JCTree$JCTypeCast;
					class JCTree$JCUnary;
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
				namespace comp {

class $import MemberEnter$InitTreeVisitor : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(MemberEnter$InitTreeVisitor, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	MemberEnter$InitTreeVisitor();
	void init$();
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* that) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* that) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* that) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* that) override;
	static ::java::util::Set* ALLOWED_OPERATORS;
	bool result = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ALLOWED_OPERATORS")

#endif // _com_sun_tools_javac_comp_MemberEnter$InitTreeVisitor_h_