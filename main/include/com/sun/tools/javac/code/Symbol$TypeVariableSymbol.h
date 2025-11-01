#ifndef _com_sun_tools_javac_code_Symbol$TypeVariableSymbol_h_
#define _com_sun_tools_javac_code_Symbol$TypeVariableSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$TypeVariableSymbol
//$ extends com.sun.tools.javac.code.Symbol$TypeSymbol
//$ implements javax.lang.model.element.TypeParameterElement

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <javax/lang/model/element/TypeParameterElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Attribute$TypeCompound;
					class Symbol;
					class Type;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ElementKind;
				class ElementVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$TypeVariableSymbol : public ::com::sun::tools::javac::code::Symbol$TypeSymbol, public ::javax::lang::model::element::TypeParameterElement {
	$class(Symbol$TypeVariableSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$TypeSymbol, ::javax::lang::model::element::TypeParameterElement)
public:
	Symbol$TypeVariableSymbol();
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::accept;
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::clone;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getAttribute($Class* annoType) override;
	virtual ::java::util::List* getBounds() override;
	virtual ::javax::lang::model::element::Element* getGenericElement() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual bool isCurrentSymbolsAnnotation(::com::sun::tools::javac::code::Attribute$TypeCompound* anno, int32_t index);
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$TypeVariableSymbol_h_