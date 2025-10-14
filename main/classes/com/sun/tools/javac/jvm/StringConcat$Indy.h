#ifndef _com_sun_tools_javac_jvm_StringConcat$Indy_h_
#define _com_sun_tools_javac_jvm_StringConcat$Indy_h_
//$ class com.sun.tools.javac.jvm.StringConcat$Indy
//$ extends com.sun.tools.javac.jvm.StringConcat

#include <com/sun/tools/javac/jvm/StringConcat.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace jvm {
					class Items$Item;
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
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
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
					class JCDiagnostic$DiagnosticPosition;
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
				namespace jvm {

class StringConcat$Indy : public ::com::sun::tools::javac::jvm::StringConcat {
	$class(StringConcat$Indy, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::StringConcat)
public:
	StringConcat$Indy();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void emit(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* args, bool generateFirstArg, ::com::sun::tools::javac::code::Type* type) {}
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual ::com::sun::tools::javac::util::List* split(::com::sun::tools::javac::util::List* args);
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_StringConcat$Indy_h_