#include <com/sun/tools/javac/parser/DocCommentParser$20.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCSummary.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCSummary = ::com::sun::tools::javac::tree::DCTree$DCSummary;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$20_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$20, this$0)},
	{}
};

$MethodInfo _DocCommentParser$20_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$20::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$20::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$20_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$20_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$20", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$20_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$20",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$20_FieldInfo_,
	_DocCommentParser$20_MethodInfo_,
	nullptr,
	&_DocCommentParser$20_EnclosingMethodInfo_,
	_DocCommentParser$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$20($Class* clazz) {
	return $of($alloc(DocCommentParser$20));
}

void DocCommentParser$20::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$20::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($1List, summary, this->this$0->inlineContent());
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newSummaryTree(summary));
}

DocCommentParser$20::DocCommentParser$20() {
}

$Class* DocCommentParser$20::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$20, name, initialize, &_DocCommentParser$20_ClassInfo_, allocate$DocCommentParser$20);
	return class$;
}

$Class* DocCommentParser$20::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com