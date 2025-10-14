#ifndef _com_sun_tools_javac_tree_TreeMaker$AnnotationBuilder_h_
#define _com_sun_tools_javac_tree_TreeMaker$AnnotationBuilder_h_
//$ class com.sun.tools.javac.tree.TreeMaker$AnnotationBuilder
//$ extends com.sun.tools.javac.code.Attribute$Visitor

#include <com/sun/tools/javac/code/Attribute$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Array;
					class Attribute$Class;
					class Attribute$Compound;
					class Attribute$Constant;
					class Attribute$Enum;
					class Attribute$Error;
					class Attribute$TypeCompound;
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
					class JCTree$JCExpression;
					class TreeMaker;
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

class $import TreeMaker$AnnotationBuilder : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$class(TreeMaker$AnnotationBuilder, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	TreeMaker$AnnotationBuilder();
	void init$(::com::sun::tools::javac::tree::TreeMaker* this$0);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* translate(::com::sun::tools::javac::code::Attribute* a);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* translate(::com::sun::tools::javac::code::Attribute$Compound* a);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* translate(::com::sun::tools::javac::code::Attribute$TypeCompound* a);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* compound) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* visitCompoundInternal(::com::sun::tools::javac::code::Attribute$Compound* compound);
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* v) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* visitTypeCompoundInternal(::com::sun::tools::javac::code::Attribute$TypeCompound* compound);
	::com::sun::tools::javac::tree::TreeMaker* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* result = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeMaker$AnnotationBuilder_h_