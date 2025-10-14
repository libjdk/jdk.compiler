#ifndef _com_sun_tools_javac_util_JCDiagnostic$DiagnosticPosition_h_
#define _com_sun_tools_javac_util_JCDiagnostic$DiagnosticPosition_h_
//$ interface com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import JCDiagnostic$DiagnosticPosition : public ::java::lang::Object {
	$interface(JCDiagnostic$DiagnosticPosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) {return 0;}
	virtual int32_t getPreferredPosition() {return 0;}
	virtual int32_t getStartPosition() {return 0;}
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$DiagnosticPosition_h_