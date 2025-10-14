#ifndef _com_sun_tools_javac_jvm_ClassWriter$AttributeWriter_h_
#define _com_sun_tools_javac_jvm_ClassWriter$AttributeWriter_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$AttributeWriter
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
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassWriter;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ClassWriter$AttributeWriter : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$class(ClassWriter$AttributeWriter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	ClassWriter$AttributeWriter();
	void init$(::com::sun::tools::javac::jvm::ClassWriter* this$0);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* compound) override;
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* _value) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* x) override;
	::com::sun::tools::javac::jvm::ClassWriter* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$AttributeWriter_h_