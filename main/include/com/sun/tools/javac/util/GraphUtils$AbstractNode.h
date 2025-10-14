#ifndef _com_sun_tools_javac_util_GraphUtils$AbstractNode_h_
#define _com_sun_tools_javac_util_GraphUtils$AbstractNode_h_
//$ class com.sun.tools.javac.util.GraphUtils$AbstractNode
//$ extends com.sun.tools.javac.util.GraphUtils$Node

#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class GraphUtils$DependencyKind;
					class GraphUtils$NodeVisitor;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import GraphUtils$AbstractNode : public ::com::sun::tools::javac::util::GraphUtils$Node {
	$class(GraphUtils$AbstractNode, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$Node)
public:
	GraphUtils$AbstractNode();
	void init$(Object$* data);
	virtual void accept(::com::sun::tools::javac::util::GraphUtils$NodeVisitor* visitor, Object$* arg) override;
	virtual ::java::util::Collection* getDependenciesByKind(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) {return nullptr;}
	virtual $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>* getSupportedDependencyKinds() {return nullptr;}
	virtual $String* toString() override;
	$Object* data = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$AbstractNode_h_