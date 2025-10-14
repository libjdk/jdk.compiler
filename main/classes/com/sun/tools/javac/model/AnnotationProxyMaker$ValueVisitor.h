#ifndef _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor_h_
#define _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor_h_
//$ class com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor
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
					class Symbol$MethodSymbol;
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
					class AnnotationProxyMaker;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class AnnotationProxyMaker$ValueVisitor : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$class(AnnotationProxyMaker$ValueVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	AnnotationProxyMaker$ValueVisitor();
	void init$(::com::sun::tools::javac::model::AnnotationProxyMaker* this$0, ::com::sun::tools::javac::code::Symbol$MethodSymbol* meth);
	virtual $Object* getValue(::com::sun::tools::javac::code::Attribute* attr);
	void typeMismatch(::java::lang::reflect::Method* method, ::com::sun::tools::javac::code::Attribute* attr);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* a) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* c) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* c) override;
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* c) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) override;
	::com::sun::tools::javac::model::AnnotationProxyMaker* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* meth = nullptr;
	$Class* returnClass = nullptr;
	$Object* value = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor_h_