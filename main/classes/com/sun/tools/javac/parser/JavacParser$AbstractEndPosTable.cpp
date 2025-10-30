#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
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

$FieldInfo _JavacParser$AbstractEndPosTable_FieldInfo_[] = {
	{"parser", "Lcom/sun/tools/javac/parser/JavacParser;", nullptr, $PROTECTED, $field(JavacParser$AbstractEndPosTable, parser)},
	{"errorEndPos", "I", nullptr, $PUBLIC, $field(JavacParser$AbstractEndPosTable, errorEndPos)},
	{}
};

$MethodInfo _JavacParser$AbstractEndPosTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$AbstractEndPosTable::*)($JavacParser*)>(&JavacParser$AbstractEndPosTable::init$))},
	{"setErrorEndPos", "(I)V", nullptr, $PUBLIC},
	{"setParser", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, $PUBLIC},
	{"to", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED | $ABSTRACT},
	{"toP", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacParser$AbstractEndPosTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable", "com.sun.tools.javac.parser.JavacParser", "AbstractEndPosTable", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JavacParser$AbstractEndPosTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable",
	"java.lang.Object",
	"com.sun.tools.javac.tree.EndPosTable",
	_JavacParser$AbstractEndPosTable_FieldInfo_,
	_JavacParser$AbstractEndPosTable_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser$AbstractEndPosTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$AbstractEndPosTable($Class* clazz) {
	return $of($alloc(JavacParser$AbstractEndPosTable));
}

void JavacParser$AbstractEndPosTable::init$($JavacParser* parser) {
	this->errorEndPos = $Position::NOPOS;
	$set(this, parser, parser);
}

void JavacParser$AbstractEndPosTable::setErrorEndPos(int32_t errPos) {
	if (errPos > this->errorEndPos) {
		this->errorEndPos = errPos;
	}
}

void JavacParser$AbstractEndPosTable::setParser($JavacParser* parser) {
	$set(this, parser, parser);
}

JavacParser$AbstractEndPosTable::JavacParser$AbstractEndPosTable() {
}

$Class* JavacParser$AbstractEndPosTable::load$($String* name, bool initialize) {
	$loadClass(JavacParser$AbstractEndPosTable, name, initialize, &_JavacParser$AbstractEndPosTable_ClassInfo_, allocate$JavacParser$AbstractEndPosTable);
	return class$;
}

$Class* JavacParser$AbstractEndPosTable::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com