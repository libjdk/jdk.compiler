#ifndef _com_sun_tools_javac_util_GraphUtils$Tarjan_h_
#define _com_sun_tools_javac_util_GraphUtils$Tarjan_h_
//$ class com.sun.tools.javac.util.GraphUtils$Tarjan
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class GraphUtils$TarjanNode;
					class List;
					class ListBuffer;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class GraphUtils$Tarjan : public ::java::lang::Object {
	$class(GraphUtils$Tarjan, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphUtils$Tarjan();
	void init$();
	void addSCC(::com::sun::tools::javac::util::GraphUtils$TarjanNode* v);
	::com::sun::tools::javac::util::List* findSCC(::java::lang::Iterable* nodes);
	void findSCC(::com::sun::tools::javac::util::GraphUtils$TarjanNode* v);
	void visitNode(::com::sun::tools::javac::util::GraphUtils$TarjanNode* n);
	int32_t index = 0;
	::com::sun::tools::javac::util::ListBuffer* sccs = nullptr;
	::com::sun::tools::javac::util::ListBuffer* stack = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$Tarjan_h_