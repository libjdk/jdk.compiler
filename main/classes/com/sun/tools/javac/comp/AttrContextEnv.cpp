#include <com/sun/tools/javac/comp/AttrContextEnv.h>

#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _AttrContextEnv_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/AttrContext;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrContextEnv::*)($JCTree*,$AttrContext*)>(&AttrContextEnv::init$))},
	{}
};

$ClassInfo _AttrContextEnv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.AttrContextEnv",
	"com.sun.tools.javac.comp.Env",
	nullptr,
	nullptr,
	_AttrContextEnv_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;"
};

$Object* allocate$AttrContextEnv($Class* clazz) {
	return $of($alloc(AttrContextEnv));
}

void AttrContextEnv::init$($JCTree* tree, $AttrContext* info) {
	$Env::init$(tree, info);
}

AttrContextEnv::AttrContextEnv() {
}

$Class* AttrContextEnv::load$($String* name, bool initialize) {
	$loadClass(AttrContextEnv, name, initialize, &_AttrContextEnv_ClassInfo_, allocate$AttrContextEnv);
	return class$;
}

$Class* AttrContextEnv::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com