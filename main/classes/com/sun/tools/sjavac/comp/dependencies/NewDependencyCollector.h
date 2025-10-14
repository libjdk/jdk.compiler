#ifndef _com_sun_tools_sjavac_comp_dependencies_NewDependencyCollector_h_
#define _com_sun_tools_sjavac_comp_dependencies_NewDependencyCollector_h_
//$ class com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector
//$ extends com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskEvent;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symbol$TypeSymbol;
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
					class Context;
					class Dependencies$GraphDependencies$CompletionNode;
					class Dependencies$GraphDependencies$Node;
					class GraphUtils$DependencyKind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

class NewDependencyCollector : public ::com::sun::source::util::TaskListener {
	$class(NewDependencyCollector, $NO_CLASS_INIT, ::com::sun::source::util::TaskListener)
public:
	NewDependencyCollector();
	void init$(::com::sun::tools::javac::util::Context* context, ::java::util::Collection* explicitJFOs);
	::java::util::Set* allSupertypes(::com::sun::tools::javac::code::Symbol$TypeSymbol* t);
	void collectPubApisOfDependencies(::com::sun::tools::javac::util::Context* context, ::java::util::Collection* explicitJFOs);
	virtual void finished(::com::sun::source::util::TaskEvent* e) override;
	::java::util::Collection* getAllDependencies(::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode* cnode);
	virtual ::java::util::Map* getDependencies(bool cp);
	::java::util::Map* getDependencies(::com::sun::tools::javac::util::Context* context, ::java::util::Collection* explicitJFOs, bool cp);
	::java::util::Set* getDependencyNodes(::com::sun::tools::javac::util::Context* context, ::java::util::Collection* explicitJFOs, bool explicits);
	::javax::tools::JavaFileManager$Location* getLocationOf(::com::sun::tools::javac::code::Symbol$ClassSymbol* cs);
	virtual bool isSymbolRelevant(bool cp, ::com::sun::tools::javac::code::Symbol$ClassSymbol* cs);
	static ::java::util::stream::Stream* lambda$getAllDependencies$3(::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode* cnode, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk);
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode* lambda$getDependencyNodes$0(::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* n);
	static bool lambda$getDependencyNodes$1(::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode* n);
	static bool lambda$getDependencyNodes$2(bool explicits, ::java::util::Collection* explicitJFOs, ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode* n);
	::com::sun::tools::javac::util::Context* context = nullptr;
	::java::util::Collection* explicitJFOs = nullptr;
	::java::util::Map* deps = nullptr;
	::java::util::Map* cpDeps = nullptr;
};

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_dependencies_NewDependencyCollector_h_