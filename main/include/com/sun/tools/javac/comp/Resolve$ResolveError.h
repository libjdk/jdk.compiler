#ifndef _com_sun_tools_javac_comp_Resolve$ResolveError_h_
#define _com_sun_tools_javac_comp_Resolve$ResolveError_h_
//$ class com.sun.tools.javac.comp.Resolve$ResolveError
//$ extends com.sun.tools.javac.code.Symbol

#include <com/sun/tools/javac/code/Symbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Symbol$TypeSymbol;
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
				namespace comp {
					class Resolve;
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
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
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
				class ElementVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Resolve$ResolveError : public ::com::sun::tools::javac::code::Symbol {
	$class(Resolve$ResolveError, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol)
public:
	Resolve$ResolveError();
	using ::com::sun::tools::javac::code::Symbol::clone;
	using ::com::sun::tools::javac::code::Symbol::accept;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, $String* debugName);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* location);
	virtual bool exists() override;
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) {return nullptr;}
	virtual bool isStatic() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	$String* debugName = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$ResolveError_h_