#ifndef _com_sun_tools_javac_code_Attribute_h_
#define _com_sun_tools_javac_code_Attribute_h_
//$ class com.sun.tools.javac.code.Attribute
//$ extends javax.lang.model.element.AnnotationValue

#include <javax/lang/model/element/AnnotationValue.h>

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

class $import Attribute : public ::javax::lang::model::element::AnnotationValue {
	$class(Attribute, $NO_CLASS_INIT, ::javax::lang::model::element::AnnotationValue)
public:
	Attribute();
	void init$(::com::sun::tools::javac::code::Type* type);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) {}
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::TypeAnnotationPosition* getPosition();
	virtual $Object* getValue() override;
	virtual bool isSynthesized();
	::com::sun::tools::javac::code::Type* type = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute_h_