#ifndef _com_sun_tools_javac_util_GraphUtils$DottableNode_h_
#define _com_sun_tools_javac_util_GraphUtils$DottableNode_h_
//$ interface com.sun.tools.javac.util.GraphUtils$DottableNode
//$ extends com.sun.tools.javac.util.GraphUtils$Node

#include <com/sun/tools/javac/util/GraphUtils$Node.h>

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
	namespace util {
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export GraphUtils$DottableNode : public ::com::sun::tools::javac::util::GraphUtils$Node {
	$interface(GraphUtils$DottableNode, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$Node)
public:
	virtual ::java::util::Properties* dependencyAttributes(::com::sun::tools::javac::util::GraphUtils$DottableNode* to, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) {return nullptr;}
	virtual ::java::util::Properties* nodeAttributes() {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$DottableNode_h_