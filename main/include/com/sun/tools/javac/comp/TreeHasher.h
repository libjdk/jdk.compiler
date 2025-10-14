#ifndef _com_sun_tools_javac_comp_TreeHasher_h_
#define _com_sun_tools_javac_comp_TreeHasher_h_
//$ class com.sun.tools.javac.comp.TreeHasher
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
				}
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
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCLiteral;
					class JCTree$JCVariableDecl;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import TreeHasher : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TreeHasher, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TreeHasher();
	void init$(::java::util::Map* symbolHashes);
	static int32_t hash(::com::sun::tools::javac::tree::JCTree* tree, ::java::util::Collection* symbols);
	void hash(Object$* object);
	static void lambda$hash$0(::java::util::Map* symbolHashes, ::com::sun::tools::javac::code::Symbol* s);
	::java::lang::Integer* lambda$visitVarDef$1(::com::sun::tools::javac::code::Symbol* k);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::java::util::Map* symbolHashes = nullptr;
	int32_t result = 0;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TreeHasher_h_