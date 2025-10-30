#include <com/sun/tools/javac/parser/DocCommentParser$9.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCLink.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCLink = ::com::sun::tools::javac::tree::DCTree$DCLink;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
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

$FieldInfo _DocCommentParser$9_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$9, this$0)},
	{}
};

$MethodInfo _DocCommentParser$9_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$9::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$9::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$9_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$9_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$9",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$9_FieldInfo_,
	_DocCommentParser$9_MethodInfo_,
	nullptr,
	&_DocCommentParser$9_EnclosingMethodInfo_,
	_DocCommentParser$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$9($Class* clazz) {
	return $of($alloc(DocCommentParser$9));
}

void DocCommentParser$9::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$9::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCReference, ref, this->this$0->reference(true));
	$var($1List, label, this->this$0->inlineContent());
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newLinkTree(ref, label));
}

DocCommentParser$9::DocCommentParser$9() {
}

$Class* DocCommentParser$9::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$9, name, initialize, &_DocCommentParser$9_ClassInfo_, allocate$DocCommentParser$9);
	return class$;
}

$Class* DocCommentParser$9::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com