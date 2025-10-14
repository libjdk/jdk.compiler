#ifndef _com_sun_tools_javac_code_Symtab$6_h_
#define _com_sun_tools_javac_code_Symtab$6_h_
//$ class com.sun.tools.javac.code.Symtab$6
//$ extends com.sun.tools.javac.code.Symbol$TypeSymbol

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Symbol;
					class Symtab;
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
				class ElementVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symtab$6 : public ::com::sun::tools::javac::code::Symbol$TypeSymbol {
	$class(Symtab$6, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$TypeSymbol)
public:
	Symtab$6();
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::accept;
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::clone;
	void init$(::com::sun::tools::javac::code::Symtab* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	::com::sun::tools::javac::code::Symtab* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symtab$6_h_