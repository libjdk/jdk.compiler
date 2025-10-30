#include <com/sun/tools/javac/parser/DocCommentParser$21.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCSystemProperty.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCSystemProperty = ::com::sun::tools::javac::tree::DCTree$DCSystemProperty;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser$21_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$21, this$0)},
	{}
};

$MethodInfo _DocCommentParser$21_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$21::*)($DocCommentParser*,$DocCommentParser$TagParser$Kind*,$DocTree$Kind*)>(&DocCommentParser$21::init$))},
	{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{}
};

$EnclosingMethodInfo _DocCommentParser$21_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	"createTagParsers",
	"()Ljava/util/Map;"
};

$InnerClassInfo _DocCommentParser$21_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$21", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentParser$21_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$21",
	"com.sun.tools.javac.parser.DocCommentParser$TagParser",
	nullptr,
	_DocCommentParser$21_FieldInfo_,
	_DocCommentParser$21_MethodInfo_,
	nullptr,
	&_DocCommentParser$21_EnclosingMethodInfo_,
	_DocCommentParser$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$21($Class* clazz) {
	return $of($alloc(DocCommentParser$21));
}

void DocCommentParser$21::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$21::parse(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	this->this$0->skipWhitespace();
	if (this->this$0->ch == u'}') {
		$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
	}
	$var($Name, propertyName, this->this$0->readSystemPropertyName());
	if (propertyName == nullptr) {
		$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
	}
	this->this$0->skipWhitespace();
	if (this->this$0->ch != u'}') {
		this->this$0->nextChar();
		$throwNew($DocCommentParser$ParseException, "dc.unexpected.content"_s);
	} else {
		this->this$0->nextChar();
		return $cast($DCTree, $nc($($nc(this->this$0->m)->at(pos)))->newSystemPropertyTree(propertyName));
	}
}

DocCommentParser$21::DocCommentParser$21() {
}

$Class* DocCommentParser$21::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$21, name, initialize, &_DocCommentParser$21_ClassInfo_, allocate$DocCommentParser$21);
	return class$;
}

$Class* DocCommentParser$21::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com