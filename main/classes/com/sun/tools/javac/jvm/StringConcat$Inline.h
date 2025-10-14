#ifndef _com_sun_tools_javac_jvm_StringConcat$Inline_h_
#define _com_sun_tools_javac_jvm_StringConcat$Inline_h_
//$ class com.sun.tools.javac.jvm.StringConcat$Inline
//$ extends com.sun.tools.javac.jvm.StringConcat

#include <com/sun/tools/javac/jvm/StringConcat.h>

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
					class JCTree;
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

class StringConcat$Inline : public ::com::sun::tools::javac::jvm::StringConcat {
	$class(StringConcat$Inline, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::StringConcat)
public:
	StringConcat$Inline();
	void init$(::com::sun::tools::javac::util::Context* context);
	void appendString(::com::sun::tools::javac::tree::JCTree* tree);
	void builderToString(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* newStringBuilder(::com::sun::tools::javac::tree::JCTree* tree);
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_StringConcat$Inline_h_