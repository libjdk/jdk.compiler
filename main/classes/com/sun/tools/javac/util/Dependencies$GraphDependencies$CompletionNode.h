#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode
//$ extends com.sun.tools.javac.util.Dependencies$GraphDependencies$Node

#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
					class Dependencies$GraphDependencies$CompletionNode$Kind;
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

class $export Dependencies$GraphDependencies$CompletionNode : public ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node {
	$class(Dependencies$GraphDependencies$CompletionNode, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node)
public:
	Dependencies$GraphDependencies$CompletionNode();
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* getClassSymbol();
	virtual ::java::util::Properties* nodeAttributes() override;
	::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* ck = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode_h_