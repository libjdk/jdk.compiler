#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext$StuckNode_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext$StuckNode_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$StuckNode
//$ extends com.sun.tools.javac.util.GraphUtils$TarjanNode

#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredAttrNode;
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
					class GraphUtils$DependencyKind;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$DeferredAttrContext$StuckNode : public ::com::sun::tools::javac::util::GraphUtils$TarjanNode {
	$class(DeferredAttr$DeferredAttrContext$StuckNode, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$TarjanNode)
public:
	DeferredAttr$DeferredAttrContext$StuckNode();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* this$1, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* data);
	virtual ::java::lang::Iterable* getAllDependencies() override;
	virtual ::java::util::Collection* getDependenciesByKind(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) override;
	virtual $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>* getSupportedDependencyKinds() override;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* this$1 = nullptr;
	::java::util::Set* deps = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext$StuckNode_h_