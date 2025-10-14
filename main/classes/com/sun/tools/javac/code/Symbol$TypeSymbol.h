#ifndef _com_sun_tools_javac_code_Symbol$TypeSymbol_h_
#define _com_sun_tools_javac_code_Symbol$TypeSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$TypeSymbol
//$ extends com.sun.tools.javac.code.Symbol

#include <com/sun/tools/javac/code/Symbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
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
					class Annotate$AnnotationTypeMetadata;
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

class $export Symbol$TypeSymbol : public ::com::sun::tools::javac::code::Symbol {
	$class(Symbol$TypeSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol)
public:
	Symbol$TypeSymbol();
	using ::com::sun::tools::javac::code::Symbol::clone;
	using ::com::sun::tools::javac::code::Symbol::accept;
	void init$(::com::sun::tools::javac::code::Kinds$Kind* kind, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	static ::com::sun::tools::javac::util::Name* formFlatName(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	static ::com::sun::tools::javac::util::Name* formFullName(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* getAnnotationTypeMetadata();
	virtual ::java::util::List* getEnclosedElements() override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual bool isAnnotationType();
	bool precedes(::com::sun::tools::javac::code::Symbol$TypeSymbol* that, ::com::sun::tools::javac::code::Types* types);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$TypeSymbol_h_