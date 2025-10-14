#ifndef _com_sun_tools_javac_jvm_StringConcat$IndyPlain_h_
#define _com_sun_tools_javac_jvm_StringConcat$IndyPlain_h_
//$ class com.sun.tools.javac.jvm.StringConcat$IndyPlain
//$ extends com.sun.tools.javac.jvm.StringConcat$Indy

#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>

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

class StringConcat$IndyPlain : public ::com::sun::tools::javac::jvm::StringConcat$Indy {
	$class(StringConcat$IndyPlain, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::StringConcat$Indy)
public:
	StringConcat$IndyPlain();
	void init$(::com::sun::tools::javac::util::Context* context);
	void doCall(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* dynamicArgTypes);
	virtual void emit(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* args, bool generateFirstArg, ::com::sun::tools::javac::code::Type* type) override;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_StringConcat$IndyPlain_h_