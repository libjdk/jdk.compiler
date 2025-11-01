#ifndef _com_sun_tools_javac_code_Symbol_h_
#define _com_sun_tools_javac_code_Symbol_h_
//$ class com.sun.tools.javac.code.Symbol
//$ extends com.sun.tools.javac.code.AnnoConstruct
//$ implements com.sun.tools.javac.jvm.PoolConstant,javax.lang.model.element.Element

#include <com/sun/tools/javac/code/AnnoConstruct.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <javax/lang/model/element/Element.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Kinds$Kind;
					class Scope$WriteableScope;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symbol$Visitor;
					class SymbolMetadata;
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
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementKind;
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

class $import Symbol : public ::com::sun::tools::javac::code::AnnoConstruct, public ::com::sun::tools::javac::jvm::PoolConstant, public ::javax::lang::model::element::Element {
	$class(Symbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::AnnoConstruct, ::com::sun::tools::javac::jvm::PoolConstant, ::javax::lang::model::element::Element)
public:
	Symbol();
	using ::javax::lang::model::element::Element::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Kinds$Kind* kind, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p);
	virtual bool annotationsPendingCompletion();
	virtual void apiComplete();
	virtual void appendAttributes(::com::sun::tools::javac::util::List* l);
	virtual void appendClassInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual void appendInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual void appendUniqueTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual ::com::sun::tools::javac::code::Symbol* asMemberOf(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types);
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* attribute(::com::sun::tools::javac::code::Symbol* anno);
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol();
	virtual ::com::sun::tools::javac::code::Symbol* clone(::com::sun::tools::javac::code::Symbol* newOwner);
	virtual void complete();
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enclClass();
	virtual ::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Types* types);
	virtual bool exists();
	virtual ::com::sun::tools::javac::code::Type* externalType(::com::sun::tools::javac::code::Types* types);
	virtual int64_t flags();
	virtual ::com::sun::tools::javac::util::Name* flatName();
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::util::List* getClassInitTypeAttributes();
	virtual ::com::sun::tools::javac::util::List* getDeclarationAttributes();
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::com::sun::tools::javac::util::List* getInitTypeAttributes();
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::com::sun::tools::javac::code::SymbolMetadata* getMetadata();
	virtual ::java::util::Set* getModifiers() override;
	virtual ::com::sun::tools::javac::util::Name* getQualifiedName();
	virtual ::com::sun::tools::javac::util::List* getRawAttributes();
	virtual ::com::sun::tools::javac::util::List* getRawTypeAttributes();
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual ::com::sun::tools::javac::util::List* getTypeParameters();
	virtual bool hasAnnotations();
	virtual bool hasDeprecatedAnnotation();
	virtual bool hasOuterInstance();
	virtual bool hasTypeAnnotations();
	bool hiddenIn(::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz, ::com::sun::tools::javac::code::Types* types);
	::com::sun::tools::javac::code::Symbol* hiddenInInternal(::com::sun::tools::javac::code::Symbol$ClassSymbol* currentClass, ::com::sun::tools::javac::code::Types* types);
	::com::sun::tools::javac::code::SymbolMetadata* initedMetadata();
	virtual bool isAbstract();
	bool isAccessibleIn(::com::sun::tools::javac::code::Symbol* clazz, ::com::sun::tools::javac::code::Types* types);
	virtual bool isAnonymous();
	virtual bool isCompleted();
	virtual bool isConstructor();
	virtual bool isDeprecatableViaAnnotation();
	virtual bool isDeprecated();
	virtual bool isDeprecatedForRemoval();
	virtual bool isDirectlyOrIndirectlyLocal();
	virtual bool isDynamic();
	virtual bool isEnclosedBy(::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz);
	virtual bool isEnum();
	virtual bool isFinal();
	virtual bool isInheritedIn(::com::sun::tools::javac::code::Symbol* clazz, ::com::sun::tools::javac::code::Types* types);
	virtual bool isInner();
	virtual bool isInterface();
	virtual bool isMemberOf(::com::sun::tools::javac::code::Symbol$TypeSymbol* clazz, ::com::sun::tools::javac::code::Types* types);
	virtual bool isNonSealed();
	virtual bool isPreviewApi();
	virtual bool isPrivate();
	virtual bool isPublic();
	virtual bool isSealed();
	virtual bool isStatic();
	virtual bool isSubClass(::com::sun::tools::javac::code::Symbol* base, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::code::Symbol* location();
	virtual ::com::sun::tools::javac::code::Symbol* location(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* members();
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* outermostClass();
	virtual bool overrides(::com::sun::tools::javac::code::Symbol* _other, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Types* types, bool checkResult);
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge();
	virtual int32_t poolTag() override;
	virtual void prependAttributes(::com::sun::tools::javac::util::List* l);
	virtual void resetAnnotations();
	virtual void setAttributes(::com::sun::tools::javac::code::Symbol* other);
	virtual void setClassInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual void setDeclarationAttributes(::com::sun::tools::javac::util::List* a);
	virtual void setInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual void setTypeAttributes(::com::sun::tools::javac::util::List* a);
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Kinds$Kind* kind = nullptr;
	int64_t flags_field = 0;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::code::Type* type = nullptr;
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* completer = nullptr;
	::com::sun::tools::javac::code::Type* erasure_field = nullptr;
	::com::sun::tools::javac::code::SymbolMetadata* metadata = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol_h_