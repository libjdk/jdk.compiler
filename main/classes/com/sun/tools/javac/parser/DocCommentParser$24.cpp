#include <com/sun/tools/javac/parser/DocCommentParser$24.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCValue.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DCTree$DCValue = ::com::sun::tools::javac::tree::DCTree$DCValue;
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

$FieldInfo _DocCommentParser$24_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$24, this$0)},
	{}
};

$MethodInfo _DocCommentParser$24_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$24::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$24::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$24_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$24_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$24_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$24",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$24_FieldInfo_,
	_DocCommentParser$24_MethodInfo_,
	nullptr,
	&_DocCommentParser$24_EnclosingMethodInfo_,
	_DocCommentParser$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$24($Class* clazz) {
	return $of($alloc(DocCommentParser$24));
}

void DocCommentParser$24::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$24::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCReference, ref, this->this$0->reference(true));
	this->this$0->skipWhitespace();
	if (this->this$0->ch == u'}') {
		this->this$0->nextChar();
		return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newValueTree(ref));
	}
	this->this$0->nextChar();
	$throwNew($DocCommentParser$ParseException, "dc.unexpected.content"_s);
}

DocCommentParser$24::DocCommentParser$24() {
}

$Class* DocCommentParser$24::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$24, name, initialize, &_DocCommentParser$24_ClassInfo_, allocate$DocCommentParser$24);
	return class$;
}

$Class* DocCommentParser$24::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com