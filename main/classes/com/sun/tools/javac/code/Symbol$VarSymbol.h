#ifndef _com_sun_tools_javac_code_Symbol$VarSymbol_h_
#define _com_sun_tools_javac_code_Symbol$VarSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$VarSymbol
//$ extends com.sun.tools.javac.code.Symbol
//$ implements javax.lang.model.element.VariableElement

#include <com/sun/tools/javac/code/Symbol.h>
#include <javax/lang/model/element/VariableElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodHandleSymbol;
					class Symbol$Visitor;
					class Type;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr;
					class Env;
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
					class JCTree$JCVariableDecl;
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
				class Name;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Symbol$VarSymbol : public ::com::sun::tools::javac::code::Symbol, public ::javax::lang::model::element::VariableElement {
	$class(Symbol$VarSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol, ::javax::lang::model::element::VariableElement)
public:
	Symbol$VarSymbol();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Symbol* asMemberOf(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types) override;
	virtual ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* asMethodHandle(bool getter);
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* clone(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Object* getConstValue();
	virtual $Object* getConstantValue() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual bool isExceptionParameter();
	virtual bool isResourceVariable();
	$Object* lambda$setLazyConstValue$0(::com::sun::tools::javac::comp::Attr* attr, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variable);
	virtual int32_t poolTag() override;
	virtual void setData(Object$* data);
	virtual void setLazyConstValue(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr* attr, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variable);
	virtual $String* toString() override;
	int32_t pos = 0;
	int32_t adr = 0;
	$Object* data = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$VarSymbol_h_