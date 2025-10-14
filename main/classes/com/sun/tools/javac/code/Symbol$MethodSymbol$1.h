#ifndef _com_sun_tools_javac_code_Symbol$MethodSymbol$1_h_
#define _com_sun_tools_javac_code_Symbol$MethodSymbol$1_h_
//$ class com.sun.tools.javac.code.Symbol$MethodSymbol$1
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Symbol;
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
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
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

class Symbol$MethodSymbol$1 : public ::com::sun::tools::javac::code::Symbol$MethodSymbol {
	$class(Symbol$MethodSymbol$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol)
public:
	Symbol$MethodSymbol$1();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	void init$(::com::sun::tools::javac::code::Symbol$MethodSymbol* this$0, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* val$newOwner);
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* clone(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Attribute* getDefaultValue() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::com::sun::tools::javac::util::List* getParameters() override;
	virtual ::com::sun::tools::javac::code::Type* getReceiverType() override;
	virtual ::com::sun::tools::javac::code::Type* getReturnType() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual ::com::sun::tools::javac::util::List* getThrownTypes() override;
	virtual ::com::sun::tools::javac::util::List* getTypeParameters() override;
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$newOwner = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$MethodSymbol$1_h_