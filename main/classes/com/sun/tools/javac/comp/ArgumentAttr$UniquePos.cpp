#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>

#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/Log.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ArgumentAttr$UniquePos_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$UniquePos, this$0)},
	{"pos", "I", nullptr, 0, $field(ArgumentAttr$UniquePos, pos)},
	{"source", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, 0, $field(ArgumentAttr$UniquePos, source)},
	{}
};

$MethodInfo _ArgumentAttr$UniquePos_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(static_cast<void(ArgumentAttr$UniquePos::*)($ArgumentAttr*,$JCTree*)>(&ArgumentAttr$UniquePos::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArgumentAttr$UniquePos_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$UniquePos", "com.sun.tools.javac.comp.ArgumentAttr", "UniquePos", 0},
	{}
};

$ClassInfo _ArgumentAttr$UniquePos_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$UniquePos",
	"java.lang.Object",
	nullptr,
	_ArgumentAttr$UniquePos_FieldInfo_,
	_ArgumentAttr$UniquePos_MethodInfo_,
	nullptr,
	nullptr,
	_ArgumentAttr$UniquePos_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$UniquePos($Class* clazz) {
	return $of($alloc(ArgumentAttr$UniquePos));
}

void ArgumentAttr$UniquePos::init$($ArgumentAttr* this$0, $JCTree* tree) {
	$set(this, this$0, this$0);
	this->pos = $nc(tree)->pos$;
	$set(this, source, $nc(this$0->log)->currentSource());
}

int32_t ArgumentAttr$UniquePos::hashCode() {
	return $sl(this->pos, 16 + $nc($of(this->source))->hashCode());
}

bool ArgumentAttr$UniquePos::equals(Object$* obj) {
	$var(ArgumentAttr$UniquePos, uniquePos, nullptr);
	bool var$2 = $instanceOf(ArgumentAttr$UniquePos, obj);
	if (var$2) {
		$assign(uniquePos, $cast(ArgumentAttr$UniquePos, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->pos == $nc(uniquePos)->pos;
	return var$0 && this->source == uniquePos->source;
}

$String* ArgumentAttr$UniquePos::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($($nc(this->source)->getFile()))->getName()), " @ "_s}));
	return $concat(var$0, $$str($nc(this->source)->getLineNumber(this->pos)));
}

ArgumentAttr$UniquePos::ArgumentAttr$UniquePos() {
}

$Class* ArgumentAttr$UniquePos::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$UniquePos, name, initialize, &_ArgumentAttr$UniquePos_ClassInfo_, allocate$ArgumentAttr$UniquePos);
	return class$;
}

$Class* ArgumentAttr$UniquePos::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com