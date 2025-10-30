#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$MethodCheck_MethodInfo_[] = {
	{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC | $ABSTRACT},
	{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Resolve$MethodCheck_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$MethodCheck_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$MethodCheck",
	nullptr,
	nullptr,
	nullptr,
	_Resolve$MethodCheck_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodCheck_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodCheck($Class* clazz) {
	return $of($alloc(Resolve$MethodCheck));
}

$Class* Resolve$MethodCheck::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodCheck, name, initialize, &_Resolve$MethodCheck_ClassInfo_, allocate$Resolve$MethodCheck);
	return class$;
}

$Class* Resolve$MethodCheck::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com