#include <com/sun/tools/javac/parser/DocCommentParser$11.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCLiteral.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <jcpp.h>

#undef REMOVE_FIRST_SPACE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DocCommentParser$WhitespaceRetentionPolicy = ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCLiteral = ::com::sun::tools::javac::tree::DCTree$DCLiteral;
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

$FieldInfo _DocCommentParser$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$11, this$0)},
	{}
};

$MethodInfo _DocCommentParser$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;Z)V", nullptr, 0, $method(static_cast<void(DocCommentParser$11::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*,bool)>(&DocCommentParser$11::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$11",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$11_FieldInfo_,
	_DocCommentParser$11_MethodInfo_,
	nullptr,
	&_DocCommentParser$11_EnclosingMethodInfo_,
	_DocCommentParser$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$11($Class* clazz) {
	return $of($alloc(DocCommentParser$11));
}

void DocCommentParser$11::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk, bool retainWhiteSpace) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk, retainWhiteSpace);
}

$DCTree* DocCommentParser$11::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$init($DocCommentParser$WhitespaceRetentionPolicy);
	$var($DCTree$DCText, text, this->this$0->inlineText($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_FIRST_SPACE));
	this->this$0->nextChar();
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newLiteralTree(text));
}

DocCommentParser$11::DocCommentParser$11() {
}

$Class* DocCommentParser$11::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$11, name, initialize, &_DocCommentParser$11_ClassInfo_, allocate$DocCommentParser$11);
	return class$;
}

$Class* DocCommentParser$11::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com