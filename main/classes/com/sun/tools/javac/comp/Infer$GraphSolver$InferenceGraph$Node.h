#ifndef _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph$Node_h_
#define _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph$Node_h_
//$ class com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph$Node
//$ extends com.sun.tools.javac.util.GraphUtils$TarjanNode
//$ implements com.sun.tools.javac.util.GraphUtils$DottableNode

#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer$GraphSolver$InferenceGraph;
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
		class Properties;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$GraphSolver$InferenceGraph$Node : public ::com::sun::tools::javac::util::GraphUtils$TarjanNode, public ::com::sun::tools::javac::util::GraphUtils$DottableNode {
	$class(Infer$GraphSolver$InferenceGraph$Node, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$TarjanNode, ::com::sun::tools::javac::util::GraphUtils$DottableNode)
public:
	Infer$GraphSolver$InferenceGraph$Node();
	virtual void accept(::com::sun::tools::javac::util::GraphUtils$NodeVisitor* visitor, Object$* arg) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* this$2, ::com::sun::tools::javac::code::Type* ivar);
	virtual void addDependencies(::java::util::Set* depsToAdd);
	virtual void addDependency(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* depToAdd);
	virtual ::java::util::Set* closure();
	void closureInternal(::java::util::Set* closure);
	virtual ::java::util::Properties* dependencyAttributes(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* sink, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk);
	virtual ::java::util::Properties* dependencyAttributes(::com::sun::tools::javac::util::GraphUtils$DottableNode* sink, ::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) override;
	virtual ::java::lang::Iterable* getAllDependencies() override;
	virtual ::java::util::Collection* getDependenciesByKind(::com::sun::tools::javac::util::GraphUtils$DependencyKind* dk) override;
	virtual $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>* getSupportedDependencyKinds() override;
	void graphChanged(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* from, ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* to);
	virtual bool isLeaf();
	virtual void mergeWith(::com::sun::tools::javac::util::List* nodes);
	virtual ::java::util::Properties* nodeAttributes() override;
	virtual bool removeDependency(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* n);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* this$2 = nullptr;
	::java::util::Set* deps = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph$Node_h_