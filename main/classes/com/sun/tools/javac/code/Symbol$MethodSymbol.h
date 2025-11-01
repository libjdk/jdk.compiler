#ifndef _com_sun_tools_javac_code_Symbol$MethodSymbol_h_
#define _com_sun_tools_javac_code_Symbol$MethodSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$MethodSymbol
//$ extends com.sun.tools.javac.code.Symbol
//$ implements javax.lang.model.element.ExecutableElement

#include <com/sun/tools/javac/code/Symbol.h>
#include <javax/lang/model/element/ExecutableElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Symbol$ClassSymbol;
					class Symbol$MethodHandleSymbol;
					class Symbol$TypeSymbol;
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
				namespace jvm {
					class Code;
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
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
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

class $export Symbol$MethodSymbol : public ::com::sun::tools::javac::code::Symbol {
	$class(Symbol$MethodSymbol, 0, ::com::sun::tools::javac::code::Symbol, ::javax::lang::model::element::ExecutableElement)
public:
	Symbol$MethodSymbol();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* asHandle();
	virtual ::com::sun::tools::javac::code::Symbol* asMemberOf(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types) override;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* binaryImplementation(::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::code::Types* types);
	virtual bool binaryOverrides(::com::sun::tools::javac::code::Symbol* _other, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* clone(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Attribute* getDefaultValue();
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual ::com::sun::tools::javac::util::List* getParameters();
	virtual ::com::sun::tools::javac::code::Type* getReceiverType();
	virtual ::com::sun::tools::javac::code::Type* getReturnType();
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual ::com::sun::tools::javac::util::List* getThrownTypes();
	virtual ::com::sun::tools::javac::util::List* getTypeParameters() override;
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* implementation(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types, bool checkResult);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* implementation(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types, bool checkResult, ::java::util::function::Predicate* implFilter);
	virtual ::com::sun::tools::javac::code::Symbol* implemented(::com::sun::tools::javac::code::Symbol$TypeSymbol* c, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::code::Symbol* implementedIn(::com::sun::tools::javac::code::Symbol$TypeSymbol* c, ::com::sun::tools::javac::code::Types* types);
	virtual bool isDefault();
	virtual bool isHandle();
	virtual bool isInheritedIn(::com::sun::tools::javac::code::Symbol* clazz, ::com::sun::tools::javac::code::Types* types) override;
	virtual bool isLambdaMethod();
	bool isOverridableIn(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	virtual bool isStaticOrInstanceInit();
	virtual bool isVarArgs();
	static bool lambda$static$0(::com::sun::tools::javac::code::Symbol* s);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* originalEnclosingMethod();
	virtual bool overrides(::com::sun::tools::javac::code::Symbol* _other, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types, bool checkResult) override;
	virtual bool overrides(::com::sun::tools::javac::code::Symbol* _other, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types, bool checkResult, bool requireConcreteIfInherited);
	virtual ::com::sun::tools::javac::util::List* params();
	virtual int32_t poolTag() override;
	virtual $String* toString() override;
	class $export MemberClass0$ : public ::javax::lang::model::element::ExecutableElement {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::type::TypeMirror* asType() override;
		virtual ::java::util::List* getTypeParameters() override;
		virtual ::javax::lang::model::type::TypeMirror* getReturnType() override;
		virtual ::java::util::List* getParameters() override;
		virtual ::javax::lang::model::type::TypeMirror* getReceiverType() override;
		virtual bool isVarArgs() override;
		virtual bool isDefault() override;
		virtual ::java::util::List* getThrownTypes() override;
		virtual ::javax::lang::model::element::AnnotationValue* getDefaultValue() override;
		virtual ::javax::lang::model::element::Name* getSimpleName() override;
		virtual ::javax::lang::model::element::ElementKind* getKind() override;
		virtual ::java::util::Set* getModifiers() override;
		virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
		virtual ::java::util::List* getEnclosedElements() override;
		virtual bool equals(Object$* arg0) override;
		virtual int32_t hashCode() override;
		virtual ::java::util::List* getAnnotationMirrors() override;
		virtual ::java::lang::annotation::Annotation* getAnnotation($Class* arg0) override;
		virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* arg0) override;
		virtual $Object* accept(::javax::lang::model::element::ElementVisitor* arg0, Object$* arg1) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::javax::lang::model::element::ExecutableElement* as$(::javax::lang::model::element::ExecutableElement**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::jvm::Code* code = nullptr;
	::com::sun::tools::javac::util::List* extraParams = nullptr;
	::com::sun::tools::javac::util::List* capturedLocals = nullptr;
	::com::sun::tools::javac::util::List* params$ = nullptr;
	::com::sun::tools::javac::code::Attribute* defaultValue = nullptr;
	static ::java::util::function::Predicate* implementation_filter;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$MethodSymbol_h_