#include <com/sun/tools/javac/parser/DocCommentParser$12.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCParam.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCParam = ::com::sun::tools::javac::tree::DCTree$DCParam;
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

$FieldInfo _DocCommentParser$12_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$12, this$0)},
	{}
};

$MethodInfo _DocCommentParser$12_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$12::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$12::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$12_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$12_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$12",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$12_FieldInfo_,
	_DocCommentParser$12_MethodInfo_,
	nullptr,
	&_DocCommentParser$12_EnclosingMethodInfo_,
	_DocCommentParser$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$12($Class* clazz) {
	return $of($alloc(DocCommentParser$12));
}

void DocCommentParser$12::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$12::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	this->this$0->skipWhitespace();
	bool typaram = false;
	if (this->this$0->ch == u'<') {
		typaram = true;
		this->this$0->nextChar();
	}
	$var($DCTree$DCIdentifier, id, this->this$0->identifier());
	if (typaram) {
		if (this->this$0->ch != u'>') {
			$throwNew($DocCommentParser$ParseException, "dc.gt.expected"_s);
		}
		this->this$0->nextChar();
	}
	this->this$0->skipWhitespace();
	$var($List, desc, this->this$0->blockContent());
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newParamTree(typaram, id, desc));
}

DocCommentParser$12::DocCommentParser$12() {
}

$Class* DocCommentParser$12::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$12, name, initialize, &_DocCommentParser$12_ClassInfo_, allocate$DocCommentParser$12);
	return class$;
}

$Class* DocCommentParser$12::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com