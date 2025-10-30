#include <com/sun/tools/javac/parser/LazyDocCommentTable$Entry.h>

#include <com/sun/tools/javac/parser/LazyDocCommentTable.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <jcpp.h>

using $LazyDocCommentTable = ::com::sun::tools::javac::parser::LazyDocCommentTable;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _LazyDocCommentTable$Entry_FieldInfo_[] = {
	{"comment", "Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $FINAL, $field(LazyDocCommentTable$Entry, comment)},
	{"tree", "Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, 0, $field(LazyDocCommentTable$Entry, tree)},
	{}
};

$MethodInfo _LazyDocCommentTable$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, 0, $method(static_cast<void(LazyDocCommentTable$Entry::*)($Tokens$Comment*)>(&LazyDocCommentTable$Entry::init$))},
	{}
};

$InnerClassInfo _LazyDocCommentTable$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.LazyDocCommentTable$Entry", "com.sun.tools.javac.parser.LazyDocCommentTable", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LazyDocCommentTable$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.LazyDocCommentTable$Entry",
	"java.lang.Object",
	nullptr,
	_LazyDocCommentTable$Entry_FieldInfo_,
	_LazyDocCommentTable$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_LazyDocCommentTable$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.LazyDocCommentTable"
};

$Object* allocate$LazyDocCommentTable$Entry($Class* clazz) {
	return $of($alloc(LazyDocCommentTable$Entry));
}

void LazyDocCommentTable$Entry::init$($Tokens$Comment* c) {
	$set(this, comment, c);
}

LazyDocCommentTable$Entry::LazyDocCommentTable$Entry() {
}

$Class* LazyDocCommentTable$Entry::load$($String* name, bool initialize) {
	$loadClass(LazyDocCommentTable$Entry, name, initialize, &_LazyDocCommentTable$Entry_ClassInfo_, allocate$LazyDocCommentTable$Entry);
	return class$;
}

$Class* LazyDocCommentTable$Entry::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com