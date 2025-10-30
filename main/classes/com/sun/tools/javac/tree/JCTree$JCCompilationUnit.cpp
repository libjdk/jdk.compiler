#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LineMap.h>
#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef COMPILATION_UNIT
#undef IMPORT
#undef MODULEDEF
#undef PACKAGEDEF
#undef SKIP
#undef TOPLEVEL

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $LineMap = ::com::sun::source::tree::LineMap;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $PackageTree = ::com::sun::source::tree::PackageTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCCompilationUnit_FieldInfo_[] = {
	{"defs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC, $field(JCTree$JCCompilationUnit, defs)},
	{"sourcefile", "Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, sourcefile)},
	{"modle", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, modle)},
	{"locn", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, locn)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, packge)},
	{"toplevelScope", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, toplevelScope)},
	{"namedImportScope", "Lcom/sun/tools/javac/code/Scope$NamedImportScope;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, namedImportScope)},
	{"starImportScope", "Lcom/sun/tools/javac/code/Scope$StarImportScope;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, starImportScope)},
	{"lineMap", "Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, lineMap)},
	{"docComments", "Lcom/sun/tools/javac/tree/DocCommentTable;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, docComments)},
	{"endPositions", "Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, $PUBLIC, $field(JCTree$JCCompilationUnit, endPositions)},
	{}
};

$MethodInfo _JCTree$JCCompilationUnit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCCompilationUnit::*)($List*)>(&JCTree$JCCompilationUnit::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getImports", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCImport;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC},
	{"getModule", "()Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", nullptr, $PUBLIC},
	{"getModuleDecl", "()Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", nullptr, $PUBLIC},
	{"getPackage", "()Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;", nullptr, $PUBLIC},
	{"getPackageAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC},
	{"getSourceFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeDecls", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCCompilationUnit_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCCompilationUnit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCCompilationUnit",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.CompilationUnitTree",
	_JCTree$JCCompilationUnit_FieldInfo_,
	_JCTree$JCCompilationUnit_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCCompilationUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCCompilationUnit($Class* clazz) {
	return $of($alloc(JCTree$JCCompilationUnit));
}

$String* JCTree$JCCompilationUnit::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCCompilationUnit::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCCompilationUnit::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCCompilationUnit::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCCompilationUnit::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCCompilationUnit::init$($List* defs) {
	$JCTree::init$();
	$set(this, lineMap, nullptr);
	$set(this, docComments, nullptr);
	$set(this, endPositions, nullptr);
	$set(this, defs, defs);
}

void JCTree$JCCompilationUnit::accept($JCTree$Visitor* v) {
	$nc(v)->visitTopLevel(this);
}

$Tree$Kind* JCTree$JCCompilationUnit::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::COMPILATION_UNIT;
}

$JCTree$JCModuleDecl* JCTree$JCCompilationUnit::getModuleDecl() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(tree)->hasTag($JCTree$Tag::MODULEDEF)) {
					return $cast($JCTree$JCModuleDecl, tree);
				}
			}
		}
	}
	return nullptr;
}

$ModuleTree* JCTree$JCCompilationUnit::getModule() {
	return getModuleDecl();
}

$PackageTree* JCTree$JCCompilationUnit::getPackage() {
	bool var$0 = !$nc(this->defs)->isEmpty();
	$init($JCTree$Tag);
	if (var$0 && $nc(($cast($JCTree, $nc(this->defs)->head)))->hasTag($JCTree$Tag::PACKAGEDEF)) {
		return $cast($JCTree$JCPackageDecl, $nc(this->defs)->head);
	}
	return nullptr;
}

$1List* JCTree$JCCompilationUnit::getPackageAnnotations() {
	$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, getPackage()));
	return (pd != nullptr ? $cast($List, $nc(pd)->getAnnotations()) : $List::nil());
}

$ExpressionTree* JCTree$JCCompilationUnit::getPackageName() {
	$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, getPackage()));
	return pd != nullptr ? $nc(pd)->getPackageName() : ($ExpressionTree*)nullptr;
}

$1List* JCTree$JCCompilationUnit::getImports() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, imports, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(tree)->hasTag($JCTree$Tag::IMPORT)) {
					imports->append($cast($JCTree$JCImport, tree));
				} else {
					bool var$1 = !tree->hasTag($JCTree$Tag::PACKAGEDEF);
					if (var$1 && !tree->hasTag($JCTree$Tag::SKIP)) {
						break;
					}
				}
			}
		}
	}
	return imports->toList();
}

$JavaFileObject* JCTree$JCCompilationUnit::getSourceFile() {
	return this->sourcefile;
}

$LineMap* JCTree$JCCompilationUnit::getLineMap() {
	return this->lineMap;
}

$1List* JCTree$JCCompilationUnit::getTypeDecls() {
	$var($List, typeDefs, nullptr);
	for ($assign(typeDefs, this->defs); !$nc(typeDefs)->isEmpty(); $assign(typeDefs, $nc(typeDefs)->tail)) {
		$init($JCTree$Tag);
		bool var$1 = !$nc(($cast($JCTree, typeDefs->head)))->hasTag($JCTree$Tag::MODULEDEF);
		bool var$0 = var$1 && !$nc(($cast($JCTree, typeDefs->head)))->hasTag($JCTree$Tag::PACKAGEDEF);
		if (var$0 && !$nc(($cast($JCTree, typeDefs->head)))->hasTag($JCTree$Tag::IMPORT)) {
			break;
		}
	}
	return typeDefs;
}

$Object* JCTree$JCCompilationUnit::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitCompilationUnit(this, d));
}

$JCTree$Tag* JCTree$JCCompilationUnit::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TOPLEVEL;
}

JCTree$JCCompilationUnit::JCTree$JCCompilationUnit() {
}

$Class* JCTree$JCCompilationUnit::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCCompilationUnit, name, initialize, &_JCTree$JCCompilationUnit_ClassInfo_, allocate$JCTree$JCCompilationUnit);
	return class$;
}

$Class* JCTree$JCCompilationUnit::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com