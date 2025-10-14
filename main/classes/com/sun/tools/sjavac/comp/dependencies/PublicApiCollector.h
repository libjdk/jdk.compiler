#ifndef _com_sun_tools_sjavac_comp_dependencies_PublicApiCollector_h_
#define _com_sun_tools_sjavac_comp_dependencies_PublicApiCollector_h_
//$ class com.sun.tools.sjavac.comp.dependencies.PublicApiCollector
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
					class JCTree$JCCompilationUnit;
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
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

class PublicApiCollector : public ::com::sun::source::util::TaskListener {
	$class(PublicApiCollector, $NO_CLASS_INIT, ::com::sun::source::util::TaskListener)
public:
	PublicApiCollector();
	void init$(::com::sun::tools::javac::util::Context* context, ::java::util::Collection* explicitJFOs);
	void collectClassSymbols(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* cu);
	void extractPubApis();
	virtual void finished(::com::sun::source::util::TaskEvent* e) override;
	virtual ::java::util::Map* getPubApis(bool explicit$);
	::com::sun::tools::javac::util::Context* context = nullptr;
	::java::util::Set* classSymbols = nullptr;
	::java::util::Collection* explicitJFOs = nullptr;
	::java::util::Map* explicitPubApis = nullptr;
	::java::util::Map* nonExplicitPubApis = nullptr;
};

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_dependencies_PublicApiCollector_h_