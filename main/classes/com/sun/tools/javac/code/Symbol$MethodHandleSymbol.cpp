#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$RootPackageSymbol = ::com::sun::tools::javac::code::Symbol$RootPackageSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$MethodHandleSymbol_FieldInfo_[] = {
	{"refSym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $field(Symbol$MethodHandleSymbol, refSym)},
	{"getter", "Z", nullptr, $PRIVATE, $field(Symbol$MethodHandleSymbol, getter)},
	{}
};

$MethodInfo _Symbol$MethodHandleSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$MethodHandleSymbol::*)($Symbol*)>(&Symbol$MethodHandleSymbol::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$MethodHandleSymbol::*)($Symbol*,bool)>(&Symbol$MethodHandleSymbol::init$))},
	{"allowPrivateInvokeVirtual", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Symbol$MethodHandleSymbol::*)()>(&Symbol$MethodHandleSymbol::allowPrivateInvokeVirtual))},
	{"asHandle", "()Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"isHandle", "()Z", nullptr, $PUBLIC},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"referenceKind", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$MethodHandleSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$MethodHandleSymbol", "com.sun.tools.javac.code.Symbol", "MethodHandleSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$MethodHandleSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$MethodHandleSymbol",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant",
	_Symbol$MethodHandleSymbol_FieldInfo_,
	_Symbol$MethodHandleSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$MethodHandleSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$MethodHandleSymbol($Class* clazz) {
	return $of($alloc(Symbol$MethodHandleSymbol));
}

$String* Symbol$MethodHandleSymbol::toString() {
	 return this->$Symbol$MethodSymbol::toString();
}

int32_t Symbol$MethodHandleSymbol::hashCode() {
	 return this->$Symbol$MethodSymbol::hashCode();
}

bool Symbol$MethodHandleSymbol::equals(Object$* arg0) {
	 return this->$Symbol$MethodSymbol::equals(arg0);
}

$Object* Symbol$MethodHandleSymbol::clone() {
	 return this->$Symbol$MethodSymbol::clone();
}

void Symbol$MethodHandleSymbol::finalize() {
	this->$Symbol$MethodSymbol::finalize();
}

void Symbol$MethodHandleSymbol::init$($Symbol* msym) {
	Symbol$MethodHandleSymbol::init$(msym, false);
}

void Symbol$MethodHandleSymbol::init$($Symbol* msym, bool getter) {
	$Symbol$MethodSymbol::init$($nc(msym)->flags_field, msym->name, msym->type, msym->owner);
	$set(this, refSym, msym);
	this->getter = getter;
}

int32_t Symbol$MethodHandleSymbol::referenceKind() {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(this->refSym)->kind == $Kinds$Kind::VAR) {
		return this->getter ? $nc(this->refSym)->isStatic() ? $ClassFile::REF_getStatic : $ClassFile::REF_getField : $nc(this->refSym)->isStatic() ? $ClassFile::REF_putStatic : $ClassFile::REF_putField;
	} else if ($nc(this->refSym)->isConstructor()) {
		return $ClassFile::REF_newInvokeSpecial;
	} else if ($nc(this->refSym)->isStatic()) {
		return $ClassFile::REF_invokeStatic;
	} else {
		bool var$1 = ((int64_t)($nc(this->refSym)->flags() & (uint64_t)(int64_t)2)) != 0;
		if (var$1 && !allowPrivateInvokeVirtual()) {
			return $ClassFile::REF_invokeSpecial;
		} else if ($nc($($nc(this->refSym)->enclClass()))->isInterface()) {
			return $ClassFile::REF_invokeInterface;
		} else {
			return $ClassFile::REF_invokeVirtual;
		}
	}
}

bool Symbol$MethodHandleSymbol::allowPrivateInvokeVirtual() {
	$var($Symbol, rootPack, this);
	while (rootPack != nullptr && !($instanceOf($Symbol$RootPackageSymbol, rootPack))) {
		$assign(rootPack, rootPack->owner);
	}
	return rootPack != nullptr && $nc(($cast($Symbol$RootPackageSymbol, rootPack)))->allowPrivateInvokeVirtual;
}

int32_t Symbol$MethodHandleSymbol::poolTag() {
	return $ClassFile::CONSTANT_MethodHandle;
}

$Object* Symbol$MethodHandleSymbol::poolKey($Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(baseSymbol()));
	return $of($new($Pair, var$0, $($Integer::valueOf(referenceKind()))));
}

Symbol$MethodHandleSymbol* Symbol$MethodHandleSymbol::asHandle() {
	return this;
}

$Symbol* Symbol$MethodHandleSymbol::baseSymbol() {
	return this->refSym;
}

bool Symbol$MethodHandleSymbol::isHandle() {
	return true;
}

Symbol$MethodHandleSymbol::Symbol$MethodHandleSymbol() {
}

$Class* Symbol$MethodHandleSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$MethodHandleSymbol, name, initialize, &_Symbol$MethodHandleSymbol_ClassInfo_, allocate$Symbol$MethodHandleSymbol);
	return class$;
}

$Class* Symbol$MethodHandleSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com