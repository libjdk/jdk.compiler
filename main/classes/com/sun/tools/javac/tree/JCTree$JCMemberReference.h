#ifndef _com_sun_tools_javac_tree_JCTree$JCMemberReference_h_
#define _com_sun_tools_javac_tree_JCTree$JCMemberReference_h_
//$ class com.sun.tools.javac.tree.JCTree$JCMemberReference
//$ extends com.sun.tools.javac.tree.JCTree$JCFunctionalExpression
//$ implements com.sun.source.tree.MemberReferenceTree

#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class MemberReferenceTree$ReferenceMode;
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
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
				namespace tree {
					class JCTree$JCExpression;
					class JCTree$JCMemberReference$OverloadKind;
					class JCTree$JCMemberReference$ReferenceKind;
					class JCTree$JCPolyExpression$PolyKind;
					class JCTree$Tag;
					class JCTree$Visitor;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCMemberReference : public ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression, public ::com::sun::source::tree::MemberReferenceTree {
	$class(JCTree$JCMemberReference, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression, ::com::sun::source::tree::MemberReferenceTree)
public:
	JCTree$JCMemberReference();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::util::List* typeargs);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* getMode() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* getOverloadKind();
	virtual ::com::sun::source::tree::ExpressionTree* getQualifierExpression() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getTypeArguments() override;
	virtual bool hasKind(::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* kind);
	virtual void setOverloadKind(::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* overloadKind);
	virtual $String* toString() override;
	::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* kind = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
	::com::sun::tools::javac::util::List* typeargs = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::code::Type* varargsElement = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* refPolyKind = nullptr;
	bool ownerAccessible = false;
	::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* overloadKind = nullptr;
	::com::sun::tools::javac::code::Type* referentType = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCMemberReference_h_