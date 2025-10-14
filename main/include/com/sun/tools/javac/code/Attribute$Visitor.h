#ifndef _com_sun_tools_javac_code_Attribute$Visitor_h_
#define _com_sun_tools_javac_code_Attribute$Visitor_h_
//$ interface com.sun.tools.javac.code.Attribute$Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				namespace code {

class $import Attribute$Visitor : public ::java::lang::Object {
	$interface(Attribute$Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) {}
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) {}
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* compound) {}
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* value) {}
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) {}
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) {}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$Visitor_h_