#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$FilterVisitor_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$FilterVisitor_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor
//$ extends com.sun.tools.javac.util.GraphUtils$NodeVisitor

#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Dependencies$GraphDependencies;
					class Dependencies$GraphDependencies$CompletionNode$Kind;
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

class Dependencies$GraphDependencies$FilterVisitor : public ::com::sun::tools::javac::util::GraphUtils$NodeVisitor {
	$class(Dependencies$GraphDependencies$FilterVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$NodeVisitor)
public:
	Dependencies$GraphDependencies$FilterVisitor();
	void init$(::com::sun::tools::javac::util::Dependencies$GraphDependencies* this$0, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* ck);
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* from, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* to, ::java::lang::Void* arg);
	virtual void visitDependency(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk, ::com::sun::tools::javac::util::GraphUtils$Node* from, ::com::sun::tools::javac::util::GraphUtils$Node* to, Object$* arg) override;
	virtual void visitNode(::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* node, ::java::lang::Void* arg);
	virtual void visitNode(::com::sun::tools::javac::util::GraphUtils$Node* node, Object$* arg) override;
	::com::sun::tools::javac::util::Dependencies$GraphDependencies* this$0 = nullptr;
	::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* ck = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$FilterVisitor_h_