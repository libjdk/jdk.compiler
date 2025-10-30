#include <com/sun/tools/javac/parser/DocCommentParser$8.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCInheritDoc.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <jcpp.h>

#undef REMOVE_ALL

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DocCommentParser$WhitespaceRetentionPolicy = ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInheritDoc = ::com::sun::tools::javac::tree::DCTree$DCInheritDoc;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$8_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$8, this$0)},
	{}
};

$MethodInfo _DocCommentParser$8_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$8::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$8::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$8_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$8_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$8",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$8_FieldInfo_,
	_DocCommentParser$8_MethodInfo_,
	nullptr,
	&_DocCommentParser$8_EnclosingMethodInfo_,
	_DocCommentParser$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$8($Class* clazz) {
	return $of($alloc(DocCommentParser$8));
}

void DocCommentParser$8::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$8::parse(int32_t pos) {
	if (this->this$0->ch == u'}') {
		this->this$0->nextChar();
		return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newInheritDocTree());
	}
	$init($DocCommentParser$WhitespaceRetentionPolicy);
	this->this$0->inlineText($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL);
	this->this$0->nextChar();
	$throwNew($DocCommentParser$ParseException, "dc.unexpected.content"_s);
}

DocCommentParser$8::DocCommentParser$8() {
}

$Class* DocCommentParser$8::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$8, name, initialize, &_DocCommentParser$8_ClassInfo_, allocate$DocCommentParser$8);
	return class$;
}

$Class* DocCommentParser$8::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com