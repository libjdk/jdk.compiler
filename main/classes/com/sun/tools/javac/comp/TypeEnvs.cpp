#include <com/sun/tools/javac/comp/TypeEnvs.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnvs_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeEnvs, serialVersionUID)},
	{"typeEnvsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/TypeEnvs;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TypeEnvs, typeEnvsKey)},
	{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(TypeEnvs, map)},
	{}
};

$MethodInfo _TypeEnvs_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TypeEnvs::*)($Context*)>(&TypeEnvs::init$))},
	{"clear", "()V", nullptr, 0},
	{"get", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeEnvs*(*)($Context*)>(&TypeEnvs::instance))},
	{"put", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"remove", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0},
	{}
};

$ClassInfo _TypeEnvs_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnvs",
	"java.lang.Object",
	nullptr,
	_TypeEnvs_FieldInfo_,
	_TypeEnvs_MethodInfo_
};

$Object* allocate$TypeEnvs($Class* clazz) {
	return $of($alloc(TypeEnvs));
}

$Context$Key* TypeEnvs::typeEnvsKey = nullptr;

TypeEnvs* TypeEnvs::instance($Context* context) {
	$init(TypeEnvs);
	$var(TypeEnvs, instance, $cast(TypeEnvs, $nc(context)->get(TypeEnvs::typeEnvsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TypeEnvs, context));
	}
	return instance;
}

void TypeEnvs::init$($Context* context) {
	$set(this, map, $new($HashMap));
	$nc(context)->put(TypeEnvs::typeEnvsKey, $of(this));
}

$Env* TypeEnvs::get($Symbol$TypeSymbol* sym) {
	return $cast($Env, $nc(this->map)->get(sym));
}

$Env* TypeEnvs::put($Symbol$TypeSymbol* sym, $Env* env) {
	return $cast($Env, $nc(this->map)->put(sym, env));
}

$Env* TypeEnvs::remove($Symbol$TypeSymbol* sym) {
	return $cast($Env, $nc(this->map)->remove(sym));
}

$Collection* TypeEnvs::values() {
	return $nc(this->map)->values();
}

void TypeEnvs::clear() {
	$nc(this->map)->clear();
}

void clinit$TypeEnvs($Class* class$) {
	$assignStatic(TypeEnvs::typeEnvsKey, $new($Context$Key));
}

TypeEnvs::TypeEnvs() {
}

$Class* TypeEnvs::load$($String* name, bool initialize) {
	$loadClass(TypeEnvs, name, initialize, &_TypeEnvs_ClassInfo_, clinit$TypeEnvs, allocate$TypeEnvs);
	return class$;
}

$Class* TypeEnvs::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com