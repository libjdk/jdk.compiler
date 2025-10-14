#ifndef _com_sun_tools_javac_util_GraphUtils$NodeVisitor_h_
#define _com_sun_tools_javac_util_GraphUtils$NodeVisitor_h_
//$ class com.sun.tools.javac.util.GraphUtils$NodeVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class GraphUtils$DependencyKind;
					class GraphUtils$Node;
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

class $import GraphUtils$NodeVisitor : public ::java::lang::Object {
	$class(GraphUtils$NodeVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphUtils$NodeVisitor();
	void init$();
	virtual void visit(::java::util::Collection* nodes, Object$* arg);
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::GraphUtils$Node* from, ::com::sun::tools::javac::util::GraphUtils$Node* to, Object$* arg) {}
	virtual void visitNode(::com::sun::tools::javac::util::GraphUtils$Node* node, Object$* arg) {}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$NodeVisitor_h_