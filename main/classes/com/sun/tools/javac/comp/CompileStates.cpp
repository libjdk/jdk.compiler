#include <com/sun/tools/javac/comp/CompileStates.h>

#include <com/sun/tools/javac/comp/CompileStates$CompileState.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $CompileStates$CompileState = ::com::sun::tools::javac::comp::CompileStates$CompileState;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _CompileStates_FieldInfo_[] = {
	{"compileStatesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/CompileStates;>;", $PROTECTED | $STATIC | $FINAL, $staticField(CompileStates, compileStatesKey)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompileStates, serialVersionUID)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PROTECTED | $TRANSIENT, $field(CompileStates, context)},
	{}
};

$MethodInfo _CompileStates_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(CompileStates::*)($Context*)>(&CompileStates::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/CompileStates;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CompileStates*(*)($Context*)>(&CompileStates::instance))},
	{"isDone", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/CompileStates$CompileState;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/CompileStates$CompileState;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _CompileStates_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.CompileStates$CompileState", "com.sun.tools.javac.comp.CompileStates", "CompileState", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CompileStates_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.CompileStates",
	"java.util.HashMap",
	nullptr,
	_CompileStates_FieldInfo_,
	_CompileStates_MethodInfo_,
	"Ljava/util/HashMap<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/CompileStates$CompileState;>;",
	nullptr,
	_CompileStates_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.CompileStates$CompileState"
};

$Object* allocate$CompileStates($Class* clazz) {
	return $of($alloc(CompileStates));
}

$Context$Key* CompileStates::compileStatesKey = nullptr;

CompileStates* CompileStates::instance($Context* context) {
	$init(CompileStates);
	$var(CompileStates, instance, $cast(CompileStates, $nc(context)->get(CompileStates::compileStatesKey)));
	if (instance == nullptr) {
		$assign(instance, $new(CompileStates, context));
	}
	return instance;
}

void CompileStates::init$($Context* context) {
	$HashMap::init$();
	$set(this, context, context);
	$nc(context)->put(CompileStates::compileStatesKey, $of(this));
}

bool CompileStates::isDone($Env* env, $CompileStates$CompileState* cs) {
	$CompileStates$CompileState* ecs = $cast($CompileStates$CompileState, get(env));
	return (ecs != nullptr) && !$nc(cs)->isAfter(ecs);
}

void clinit$CompileStates($Class* class$) {
	$assignStatic(CompileStates::compileStatesKey, $new($Context$Key));
}

CompileStates::CompileStates() {
}

$Class* CompileStates::load$($String* name, bool initialize) {
	$loadClass(CompileStates, name, initialize, &_CompileStates_ClassInfo_, clinit$CompileStates, allocate$CompileStates);
	return class$;
}

$Class* CompileStates::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com