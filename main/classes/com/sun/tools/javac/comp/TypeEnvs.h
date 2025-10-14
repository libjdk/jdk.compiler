#ifndef _com_sun_tools_javac_comp_TypeEnvs_h_
#define _com_sun_tools_javac_comp_TypeEnvs_h_
//$ class com.sun.tools.javac.comp.TypeEnvs
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
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
					class Context;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnvs : public ::java::lang::Object {
	$class(TypeEnvs, 0, ::java::lang::Object)
public:
	TypeEnvs();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void clear();
	virtual ::com::sun::tools::javac::comp::Env* get(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	static ::com::sun::tools::javac::comp::TypeEnvs* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::comp::Env* put(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* remove(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	virtual ::java::util::Collection* values();
	static const int64_t serialVersionUID = (int64_t)0x07EE76BBFC81BD47;
	static ::com::sun::tools::javac::util::Context$Key* typeEnvsKey;
	::java::util::HashMap* map = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnvs_h_