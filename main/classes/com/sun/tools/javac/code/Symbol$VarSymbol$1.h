#ifndef _com_sun_tools_javac_code_Symbol$VarSymbol$1_h_
#define _com_sun_tools_javac_code_Symbol$VarSymbol$1_h_
//$ class com.sun.tools.javac.code.Symbol$VarSymbol$1
//$ extends com.sun.tools.javac.code.Symbol$VarSymbol

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class Symbol$VarSymbol$1 : public ::com::sun::tools::javac::code::Symbol$VarSymbol {
	$class(Symbol$VarSymbol$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol)
public:
	Symbol$VarSymbol$1();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
	void init$(::com::sun::tools::javac::code::Symbol$VarSymbol* this$0, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* val$newOwner);
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* clone(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	::com::sun::tools::javac::code::Symbol$VarSymbol* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$newOwner = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$VarSymbol$1_h_