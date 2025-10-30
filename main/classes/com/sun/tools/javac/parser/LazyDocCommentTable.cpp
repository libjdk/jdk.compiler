#include <com/sun/tools/javac/parser/LazyDocCommentTable.h>

#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/parser/LazyDocCommentTable$Entry.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $LazyDocCommentTable$Entry = ::com::sun::tools::javac::parser::LazyDocCommentTable$Entry;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _LazyDocCommentTable_FieldInfo_[] = {
	{"fac", "Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PRIVATE | $FINAL, $field(LazyDocCommentTable, fac)},
	{"diagSource", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PRIVATE | $FINAL, $field(LazyDocCommentTable, diagSource)},
	{"table", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/LazyDocCommentTable$Entry;>;", $PRIVATE | $FINAL, $field(LazyDocCommentTable, table)},
	{}
};

$MethodInfo _LazyDocCommentTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;)V", nullptr, 0, $method(static_cast<void(LazyDocCommentTable::*)($ParserFactory*)>(&LazyDocCommentTable::init$))},
	{"getComment", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC},
	{"getCommentText", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCommentTree", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, $PUBLIC},
	{"hasComment", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC},
	{"putComment", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LazyDocCommentTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.LazyDocCommentTable$Entry", "com.sun.tools.javac.parser.LazyDocCommentTable", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LazyDocCommentTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.LazyDocCommentTable",
	"java.lang.Object",
	"com.sun.tools.javac.tree.DocCommentTable",
	_LazyDocCommentTable_FieldInfo_,
	_LazyDocCommentTable_MethodInfo_,
	nullptr,
	nullptr,
	_LazyDocCommentTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.LazyDocCommentTable$Entry"
};

$Object* allocate$LazyDocCommentTable($Class* clazz) {
	return $of($alloc(LazyDocCommentTable));
}

void LazyDocCommentTable::init$($ParserFactory* fac) {
	$set(this, fac, fac);
	$set(this, diagSource, $nc($nc(fac)->log)->currentSource());
	$set(this, table, $new($HashMap));
}

bool LazyDocCommentTable::hasComment($JCTree* tree) {
	return $nc(this->table)->containsKey(tree);
}

$Tokens$Comment* LazyDocCommentTable::getComment($JCTree* tree) {
	$var($LazyDocCommentTable$Entry, e, $cast($LazyDocCommentTable$Entry, $nc(this->table)->get(tree)));
	return (e == nullptr) ? ($Tokens$Comment*)nullptr : $nc(e)->comment;
}

$String* LazyDocCommentTable::getCommentText($JCTree* tree) {
	$var($Tokens$Comment, c, getComment(tree));
	return (c == nullptr) ? ($String*)nullptr : $nc(c)->getText();
}

$DCTree$DCDocComment* LazyDocCommentTable::getCommentTree($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LazyDocCommentTable$Entry, e, $cast($LazyDocCommentTable$Entry, $nc(this->table)->get(tree)));
	if (e == nullptr) {
		return nullptr;
	}
	if ($nc(e)->tree == nullptr) {
		$set(e, tree, $$new($DocCommentParser, this->fac, this->diagSource, e->comment)->parse());
	}
	return $nc(e)->tree;
}

void LazyDocCommentTable::putComment($JCTree* tree, $Tokens$Comment* c) {
	$nc(this->table)->put(tree, $$new($LazyDocCommentTable$Entry, c));
}

LazyDocCommentTable::LazyDocCommentTable() {
}

$Class* LazyDocCommentTable::load$($String* name, bool initialize) {
	$loadClass(LazyDocCommentTable, name, initialize, &_LazyDocCommentTable_ClassInfo_, allocate$LazyDocCommentTable);
	return class$;
}

$Class* LazyDocCommentTable::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com