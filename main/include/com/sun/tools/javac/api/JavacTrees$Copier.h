#ifndef _com_sun_tools_javac_api_JavacTrees$Copier_h_
#define _com_sun_tools_javac_api_JavacTrees$Copier_h_
//$ class com.sun.tools.javac.api.JavacTrees$Copier
//$ extends com.sun.tools.javac.tree.TreeCopier

#include <com/sun/tools/javac/tree/TreeCopier.h>

#pragma push_macro("M")
#undef M

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ClassTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class TreeMaker;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTrees$Copier : public ::com::sun::tools::javac::tree::TreeCopier {
	$class(JavacTrees$Copier, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeCopier)
public:
	JavacTrees$Copier();
	using ::com::sun::tools::javac::tree::TreeCopier::copy;
	void init$(::com::sun::tools::javac::tree::TreeMaker* M);
	virtual ::com::sun::tools::javac::tree::JCTree* copy(::com::sun::tools::javac::tree::JCTree* t, ::com::sun::tools::javac::tree::JCTree* leaf);
	virtual ::com::sun::tools::javac::tree::JCTree* copy(::com::sun::tools::javac::tree::JCTree* t, Object$* leaf) override;
	virtual ::com::sun::tools::javac::tree::JCTree* visitClass(::com::sun::source::tree::ClassTree* node, ::com::sun::tools::javac::tree::JCTree* p);
	virtual $Object* visitClass(::com::sun::source::tree::ClassTree* node, Object$* p) override;
	::com::sun::tools::javac::tree::JCTree* leafCopy = nullptr;
	::java::util::Map* copiedClasses = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("M")

#endif // _com_sun_tools_javac_api_JavacTrees$Copier_h_