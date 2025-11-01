#ifndef _com_sun_tools_javac_code_Symbol$PackageSymbol_h_
#define _com_sun_tools_javac_code_Symbol$PackageSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$PackageSymbol
//$ extends com.sun.tools.javac.code.Symbol$TypeSymbol
//$ implements javax.lang.model.element.PackageElement

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <javax/lang/model/element/PackageElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$Visitor;
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
				class Element;
				class ElementKind;
				class ElementVisitor;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$PackageSymbol : public ::com::sun::tools::javac::code::Symbol$TypeSymbol {
	$class(Symbol$PackageSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$TypeSymbol, ::javax::lang::model::element::PackageElement)
public:
	Symbol$PackageSymbol();
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::clone;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual bool exists() override;
	virtual int64_t flags() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::com::sun::tools::javac::util::Name* getQualifiedName() override;
	virtual ::com::sun::tools::javac::util::List* getRawAttributes() override;
	virtual bool isUnnamed();
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* members() override;
	void mergeAttributes();
	virtual int32_t poolTag() override;
	virtual void reset();
	virtual $String* toString() override;
	class $import MemberClass0$ : public ::javax::lang::model::element::PackageElement {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::type::TypeMirror* asType() override;
		virtual ::javax::lang::model::element::Name* getQualifiedName() override;
		virtual ::javax::lang::model::element::Name* getSimpleName() override;
		virtual ::java::util::List* getEnclosedElements() override;
		virtual bool isUnnamed() override;
		virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
		virtual ::javax::lang::model::element::ElementKind* getKind() override;
		virtual ::java::util::Set* getModifiers() override;
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
	::javax::lang::model::element::PackageElement* as$(::javax::lang::model::element::PackageElement**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::code::Scope$WriteableScope* members_field = nullptr;
	::com::sun::tools::javac::util::Name* fullname = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* package_info = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* modle = nullptr;
	::javax::tools::JavaFileObject* sourcefile = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$PackageSymbol_h_