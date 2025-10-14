#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler
//$ extends com.sun.tools.javac.util.Log$DeferredDiagnosticHandler

#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
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
					class JCDiagnostic;
					class Log;
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

class $export DeferredAttr$DeferredAttrDiagHandler : public ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler {
	$class(DeferredAttr$DeferredAttrDiagHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler)
public:
	DeferredAttr$DeferredAttrDiagHandler();
	void init$(::com::sun::tools::javac::util::Log* log, ::com::sun::tools::javac::tree::JCTree* newTree);
	static bool lambda$new$0(::com::sun::tools::javac::tree::JCTree* newTree, ::com::sun::tools::javac::util::JCDiagnostic* d);
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler_h_