#ifndef _com_sun_tools_javac_comp_Resolve$6_h_
#define _com_sun_tools_javac_comp_Resolve$6_h_
//$ class com.sun.tools.javac.comp.Resolve$6
//$ extends com.sun.tools.javac.comp.Resolve$RecoveryLoadClass

#include <com/sun/tools/javac/comp/Resolve$RecoveryLoadClass.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
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
					class Env;
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
					class List;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$6 : public ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass {
	$class(Resolve$6, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass)
public:
	Resolve$6();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	::java::util::Iterator* lambda$loadClass$0(::com::sun::tools::javac::util::Name* c);
	::java::util::Iterator* lambda$loadClass$1(::com::sun::tools::javac::util::List* candidates);
	::java::lang::Iterable* lambda$loadClass$2(::com::sun::tools::javac::util::List* candidates, ::com::sun::tools::javac::util::Name* n);
	::com::sun::tools::javac::code::Symbol$ClassSymbol* lambda$loadClass$3(::com::sun::tools::javac::util::List* candidates, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* ms, ::com::sun::tools::javac::util::Name* n);
	static bool lambda$loadClass$4(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol* loadClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$6_h_