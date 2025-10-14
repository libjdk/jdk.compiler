#ifndef _com_sun_tools_javac_util_GraphUtils$DotVisitor_h_
#define _com_sun_tools_javac_util_GraphUtils$DotVisitor_h_
//$ class com.sun.tools.javac.util.GraphUtils$DotVisitor
//$ extends com.sun.tools.javac.util.GraphUtils$NodeVisitor

#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class GraphUtils$DependencyKind;
					class GraphUtils$DottableNode;
					class GraphUtils$Node;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import GraphUtils$DotVisitor : public ::com::sun::tools::javac::util::GraphUtils$NodeVisitor {
	$class(GraphUtils$DotVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$NodeVisitor)
public:
	GraphUtils$DotVisitor();
	void init$();
	virtual $String* formatProperties(::java::util::Properties* p);
	virtual void visit(::java::util::Collection* nodes, Object$* arg) override;
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::GraphUtils$DottableNode* from, ::com::sun::tools::javac::util::GraphUtils$DottableNode* to, ::java::lang::StringBuilder* buf);
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::GraphUtils$Node* from, ::com::sun::tools::javac::util::GraphUtils$Node* to, Object$* buf) override;
	virtual void visitNode(::com::sun::tools::javac::util::GraphUtils$DottableNode* node, ::java::lang::StringBuilder* buf);
	virtual void visitNode(::com::sun::tools::javac::util::GraphUtils$Node* node, Object$* buf) override;
	static $String* wrap($String* s);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$DotVisitor_h_