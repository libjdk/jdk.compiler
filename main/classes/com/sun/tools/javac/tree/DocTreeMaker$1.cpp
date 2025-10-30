#include <com/sun/tools/javac/tree/DocTreeMaker$1.h>

#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef JAVADOC
#undef NOPOS

using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DocTreeMaker$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $FINAL | $SYNTHETIC, $field(DocTreeMaker$1, this$0)},
	{}
};

$MethodInfo _DocTreeMaker$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/DocTreeMaker;)V", nullptr, 0, $method(static_cast<void(DocTreeMaker$1::*)($DocTreeMaker*)>(&DocTreeMaker$1::init$))},
	{"getSourcePos", "(I)I", nullptr, $PUBLIC},
	{"getStyle", "()Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DocTreeMaker$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.DocTreeMaker",
	"newDocCommentTree",
	"(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;"
};

$InnerClassInfo _DocTreeMaker$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocTreeMaker$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.tree.DCTree$DCDocComment", "com.sun.tools.javac.tree.DCTree", "DCDocComment", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocTreeMaker$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.DocTreeMaker$1",
	"java.lang.Object",
	"com.sun.tools.javac.parser.Tokens$Comment",
	_DocTreeMaker$1_FieldInfo_,
	_DocTreeMaker$1_MethodInfo_,
	nullptr,
	&_DocTreeMaker$1_EnclosingMethodInfo_,
	_DocTreeMaker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocTreeMaker"
};

$Object* allocate$DocTreeMaker$1($Class* clazz) {
	return $of($alloc(DocTreeMaker$1));
}

void DocTreeMaker$1::init$($DocTreeMaker* this$0) {
	$set(this, this$0, this$0);
}

$String* DocTreeMaker$1::getText() {
	return nullptr;
}

int32_t DocTreeMaker$1::getSourcePos(int32_t index) {
	return $Position::NOPOS;
}

$Tokens$Comment$CommentStyle* DocTreeMaker$1::getStyle() {
	$init($Tokens$Comment$CommentStyle);
	return $Tokens$Comment$CommentStyle::JAVADOC;
}

bool DocTreeMaker$1::isDeprecated() {
	return false;
}

DocTreeMaker$1::DocTreeMaker$1() {
}

$Class* DocTreeMaker$1::load$($String* name, bool initialize) {
	$loadClass(DocTreeMaker$1, name, initialize, &_DocTreeMaker$1_ClassInfo_, allocate$DocTreeMaker$1);
	return class$;
}

$Class* DocTreeMaker$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com