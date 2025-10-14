#ifndef _com_sun_tools_javac_code_Symbol$DelegatedSymbol_h_
#define _com_sun_tools_javac_code_Symbol$DelegatedSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$DelegatedSymbol
//$ extends com.sun.tools.javac.code.Symbol

#include <com/sun/tools/javac/code/Symbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$WriteableScope;
					class Symbol$ClassSymbol;
					class Symbol$PackageSymbol;
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

class $export Symbol$DelegatedSymbol : public ::com::sun::tools::javac::code::Symbol {
	$class(Symbol$DelegatedSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol)
public:
	Symbol$DelegatedSymbol();
	using ::com::sun::tools::javac::code::Symbol::clone;
	void init$(::com::sun::tools::javac::code::Symbol* other);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Symbol* asMemberOf(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types) override;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	virtual void complete() override;
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enclClass() override;
	virtual ::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Types* types) override;
	virtual ::com::sun::tools::javac::code::Type* externalType(::com::sun::tools::javac::code::Types* types) override;
	virtual ::com::sun::tools::javac::util::Name* flatName() override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::com::sun::tools::javac::util::Name* getQualifiedName() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual ::com::sun::tools::javac::code::Symbol* getUnderlyingSymbol();
	virtual bool hasOuterInstance() override;
	virtual bool isConstructor() override;
	virtual bool isDirectlyOrIndirectlyLocal() override;
	virtual bool isEnclosedBy(::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz) override;
	virtual bool isInheritedIn(::com::sun::tools::javac::code::Symbol* clazz, ::com::sun::tools::javac::code::Types* types) override;
	virtual bool isInner() override;
	virtual bool isMemberOf(::com::sun::tools::javac::code::Symbol$TypeSymbol* clazz, ::com::sun::tools::javac::code::Types* types) override;
	virtual bool isSubClass(::com::sun::tools::javac::code::Symbol* base, ::com::sun::tools::javac::code::Types* types) override;
	virtual ::com::sun::tools::javac::code::Symbol* location() override;
	virtual ::com::sun::tools::javac::code::Symbol* location(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Types* types) override;
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* members() override;
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* outermostClass() override;
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol* other = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$DelegatedSymbol_h_