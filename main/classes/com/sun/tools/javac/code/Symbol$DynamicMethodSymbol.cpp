#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>

#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$DynamicMethodSymbol_FieldInfo_[] = {
	{"staticArgs", "[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC, $field(Symbol$DynamicMethodSymbol, staticArgs$)},
	{"bsm", "Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC, $field(Symbol$DynamicMethodSymbol, bsm)},
	{}
};

$MethodInfo _Symbol$DynamicMethodSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/code/Type;[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$DynamicMethodSymbol::*)($Name*,$Symbol*,$Symbol$MethodHandleSymbol*,$Type*,$PoolConstant$LoadableConstantArray*)>(&Symbol$DynamicMethodSymbol::init$))},
	{"bootstrapMethod", "()Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC},
	{"dynamicType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"isDynamic", "()Z", nullptr, $PUBLIC},
	{"*poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"staticArgs", "()[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$DynamicMethodSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$DynamicMethodSymbol", "com.sun.tools.javac.code.Symbol", "DynamicMethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$DynamicMethodSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$DynamicMethodSymbol",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	"com.sun.tools.javac.jvm.PoolConstant$Dynamic",
	_Symbol$DynamicMethodSymbol_FieldInfo_,
	_Symbol$DynamicMethodSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$DynamicMethodSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$DynamicMethodSymbol($Class* clazz) {
	return $of($alloc(Symbol$DynamicMethodSymbol));
}

$String* Symbol$DynamicMethodSymbol::toString() {
	 return this->$Symbol$MethodSymbol::toString();
}

int32_t Symbol$DynamicMethodSymbol::hashCode() {
	 return this->$Symbol$MethodSymbol::hashCode();
}

bool Symbol$DynamicMethodSymbol::equals(Object$* arg0) {
	 return this->$Symbol$MethodSymbol::equals(arg0);
}

$Object* Symbol$DynamicMethodSymbol::clone() {
	 return this->$Symbol$MethodSymbol::clone();
}

void Symbol$DynamicMethodSymbol::finalize() {
	this->$Symbol$MethodSymbol::finalize();
}

$Object* Symbol$DynamicMethodSymbol::poolKey($Types* types) {
	 return this->$Symbol$MethodSymbol::poolKey(types);
}

void Symbol$DynamicMethodSymbol::init$($Name* name, $Symbol* owner, $Symbol$MethodHandleSymbol* bsm, $Type* type, $PoolConstant$LoadableConstantArray* staticArgs) {
	$Symbol$MethodSymbol::init$(0, name, type, owner);
	$set(this, bsm, bsm);
	$set(this, staticArgs$, staticArgs);
}

bool Symbol$DynamicMethodSymbol::isDynamic() {
	return true;
}

$PoolConstant$LoadableConstantArray* Symbol$DynamicMethodSymbol::staticArgs() {
	return this->staticArgs$;
}

$PoolConstant$LoadableConstant* Symbol$DynamicMethodSymbol::bootstrapMethod() {
	return this->bsm;
}

int32_t Symbol$DynamicMethodSymbol::poolTag() {
	return $ClassFile::CONSTANT_InvokeDynamic;
}

$PoolConstant* Symbol$DynamicMethodSymbol::dynamicType() {
	return this->type;
}

Symbol$DynamicMethodSymbol::Symbol$DynamicMethodSymbol() {
}

$Class* Symbol$DynamicMethodSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$DynamicMethodSymbol, name, initialize, &_Symbol$DynamicMethodSymbol_ClassInfo_, allocate$Symbol$DynamicMethodSymbol);
	return class$;
}

$Class* Symbol$DynamicMethodSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com