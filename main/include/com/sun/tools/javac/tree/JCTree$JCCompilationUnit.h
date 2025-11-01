#ifndef _com_sun_tools_javac_tree_JCTree$JCCompilationUnit_h_
#define _com_sun_tools_javac_tree_JCTree$JCCompilationUnit_h_
//$ class com.sun.tools.javac.tree.JCTree$JCCompilationUnit
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.CompilationUnitTree

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class LineMap;
				class ModuleTree;
				class PackageTree;
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$NamedImportScope;
					class Scope$StarImportScope;
					class Scope$WriteableScope;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
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
					class DocCommentTable;
					class EndPosTable;
					class JCTree$JCModuleDecl;
					class JCTree$Tag;
					class JCTree$Visitor;
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
					class List;
					class Position$LineMap;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCCompilationUnit : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::CompilationUnitTree {
	$class(JCTree$JCCompilationUnit, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::CompilationUnitTree)
public:
	JCTree$JCCompilationUnit();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* defs);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getImports() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::LineMap* getLineMap() override;
	virtual ::com::sun::source::tree::ModuleTree* getModule() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCModuleDecl* getModuleDecl();
	virtual ::com::sun::source::tree::PackageTree* getPackage() override;
	virtual ::java::util::List* getPackageAnnotations() override;
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() override;
	virtual ::javax::tools::JavaFileObject* getSourceFile() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getTypeDecls() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* defs = nullptr;
	::javax::tools::JavaFileObject* sourcefile = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* modle = nullptr;
	::javax::tools::JavaFileManager$Location* locn = nullptr;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* packge = nullptr;
	::com::sun::tools::javac::code::Scope$WriteableScope* toplevelScope = nullptr;
	::com::sun::tools::javac::code::Scope$NamedImportScope* namedImportScope = nullptr;
	::com::sun::tools::javac::code::Scope$StarImportScope* starImportScope = nullptr;
	::com::sun::tools::javac::util::Position$LineMap* lineMap = nullptr;
	::com::sun::tools::javac::tree::DocCommentTable* docComments = nullptr;
	::com::sun::tools::javac::tree::EndPosTable* endPositions = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCCompilationUnit_h_