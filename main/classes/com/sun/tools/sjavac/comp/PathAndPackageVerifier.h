#ifndef _com_sun_tools_sjavac_comp_PathAndPackageVerifier_h_
#define _com_sun_tools_sjavac_comp_PathAndPackageVerifier_h_
//$ class com.sun.tools.sjavac.comp.PathAndPackageVerifier
//$ extends com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskEvent;
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
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PathAndPackageVerifier : public ::com::sun::source::util::TaskListener {
	$class(PathAndPackageVerifier, $NO_CLASS_INIT, ::com::sun::source::util::TaskListener)
public:
	PathAndPackageVerifier();
	void init$();
	bool checkPathAndPackage(::java::nio::file::Path* dir, ::com::sun::tools::javac::tree::JCTree* pkgName);
	virtual bool errorsDiscovered();
	virtual void finished(::com::sun::source::util::TaskEvent* e) override;
	::java::util::Set* misplacedCompilationUnits = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PathAndPackageVerifier_h_