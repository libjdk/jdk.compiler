#ifndef _com_sun_tools_javac_comp_Resolve$5_h_
#define _com_sun_tools_javac_comp_Resolve$5_h_
//$ class com.sun.tools.javac.comp.Resolve$5
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class List;
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

class Resolve$5 : public ::java::util::Iterator {
	$class(Resolve$5, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Resolve$5();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Type* val$intype);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* symbolFor(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* val$intype = nullptr;
	::com::sun::tools::javac::util::List* seen = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* currentSym = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* prevSym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$5_h_