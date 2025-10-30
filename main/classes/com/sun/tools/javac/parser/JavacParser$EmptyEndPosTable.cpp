#include <com/sun/tools/javac/parser/JavacParser$EmptyEndPosTable.h>

#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$AbstractEndPosTable = ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _JavacParser$EmptyEndPosTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, 0, $method(static_cast<void(JavacParser$EmptyEndPosTable::*)($JavacParser*)>(&JavacParser$EmptyEndPosTable::init$))},
	{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"replaceTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"storeEnd", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PUBLIC},
	{"to", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{"toP", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{}
};

$InnerClassInfo _JavacParser$EmptyEndPosTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$EmptyEndPosTable", "com.sun.tools.javac.parser.JavacParser", "EmptyEndPosTable", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable", "com.sun.tools.javac.parser.JavacParser", "AbstractEndPosTable", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JavacParser$EmptyEndPosTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavacParser$EmptyEndPosTable",
	"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable",
	nullptr,
	nullptr,
	_JavacParser$EmptyEndPosTable_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser$EmptyEndPosTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$EmptyEndPosTable($Class* clazz) {
	return $of($alloc(JavacParser$EmptyEndPosTable));
}

void JavacParser$EmptyEndPosTable::init$($JavacParser* parser) {
	$JavacParser$AbstractEndPosTable::init$(parser);
}

void JavacParser$EmptyEndPosTable::storeEnd($JCTree* tree, int32_t endpos) {
}

$JCTree* JavacParser$EmptyEndPosTable::to($JCTree* t) {
	return t;
}

$JCTree* JavacParser$EmptyEndPosTable::toP($JCTree* t) {
	return t;
}

int32_t JavacParser$EmptyEndPosTable::getEndPos($JCTree* tree) {
	return $Position::NOPOS;
}

int32_t JavacParser$EmptyEndPosTable::replaceTree($JCTree* oldTree, $JCTree* newTree) {
	return $Position::NOPOS;
}

JavacParser$EmptyEndPosTable::JavacParser$EmptyEndPosTable() {
}

$Class* JavacParser$EmptyEndPosTable::load$($String* name, bool initialize) {
	$loadClass(JavacParser$EmptyEndPosTable, name, initialize, &_JavacParser$EmptyEndPosTable_ClassInfo_, allocate$JavacParser$EmptyEndPosTable);
	return class$;
}

$Class* JavacParser$EmptyEndPosTable::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com