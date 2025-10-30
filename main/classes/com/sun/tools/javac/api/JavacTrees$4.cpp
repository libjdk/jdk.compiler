#include <com/sun/tools/javac/api/JavacTrees$4.h>

#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$4, this$0)},
	{"val$fileObject", "Ljavax/tools/FileObject;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$4, val$fileObject)},
	{"offset", "I", nullptr, 0, $field(JavacTrees$4, offset)},
	{}
};

$MethodInfo _JavacTrees$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Ljavax/tools/FileObject;)V", "()V", 0, $method(static_cast<void(JavacTrees$4::*)($JavacTrees*,$FileObject*)>(&JavacTrees$4::init$))},
	{"getSourcePos", "(I)I", nullptr, $PUBLIC},
	{"getStyle", "()Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"getDocCommentTree",
	"(Ljavax/tools/FileObject;)Lcom/sun/source/doctree/DocCommentTree;"
};

$InnerClassInfo _JavacTrees$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacTrees$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$4",
	"java.lang.Object",
	"com.sun.tools.javac.parser.Tokens$Comment",
	_JavacTrees$4_FieldInfo_,
	_JavacTrees$4_MethodInfo_,
	nullptr,
	&_JavacTrees$4_EnclosingMethodInfo_,
	_JavacTrees$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$4($Class* clazz) {
	return $of($alloc(JavacTrees$4));
}

void JavacTrees$4::init$($JavacTrees* this$0, $FileObject* val$fileObject) {
	$set(this, this$0, this$0);
	$set(this, val$fileObject, val$fileObject);
	this->offset = 0;
}

$String* JavacTrees$4::getText() {
	try {
		$var($CharSequence, rawDoc, $nc(this->val$fileObject)->getCharContent(true));
		return $nc(rawDoc)->toString();
	} catch ($IOException& ignore) {
	}
	return ""_s;
}

int32_t JavacTrees$4::getSourcePos(int32_t index) {
	return this->offset + index;
}

$Tokens$Comment$CommentStyle* JavacTrees$4::getStyle() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool JavacTrees$4::isDeprecated() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

JavacTrees$4::JavacTrees$4() {
}

$Class* JavacTrees$4::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$4, name, initialize, &_JavacTrees$4_ClassInfo_, allocate$JavacTrees$4);
	return class$;
}

$Class* JavacTrees$4::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com