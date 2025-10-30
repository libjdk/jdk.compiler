#include <com/sun/tools/javac/parser/JavacParser$SimpleEndPosTable.h>

#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/Lexer.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/IntHashTable.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS
#undef S

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$AbstractEndPosTable = ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable;
using $Lexer = ::com::sun::tools::javac::parser::Lexer;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $IntHashTable = ::com::sun::tools::javac::util::IntHashTable;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavacParser$SimpleEndPosTable_FieldInfo_[] = {
	{"endPosMap", "Lcom/sun/tools/javac/util/IntHashTable;", nullptr, $PRIVATE | $FINAL, $field(JavacParser$SimpleEndPosTable, endPosMap)},
	{}
};

$MethodInfo _JavacParser$SimpleEndPosTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, 0, $method(static_cast<void(JavacParser$SimpleEndPosTable::*)($JavacParser*)>(&JavacParser$SimpleEndPosTable::init$))},
	{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"replaceTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"storeEnd", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PUBLIC},
	{"to", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{"toP", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{}
};

$InnerClassInfo _JavacParser$SimpleEndPosTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$SimpleEndPosTable", "com.sun.tools.javac.parser.JavacParser", "SimpleEndPosTable", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable", "com.sun.tools.javac.parser.JavacParser", "AbstractEndPosTable", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JavacParser$SimpleEndPosTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavacParser$SimpleEndPosTable",
	"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable",
	nullptr,
	_JavacParser$SimpleEndPosTable_FieldInfo_,
	_JavacParser$SimpleEndPosTable_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser$SimpleEndPosTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$SimpleEndPosTable($Class* clazz) {
	return $of($alloc(JavacParser$SimpleEndPosTable));
}

void JavacParser$SimpleEndPosTable::init$($JavacParser* parser) {
	$JavacParser$AbstractEndPosTable::init$(parser);
	$set(this, endPosMap, $new($IntHashTable));
}

void JavacParser$SimpleEndPosTable::storeEnd($JCTree* tree, int32_t endpos) {
	$nc(this->endPosMap)->put(tree, this->errorEndPos > endpos ? this->errorEndPos : endpos);
}

$JCTree* JavacParser$SimpleEndPosTable::to($JCTree* t) {
	storeEnd(t, $nc($nc(this->parser)->token$)->endPos);
	return t;
}

$JCTree* JavacParser$SimpleEndPosTable::toP($JCTree* t) {
	storeEnd(t, $nc($($nc($nc(this->parser)->S)->prevToken()))->endPos);
	return t;
}

int32_t JavacParser$SimpleEndPosTable::getEndPos($JCTree* tree) {
	int32_t value = $nc(this->endPosMap)->get(tree);
	return (value == -1) ? $Position::NOPOS : value;
}

int32_t JavacParser$SimpleEndPosTable::replaceTree($JCTree* oldTree, $JCTree* newTree) {
	int32_t pos = $nc(this->endPosMap)->remove(oldTree);
	if (pos != -1) {
		storeEnd(newTree, pos);
		return pos;
	}
	return $Position::NOPOS;
}

JavacParser$SimpleEndPosTable::JavacParser$SimpleEndPosTable() {
}

$Class* JavacParser$SimpleEndPosTable::load$($String* name, bool initialize) {
	$loadClass(JavacParser$SimpleEndPosTable, name, initialize, &_JavacParser$SimpleEndPosTable_ClassInfo_, allocate$JavacParser$SimpleEndPosTable);
	return class$;
}

$Class* JavacParser$SimpleEndPosTable::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com