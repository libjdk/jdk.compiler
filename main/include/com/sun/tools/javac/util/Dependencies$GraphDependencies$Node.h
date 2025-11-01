#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$Node_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$Node_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$Node
//$ extends com.sun.tools.javac.util.GraphUtils$AbstractNode
//$ implements com.sun.tools.javac.util.GraphUtils$DottableNode

#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <java/lang/Array.h>

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
					class GraphUtils$DependencyKind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class EnumMap;
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Dependencies$GraphDependencies$Node : public ::com::sun::tools::javac::util::GraphUtils$AbstractNode, public ::com::sun::tools::javac::util::GraphUtils$DottableNode {
	$class(Dependencies$GraphDependencies$Node, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$AbstractNode, ::com::sun::tools::javac::util::GraphUtils$DottableNode)
public:
	Dependencies$GraphDependencies$Node();
	virtual void accept(::com::sun::tools::javac::util::GraphUtils$NodeVisitor* visitor, Object$* arg) override;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* value);
	virtual void addDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* depKind, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* dep);
	virtual ::java::util::Properties* dependencyAttributes(::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* to, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk);
	virtual ::java::util::Properties* dependencyAttributes(::com::sun::tools::javac::util::GraphUtils$DottableNode* to, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::Collection* getDependenciesByKind(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) override;
	virtual $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>* getSupportedDependencyKinds() override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Properties* nodeAttributes() override;
	virtual $String* toString() override;
	::java::util::EnumMap* depsByKind = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$Node_h_