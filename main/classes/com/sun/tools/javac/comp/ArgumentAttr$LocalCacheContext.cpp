#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>

#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ArgumentAttr$LocalCacheContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$LocalCacheContext, this$0)},
	{"prevCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<*>;>;", 0, $field(ArgumentAttr$LocalCacheContext, prevCache)},
	{}
};

$MethodInfo _ArgumentAttr$LocalCacheContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$LocalCacheContext::*)($ArgumentAttr*)>(&ArgumentAttr$LocalCacheContext::init$))},
	{"leave", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArgumentAttr$LocalCacheContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext", "com.sun.tools.javac.comp.ArgumentAttr", "LocalCacheContext", 0},
	{}
};

$ClassInfo _ArgumentAttr$LocalCacheContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext",
	"java.lang.Object",
	nullptr,
	_ArgumentAttr$LocalCacheContext_FieldInfo_,
	_ArgumentAttr$LocalCacheContext_MethodInfo_,
	nullptr,
	nullptr,
	_ArgumentAttr$LocalCacheContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$LocalCacheContext($Class* clazz) {
	return $of($alloc(ArgumentAttr$LocalCacheContext));
}

void ArgumentAttr$LocalCacheContext::init$($ArgumentAttr* this$0) {
	$set(this, this$0, this$0);
	$set(this, prevCache, this$0->argumentTypeCache);
	$set(this$0, argumentTypeCache, $new($HashMap));
}

void ArgumentAttr$LocalCacheContext::leave() {
	$set(this->this$0, argumentTypeCache, this->prevCache);
}

ArgumentAttr$LocalCacheContext::ArgumentAttr$LocalCacheContext() {
}

$Class* ArgumentAttr$LocalCacheContext::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$LocalCacheContext, name, initialize, &_ArgumentAttr$LocalCacheContext_ClassInfo_, allocate$ArgumentAttr$LocalCacheContext);
	return class$;
}

$Class* ArgumentAttr$LocalCacheContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com