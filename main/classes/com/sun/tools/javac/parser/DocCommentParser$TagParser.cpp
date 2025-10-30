#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef BLOCK
#undef EITHER
#undef INLINE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$TagParser_FieldInfo_[] = {
	{"kind", "Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $FINAL, $field(DocCommentParser$TagParser, kind)},
	{"treeKind", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $FINAL, $field(DocCommentParser$TagParser, treeKind)},
	{"retainWhiteSpace", "Z", nullptr, $FINAL, $field(DocCommentParser$TagParser, retainWhiteSpace)},
	{}
};

$MethodInfo _DocCommentParser$TagParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$TagParser::*)($DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$TagParser::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;Z)V", nullptr, 0, $method(static_cast<void(DocCommentParser$TagParser::*)($DocCommentParser$TagParser$Kind*,$DocTree$Kind*,bool)>(&DocCommentParser$TagParser::init$))},
	{"allowsBlock", "()Z", nullptr, 0},
	{"allowsInline", "()Z", nullptr, 0},
	{"getTreeKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, 0},
	{"parse", "(ILcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;)Lcom/sun/tools/javac/tree/DCTree;", nullptr, 0, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, 0, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$InnerClassInfo _DocCommentParser$TagParser_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser$Kind", "com.sun.tools.javac.parser.DocCommentParser$TagParser", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DocCommentParser$TagParser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	"java.lang.Object",
	nullptr,
	_DocCommentParser$TagParser_FieldInfo_,
	_DocCommentParser$TagParser_MethodInfo_,
	nullptr,
	nullptr,
	_DocCommentParser$TagParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$TagParser($Class* clazz) {
	return $of($alloc(DocCommentParser$TagParser));
}

void DocCommentParser$TagParser::init$($DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, kind, k);
	$set(this, treeKind, tk);
	this->retainWhiteSpace = false;
}

void DocCommentParser$TagParser::init$($DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk, bool retainWhiteSpace) {
	$set(this, kind, k);
	$set(this, treeKind, tk);
	this->retainWhiteSpace = retainWhiteSpace;
}

bool DocCommentParser$TagParser::allowsBlock() {
	$init($DocCommentParser$TagParser$Kind);
	return this->kind != $DocCommentParser$TagParser$Kind::INLINE;
}

bool DocCommentParser$TagParser::allowsInline() {
	$init($DocCommentParser$TagParser$Kind);
	return this->kind != $DocCommentParser$TagParser$Kind::BLOCK;
}

$DocTree$Kind* DocCommentParser$TagParser::getTreeKind() {
	return this->treeKind;
}

$DCTree* DocCommentParser$TagParser::parse(int32_t pos, $DocCommentParser$TagParser$Kind* kind) {
	$init($DocCommentParser$TagParser$Kind);
	if (kind != this->kind && this->kind != $DocCommentParser$TagParser$Kind::EITHER) {
		$throwNew($IllegalArgumentException, $($nc(kind)->toString()));
	}
	return parse(pos);
}

$DCTree* DocCommentParser$TagParser::parse(int32_t pos) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

DocCommentParser$TagParser::DocCommentParser$TagParser() {
}

$Class* DocCommentParser$TagParser::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$TagParser, name, initialize, &_DocCommentParser$TagParser_ClassInfo_, allocate$DocCommentParser$TagParser);
	return class$;
}

$Class* DocCommentParser$TagParser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com