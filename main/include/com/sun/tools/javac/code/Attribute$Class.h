#ifndef _com_sun_tools_javac_code_Attribute$Class_h_
#define _com_sun_tools_javac_code_Attribute$Class_h_
//$ class com.sun.tools.javac.code.Attribute$Class
//$ extends com.sun.tools.javac.code.Attribute

#include <com/sun/tools/javac/code/Attribute.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
					class Type;
					class Types;
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

class $import Attribute$Class : public ::com::sun::tools::javac::code::Attribute {
	$class(Attribute$Class, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	Attribute$Class();
	void init$(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Type* type);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) override;
	virtual $Object* getValue() override;
	static ::com::sun::tools::javac::code::Type* makeClassType(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Type* type);
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* classType = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$Class_h_