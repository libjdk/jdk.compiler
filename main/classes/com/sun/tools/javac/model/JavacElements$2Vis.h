#ifndef _com_sun_tools_javac_model_JavacElements$2Vis_h_
#define _com_sun_tools_javac_model_JavacElements$2Vis_h_
//$ class com.sun.tools.javac.model.JavacElements$2Vis
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
					class JCTree;
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

class JavacElements$2Vis : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$class(JavacElements$2Vis, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	JavacElements$2Vis();
	void init$(::com::sun::tools::javac::model::JavacElements* this$0, ::com::sun::tools::javac::tree::JCTree* val$tree, ::com::sun::tools::javac::code::Attribute* val$findme);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* anno) override;
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* value) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) override;
	::com::sun::tools::javac::model::JavacElements* this$0 = nullptr;
	::com::sun::tools::javac::code::Attribute* val$findme = nullptr;
	::com::sun::tools::javac::tree::JCTree* val$tree = nullptr;
	::com::sun::tools::javac::tree::JCTree* result = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_JavacElements$2Vis_h_