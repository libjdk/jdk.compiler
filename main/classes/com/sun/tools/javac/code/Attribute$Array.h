#ifndef _com_sun_tools_javac_code_Attribute$Array_h_
#define _com_sun_tools_javac_code_Attribute$Array_h_
//$ class com.sun.tools.javac.code.Attribute$Array
//$ extends com.sun.tools.javac.code.Attribute

#include <com/sun/tools/javac/code/Attribute.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
					class Type;
					class TypeAnnotationPosition;
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

class $export Attribute$Array : public ::com::sun::tools::javac::code::Attribute {
	$class(Attribute$Array, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	Attribute$Array();
	void init$(::com::sun::tools::javac::code::Type* type, $Array<::com::sun::tools::javac::code::Attribute>* values);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* values);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::TypeAnnotationPosition* getPosition() override;
	virtual $Object* getValue() override;
	virtual $String* toString() override;
	$Array<::com::sun::tools::javac::code::Attribute>* values = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$Array_h_