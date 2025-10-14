#include <com/sun/tools/javac/parser/DocCommentParser$23.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCUses.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DCTree$DCUses = ::com::sun::tools::javac::tree::DCTree$DCUses;
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

$FieldInfo _DocCommentParser$23_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$23, this$0)},
	{}
};

$MethodInfo _DocCommentParser$23_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$23::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$23::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$23_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$23_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$23_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$23",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$23_FieldInfo_,
	_DocCommentParser$23_MethodInfo_,
	nullptr,
	&_DocCommentParser$23_EnclosingMethodInfo_,
	_DocCommentParser$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$23($Class* clazz) {
	return $of($alloc(DocCommentParser$23));
}

void DocCommentParser$23::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$23::parse(int32_t pos) {
	this->this$0->skipWhitespace();
	$var($DCTree$DCReference, ref, this->this$0->reference(true));
	$var($1List, description, this->this$0->blockContent());
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newUsesTree(ref, description));
}

DocCommentParser$23::DocCommentParser$23() {
}

$Class* DocCommentParser$23::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$23, name, initialize, &_DocCommentParser$23_ClassInfo_, allocate$DocCommentParser$23);
	return class$;
}

$Class* DocCommentParser$23::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com