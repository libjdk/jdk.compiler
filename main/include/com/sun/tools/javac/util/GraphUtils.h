#ifndef _com_sun_tools_javac_util_GraphUtils_h_
#define _com_sun_tools_javac_util_GraphUtils_h_
//$ class com.sun.tools.javac.util.GraphUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
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
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import GraphUtils : public ::java::lang::Object {
	$class(GraphUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphUtils();
	void init$();
	static ::com::sun::tools::javac::util::List* tarjan(::java::lang::Iterable* nodes);
	static $String* toDot(::java::util::Collection* nodes, $String* name, $String* header);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils_h_