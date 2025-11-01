#ifndef _com_sun_tools_javac_code_Symbol$ModuleSymbol_h_
#define _com_sun_tools_javac_code_Symbol$ModuleSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$ModuleSymbol
//$ extends com.sun.tools.javac.code.Symbol$TypeSymbol
//$ implements javax.lang.model.element.ModuleElement

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <javax/lang/model/element/ModuleElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$PackageSymbol;
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
		class Map;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementKind;
				class ElementVisitor;
				class Name;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$ModuleSymbol : public ::com::sun::tools::javac::code::Symbol$TypeSymbol {
	$class(Symbol$ModuleSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$TypeSymbol, ::javax::lang::model::element::ModuleElement)
public:
	Symbol$ModuleSymbol();
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::accept;
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::clone;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual void completeUsesProvides();
	static ::com::sun::tools::javac::code::Symbol$ModuleSymbol* create(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::Name* module_info);
	virtual ::java::util::List* getDirectives();
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::com::sun::tools::javac::util::Name* getQualifiedName() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual bool isDeprecated() override;
	virtual bool isNoModule();
	virtual bool isOpen();
	virtual bool isUnnamed();
	static bool lambda$getEnclosedElements$0(::com::sun::tools::javac::code::Symbol* m);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* outermostClass() override;
	virtual int32_t poolTag() override;
	virtual void reset();
	virtual $String* toString() override;
	class $import MemberClass0$ : public ::javax::lang::model::element::ModuleElement {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::type::TypeMirror* asType() override;
		virtual ::javax::lang::model::element::Name* getQualifiedName() override;
		virtual ::javax::lang::model::element::Name* getSimpleName() override;
		virtual ::java::util::List* getEnclosedElements() override;
		virtual bool isOpen() override;
		virtual bool isUnnamed() override;
		virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
		virtual ::java::util::List* getDirectives() override;
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
	::javax::lang::model::element::ModuleElement* as$(::javax::lang::model::element::ModuleElement**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::util::Name* version = nullptr;
	::javax::tools::JavaFileManager$Location* sourceLocation = nullptr;
	::javax::tools::JavaFileManager$Location* classLocation = nullptr;
	::javax::tools::JavaFileManager$Location* patchLocation = nullptr;
	::javax::tools::JavaFileManager$Location* patchOutputLocation = nullptr;
	::com::sun::tools::javac::util::List* directives = nullptr;
	::com::sun::tools::javac::util::List* requires = nullptr;
	::com::sun::tools::javac::util::List* exports = nullptr;
	::com::sun::tools::javac::util::List* opens = nullptr;
	::com::sun::tools::javac::util::List* provides = nullptr;
	::com::sun::tools::javac::util::List* uses = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* module_info = nullptr;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* unnamedPackage = nullptr;
	::java::util::Map* visiblePackages = nullptr;
	::java::util::Set* readModules = nullptr;
	::com::sun::tools::javac::util::List* enclosedPackages = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* usesProvidesCompleter = nullptr;
	::java::util::Set* flags$ = nullptr;
	::java::util::Set* resolutionFlags = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$ModuleSymbol_h_