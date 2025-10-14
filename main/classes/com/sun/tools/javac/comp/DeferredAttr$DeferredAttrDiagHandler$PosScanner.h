#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler$PosScanner_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler$PosScanner_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$PosScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
				namespace comp {

class $export DeferredAttr$DeferredAttrDiagHandler$PosScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(DeferredAttr$DeferredAttrDiagHandler$PosScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	DeferredAttr$DeferredAttrDiagHandler$PosScanner();
	void init$(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos = nullptr;
	bool found = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrDiagHandler$PosScanner_h_