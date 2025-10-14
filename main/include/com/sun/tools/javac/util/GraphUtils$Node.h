#ifndef _com_sun_tools_javac_util_GraphUtils$Node_h_
#define _com_sun_tools_javac_util_GraphUtils$Node_h_
//$ interface com.sun.tools.javac.util.GraphUtils$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class GraphUtils$NodeVisitor;
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

class $import GraphUtils$Node : public ::java::lang::Object {
	$interface(GraphUtils$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(::com::sun::tools::javac::util::GraphUtils$NodeVisitor* visitor, Object$* arg) {}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$Node_h_