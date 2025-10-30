#include <com/sun/tools/javac/parser/DocCommentParser$14.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$26.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCReturn.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef INLINE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$26 = ::com::sun::tools::javac::parser::DocCommentParser$26;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCReturn = ::com::sun::tools::javac::tree::DCTree$DCReturn;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$14_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$14, this$0)},
	{}
};

$MethodInfo _DocCommentParser$14_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$14::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$14::init$))},
	{"parse", "(ILcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DocCommentParser$14_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$14_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$14_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$14",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$14_FieldInfo_,
	_DocCommentParser$14_MethodInfo_,
	nullptr,
	&_DocCommentParser$14_EnclosingMethodInfo_,
	_DocCommentParser$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$14($Class* clazz) {
	return $of($alloc(DocCommentParser$14));
}

void DocCommentParser$14::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$14::parse(int32_t pos, $DocCommentParser$TagParser$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	$var($List, description, nullptr);
	$init($DocCommentParser$26);
	switch ($nc($DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind)->get($nc((kind))->ordinal())) {
	case 1:
		{
			$assign(description, this->this$0->blockContent());
			break;
		}
	case 2:
		{
			$assign(description, this->this$0->inlineContent());
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $(kind->toString()));
		}
	}
	return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newReturnTree(kind == $DocCommentParser$TagParser$Kind::INLINE, description));
}

DocCommentParser$14::DocCommentParser$14() {
}

$Class* DocCommentParser$14::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$14, name, initialize, &_DocCommentParser$14_ClassInfo_, allocate$DocCommentParser$14);
	return class$;
}

$Class* DocCommentParser$14::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com