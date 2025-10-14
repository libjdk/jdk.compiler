#ifndef _com_sun_tools_javac_code_DeferredLintHandler$1_h_
#define _com_sun_tools_javac_code_DeferredLintHandler$1_h_
//$ class com.sun.tools.javac.code.DeferredLintHandler$1
//$ extends com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class EndPosTable;
					class JCTree;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class DeferredLintHandler$1 : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition {
	$class(DeferredLintHandler$1, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition)
public:
	DeferredLintHandler$1();
	void init$();
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) override;
	virtual int32_t getPreferredPosition() override;
	virtual int32_t getStartPosition() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredLintHandler$1_h_