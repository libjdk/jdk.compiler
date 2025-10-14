#ifndef _com_sun_tools_javac_code_Attribute$Enum_h_
#define _com_sun_tools_javac_code_Attribute$Enum_h_
//$ class com.sun.tools.javac.code.Attribute$Enum
//$ extends com.sun.tools.javac.code.Attribute

#include <com/sun/tools/javac/code/Attribute.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
					class Symbol$VarSymbol;
					class Type;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationValueVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Attribute$Enum : public ::com::sun::tools::javac::code::Attribute {
	$class(Attribute$Enum, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	Attribute$Enum();
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol$VarSymbol* value);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) override;
	virtual $Object* getValue() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$VarSymbol* value = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$Enum_h_