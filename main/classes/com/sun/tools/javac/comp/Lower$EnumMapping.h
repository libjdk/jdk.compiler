#ifndef _com_sun_tools_javac_comp_Lower$EnumMapping_h_
#define _com_sun_tools_javac_comp_Lower$EnumMapping_h_
//$ class com.sun.tools.javac.comp.Lower$EnumMapping
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
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
					class Lower;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCLiteral;
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
					class JCDiagnostic$DiagnosticPosition;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Lower$EnumMapping : public ::java::lang::Object {
	$class(Lower$EnumMapping, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Lower$EnumMapping();
	void init$(::com::sun::tools::javac::comp::Lower* this$0, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* forEnum);
	virtual ::com::sun::tools::javac::tree::JCTree$JCLiteral* forConstant(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void translate();
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos = nullptr;
	int32_t next = 0;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* forEnum = nullptr;
	::com::sun::tools::javac::code::Symbol$VarSymbol* mapVar = nullptr;
	::java::util::Map* values = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$EnumMapping_h_