#include <com/sun/tools/javac/parser/DocCommentParser$7.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCIndex.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCIndex = ::com::sun::tools::javac::tree::DCTree$DCIndex;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$7, this$0)},
	{}
};

$MethodInfo _DocCommentParser$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$7::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$7::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$7",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$7_FieldInfo_,
	_DocCommentParser$7_MethodInfo_,
	nullptr,
	&_DocCommentParser$7_EnclosingMethodInfo_,
	_DocCommentParser$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$7($Class* clazz) {
	return $of($alloc(DocCommentParser$7));
}

void DocCommentParser$7::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$7::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	this->this$0->skipWhitespace();
	if (this->this$0->ch == u'}') {
		$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
	}
	$var($DCTree, term, this->this$0->ch == u'\"' ? static_cast<$DCTree*>(this->this$0->quotedString()) : static_cast<$DCTree*>(this->this$0->inlineWord()));
	if (term == nullptr) {
		$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
	}
	this->this$0->skipWhitespace();
	$var($List, description, $List::nil());
	if (this->this$0->ch != u'}') {
		$assign(description, this->this$0->inlineContent());
	} else {
		this->this$0->nextChar();
	}
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newIndexTree(term, description));
}

DocCommentParser$7::DocCommentParser$7() {
}

$Class* DocCommentParser$7::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$7, name, initialize, &_DocCommentParser$7_ClassInfo_, allocate$DocCommentParser$7);
	return class$;
}

$Class* DocCommentParser$7::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com