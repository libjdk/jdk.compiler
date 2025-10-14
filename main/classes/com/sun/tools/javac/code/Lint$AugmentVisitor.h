#ifndef _com_sun_tools_javac_code_Lint$AugmentVisitor_h_
#define _com_sun_tools_javac_code_Lint$AugmentVisitor_h_
//$ class com.sun.tools.javac.code.Lint$AugmentVisitor
//$ extends com.sun.tools.javac.code.Attribute$Visitor

#include <com/sun/tools/javac/code/Attribute$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Array;
					class Attribute$Class;
					class Attribute$Compound;
					class Attribute$Constant;
					class Attribute$Enum;
					class Attribute$Error;
					class Lint;
					class Lint$LintCategory;
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
				namespace util {
					class Context;
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
				namespace code {

class $export Lint$AugmentVisitor : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$class(Lint$AugmentVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	Lint$AugmentVisitor();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Lint* augment(::com::sun::tools::javac::code::Lint* parent, ::com::sun::tools::javac::code::Attribute$Compound* attr);
	virtual ::com::sun::tools::javac::code::Lint* augment(::com::sun::tools::javac::code::Lint* parent, ::com::sun::tools::javac::util::List* attrs);
	void initSyms();
	void suppress(::com::sun::tools::javac::code::Lint$LintCategory* lc);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* compound) override;
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* value) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) override;
	::com::sun::tools::javac::util::Context* context = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Lint* parent = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Lint$AugmentVisitor_h_