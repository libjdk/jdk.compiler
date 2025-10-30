#include <com/sun/source/util/DocTreePath$1Result.h>

#include <com/sun/source/util/DocTreePath.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _DocTreePath$1Result_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocTreePath$1Result, serialVersionUID)},
	{"path", "Lcom/sun/source/util/DocTreePath;", nullptr, 0, $field(DocTreePath$1Result, path)},
	{}
};

$MethodInfo _DocTreePath$1Result_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/DocTreePath;)V", nullptr, 0, $method(static_cast<void(DocTreePath$1Result::*)($DocTreePath*)>(&DocTreePath$1Result::init$))},
	{}
};

$EnclosingMethodInfo _DocTreePath$1Result_EnclosingMethodInfo_ = {
	"com.sun.source.util.DocTreePath",
	"getPath",
	"(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;"
};

$InnerClassInfo _DocTreePath$1Result_InnerClassesInfo_[] = {
	{"com.sun.source.util.DocTreePath$1Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _DocTreePath$1Result_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.DocTreePath$1Result",
	"java.lang.Error",
	nullptr,
	_DocTreePath$1Result_FieldInfo_,
	_DocTreePath$1Result_MethodInfo_,
	nullptr,
	&_DocTreePath$1Result_EnclosingMethodInfo_,
	_DocTreePath$1Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.DocTreePath"
};

$Object* allocate$DocTreePath$1Result($Class* clazz) {
	return $of($alloc(DocTreePath$1Result));
}

void DocTreePath$1Result::init$($DocTreePath* path) {
	$Error::init$();
	$set(this, path, path);
}

DocTreePath$1Result::DocTreePath$1Result() {
}

DocTreePath$1Result::DocTreePath$1Result(const DocTreePath$1Result& e) : $Error(e) {
}

void DocTreePath$1Result::throw$() {
	throw *this;
}

$Class* DocTreePath$1Result::load$($String* name, bool initialize) {
	$loadClass(DocTreePath$1Result, name, initialize, &_DocTreePath$1Result_ClassInfo_, allocate$DocTreePath$1Result);
	return class$;
}

$Class* DocTreePath$1Result::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com