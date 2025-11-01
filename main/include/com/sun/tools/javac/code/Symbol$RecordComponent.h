#ifndef _com_sun_tools_javac_code_Symbol$RecordComponent_h_
#define _com_sun_tools_javac_code_Symbol$RecordComponent_h_
//$ class com.sun.tools.javac.code.Symbol$RecordComponent
//$ extends com.sun.tools.javac.code.Symbol$VarSymbol
//$ implements javax.lang.model.element.RecordComponentElement

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <javax/lang/model/element/RecordComponentElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$MethodSymbol;
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
				namespace tree {
					class JCTree$JCMethodDecl;
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
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementKind;
				class ElementVisitor;
				class ExecutableElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$RecordComponent : public ::com::sun::tools::javac::code::Symbol$VarSymbol, public ::javax::lang::model::element::RecordComponentElement {
	$class(Symbol$RecordComponent, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol, ::javax::lang::model::element::RecordComponentElement)
public:
	Symbol$RecordComponent();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::accept;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	void init$(::com::sun::tools::javac::code::Symbol$VarSymbol* field, ::com::sun::tools::javac::util::List* annotations);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual ::javax::lang::model::element::ExecutableElement* getAccessor() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::com::sun::tools::javac::util::List* getOriginalAnnos();
	virtual bool isVarargs();
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* accessor = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* accessorMeth = nullptr;
	::com::sun::tools::javac::util::List* originalAnnos = nullptr;
	int32_t pos = 0;
	bool isVarargs$ = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$RecordComponent_h_