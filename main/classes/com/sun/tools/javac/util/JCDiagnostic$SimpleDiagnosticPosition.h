#ifndef _com_sun_tools_javac_util_JCDiagnostic$SimpleDiagnosticPosition_h_
#define _com_sun_tools_javac_util_JCDiagnostic$SimpleDiagnosticPosition_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$SimpleDiagnosticPosition
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
				namespace util {

class $export JCDiagnostic$SimpleDiagnosticPosition : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition {
	$class(JCDiagnostic$SimpleDiagnosticPosition, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition)
public:
	JCDiagnostic$SimpleDiagnosticPosition();
	void init$(int32_t pos);
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) override;
	virtual int32_t getPreferredPosition() override;
	virtual int32_t getStartPosition() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() override;
	int32_t pos = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$SimpleDiagnosticPosition_h_