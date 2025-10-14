#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$PruneVisitor_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$PruneVisitor_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor
//$ extends com.sun.tools.javac.util.GraphUtils$NodeVisitor

#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Dependencies$GraphDependencies$Node;
					class GraphUtils$DependencyKind;
					class GraphUtils$Node;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Dependencies$GraphDependencies$PruneVisitor : public ::com::sun::tools::javac::util::GraphUtils$NodeVisitor {
	$class(Dependencies$GraphDependencies$PruneVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$NodeVisitor)
public:
	Dependencies$GraphDependencies$PruneVisitor();
	void init$();
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* from, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* to, ::java::lang::Void* arg);
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::GraphUtils$Node* from, ::com::sun::tools::javac::util::GraphUtils$Node* to, Object$* arg) override;
	virtual void visitNode(::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* node, ::java::lang::Void* arg);
	virtual void visitNode(::com::sun::tools::javac::util::GraphUtils$Node* node, Object$* arg) override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$PruneVisitor_h_